template <typename T>
RectangleGenerics<T>::RectangleGenerics(T width, T height) : width(width), height(height) {}

template <typename T>
T RectangleGenerics<T>::area() const {
    return width * height;
}

template<typename T>
T RectangleGenerics<T>::perimeter() const {
    return 2 * (width + height);
}

template<typename T>
void RectangleGenerics<T>::display() const {
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}

template<typename T>
T RectangleGenerics<T>::getWidth() const {
    return this->width;
}

template<typename T>
T RectangleGenerics<T>::getHeight() const {
    return this->height;
}
template<typename T>
void RectangleGenerics<T>::setHeight(T height) {
    this->height = height;
}

template<typename T>
void RectangleGenerics<T>::setWidth(T width) {
    this->width = width;
}



