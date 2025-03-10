// #include "StudentGenerics.h" -> ne ide, vec je .tpp ukljucen u .h
// StudentGenerics<T>:: - pisemo da znamo da je to metod/konstruktor klase StudentGenerics sa generickim tipom T
// this-> pokazuje na atribute klase (iz .h filea), vrijednosti proslijedjene u main se upisuju u atribute klase iz .h filea
// ": name(name), age(age), grades(grades)" - lista inicijalizatora
//      koristi se za direktno inicijalizovanje atributa klase pre nego sto uopce udjemo u tijelo konstruktora
//      ako to imamo, this-> nam nije potreban!

// pisemo prije svake metode : void/T (zavisi koji je tip) StudentGenerics<T>:: -> zato sto svaka metoda te klasem ora da zna da je dio templatea

template<typename T>
StudentGenerics<T>::StudentGenerics(string name, int age, T grades) : name(name), age(age), grades(grades) {}

template<typename T>
void StudentGenerics<T>::display() const{
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout <<"Grades: " << this->grades << endl;
}

template<typename T>
void StudentGenerics<T>::setGPA(T grades) {
    this->grades = grades;
}

template<typename T>
T StudentGenerics<T>::getGPA() const {
    return this->grades;
}




