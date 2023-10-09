#include "UnorderedArray.h"
UnorderedArray::UnorderedArray(int initialCapacity) : Array(initialCapacity) {}

void UnorderedArray::push(int item) {
    if (size == capacity) {
        Expand();
    }
    data[size++] = item;
}

int UnorderedArray::pop() {
    if (size > 0) {
        return data[--size];
    }
    else {
        throw out_of_range("Array is empty");
    }
}

void UnorderedArray::display() const {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
   cout << endl;
}

void UnorderedArray::Expand() {
    if (capacity == 0) {
        capacity = 2;
    }
    else {
        capacity *= 2;
    }
    data.resize(capacity);
}