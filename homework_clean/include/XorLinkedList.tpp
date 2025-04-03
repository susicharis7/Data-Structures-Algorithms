#ifndef XORLINKEDLIST_TPP
#define XORLINKEDLIST_TPP

#include <cstdint>
#include <iterator>

/**
 * These methods are already implemented for you.
 */
template<typename Data>
Node<Data>* ptr_xor(Node<Data> *p, Node<Data> *q) {
    return reinterpret_cast<Node<Data>*>(reinterpret_cast<uintptr_t>(p) ^ reinterpret_cast<uintptr_t>(q));
}

// Needed for running the tests, DO NOT DELETE IT !!
template<typename Data>
Node<Data> *XorLinkedList<Data>::get_head() const {
    return head;
}


/**
 * Your implementations below this comment.
 */


// Destructor
template<typename Data>
XorLinkedList<Data>::~XorLinkedList() {
    Node<Data>* prev = nullptr;
    Node<Data>* current = head;

    while (current != nullptr) {
        Node<Data>* next = ptr_xor<Data>(prev, current->both);
        delete prev;
        prev = current;
        current = next;
    }

    delete prev;
    head = nullptr;
    size = 0;
}

// Copy Constructor
template<typename Data>
XorLinkedList<Data>::XorLinkedList(const XorLinkedList<Data>& src) {
    head = nullptr;
    size = 0;

    Node<Data>* prev = nullptr;
    Node<Data>* current = src.head;

    while (current != nullptr) {
        add_to_back(current->data);
        Node<Data>* next = ptr_xor<Data>(prev, current->both);
        prev = current;
        current = next;
    }
}




// Copy Assignment
template<typename Data>
XorLinkedList<Data>& XorLinkedList<Data>::operator=(const XorLinkedList<Data>& src) {
    if (this == &src) return *this;

    // Clear current list first
    this->~XorLinkedList();
    head = nullptr;
    size = 0;

    Node<Data>* prev = nullptr;
    Node<Data>* current = src.head;

    while (current != nullptr) {
        add_to_back(current->data);
        Node<Data>* next = ptr_xor<Data>(prev, current->both);
        prev = current;
        current = next;
    }

    return *this;
}


// Move Constructor
template<typename Data>
XorLinkedList<Data>::XorLinkedList(XorLinkedList<Data>&& src) noexcept {
    head = src.head;
    size = src.size;
    src.head = nullptr;
    src.size = 0;
}

// Move Assignment
template<typename Data>
XorLinkedList<Data>& XorLinkedList<Data>::operator=(XorLinkedList<Data>&& src) noexcept {
    if (this != &src) {
        this->~XorLinkedList();
        head = src.head;
        size = src.size;
        src.head = nullptr;
        src.size = 0;
    }
    return *this;
}

// Initializer List Constructor
template<typename Data>
XorLinkedList<Data>::XorLinkedList(std::initializer_list<Data> list) {
    for (const auto& item : list) {
        add_to_back(item);
    }
}


template<typename Data>
void XorLinkedList<Data>::add_to_front(const Data& data) {
    Node<Data>* new_node = new Node<Data>(data);

    if (head == nullptr) {
        head = new_node;
    } else {
        new_node->both = head;
        Node<Data>* next = ptr_xor<Data>(nullptr, head->both);
        head->both = ptr_xor<Data>(new_node, next);
    }

    head = new_node;
    size++;
}


template<typename Data>
void XorLinkedList<Data>::add_to_back(const Data& data) {
    Node<Data>* newNode = new Node<Data>(data);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node<Data>* prev = nullptr;
        Node<Data>* current = head;
        Node<Data>* next;

        while ((next = ptr_xor<Data>(prev, current->both)) != nullptr) {
            prev = current;
            current = next;
        }

        newNode->both = current;
        current->both = ptr_xor<Data>(prev, newNode);
    }

    size++;
}

// Remove from front
template<typename Data>
void XorLinkedList<Data>::remove_from_front() {
    if (head == nullptr) {
        throw std::out_of_range("List is empty");
    }

    Node<Data>* next = ptr_xor<Data>(nullptr, head->both);
    delete head;
    size--;

    if (next == nullptr) {
        head = nullptr;
        return;
    }

    Node<Data>* nextNext = ptr_xor<Data>(head, next->both);
    next->both = ptr_xor<Data>(nullptr, nextNext);

    head = next;
}


// Remove from back
template<typename Data>
void XorLinkedList<Data>::remove_from_back() {
    if (head == nullptr) throw std::out_of_range("List is empty");

    Node<Data>* prev = nullptr;
    Node<Data>* current = head;
    Node<Data>* next;

    while ((next = ptr_xor<Data>(prev, current->both)) != nullptr) {
        prev = current;
        current = next;
    }

    if (prev != nullptr) {
        prev->both = ptr_xor<Data>(ptr_xor<Data>(prev->both, current), nullptr);
    } else {
        head = nullptr;
    }

    delete current;
    size--;
}

// Get element at index
template<typename Data>
Data& XorLinkedList<Data>::get(int index) {
    if (index < 0 || index >= size)
        throw std::out_of_range("Index out of bounds");

    Node<Data>* prev = nullptr;
    Node<Data>* current = head;

    for (int i = 0; i < index; ++i) {
        Node<Data>* next = ptr_xor<Data>(prev, current->both);
        prev = current;
        current = next;
    }

    return current->data;
}

// Count
template<typename Data>
int XorLinkedList<Data>::count() const {
    return size;
}

// Reverse
template<typename Data>
void XorLinkedList<Data>::reverse() {
    if (head == nullptr || ptr_xor<Data>(nullptr, head->both) == nullptr) return;

    Node<Data>* prev = nullptr;
    Node<Data>* current = head;
    Node<Data>* next = nullptr;

    while (current != nullptr) {
        next = ptr_xor<Data>(prev, current->both);
        current->both = ptr_xor<Data>(next, prev);
        prev = current;
        current = next;
    }

    head = prev;
}

// Iterator
template<typename Data>
class XorLinkedList<Data>::Iterator : public std::iterator<std::forward_iterator_tag, Data> {
private:
    Node<Data>* current;
    Node<Data>* prev;

public:
    explicit Iterator(Node<Data>* current) : current(current), prev(nullptr) {}

    Data& operator*() {
        return current->data;
    }

    Iterator& operator++() {
        Node<Data>* next = ptr_xor<Data>(prev, current->both);
        prev = current;
        current = next;
        return *this;
    }

    Iterator operator++(int) {
        Iterator temp = *this;
        ++(*this);
        return temp;
    }

    bool operator==(const Iterator& other) const {
        return current == other.current;
    }

    bool operator!=(const Iterator& other) const {
        return current != other.current;
    }
};


template<typename Data>
typename XorLinkedList<Data>::Iterator XorLinkedList<Data>::begin() {
    return Iterator(head);
}

template<typename Data>
typename XorLinkedList<Data>::Iterator XorLinkedList<Data>::end() {
    return Iterator(nullptr);
}


template<typename Data>
const Data& XorLinkedList<Data>::operator[](int index) const {
    return get(index);
}

template<typename Data>
Data& XorLinkedList<Data>::operator[](const int index) {
    return get(index);
}

#endif // XORLINKEDLIST_TPP
