#include "Array.h"
#include <iostream>

Array::Array(int initialCapacity) : size(0), capacity(initialCapacity) {
    data.resize(initialCapacity);
}

Array::~Array() {
    // Destructor
}

void Array::push(int item) {
    if (size == capacity) {
        Expand();
    }
    data[size++] = item;
}

int Array::pop() {
    if (size > 0) {
        return data[--size];
    }
    else {
        throw std::out_of_range("Array is empty");
    }
}

void Array::display() {
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

void Array::Expand() {
    if (capacity == 0) {
        capacity = 2;
    }
    else {
        capacity *= 2;
    }
    data.resize(capacity);
}
