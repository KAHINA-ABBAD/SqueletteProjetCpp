// src/MyClass.cpp
#include "MyClass.h"
#include <iostream>

MyClass::MyClass() : value(10) {}

void MyClass::sayHello() {
    std::cout << "Hello, World! La valeur est " << value << std::endl;
}
