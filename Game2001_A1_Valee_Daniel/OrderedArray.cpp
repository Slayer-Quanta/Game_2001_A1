#include "OrderedArray.h"
#include <algorithm>

OrderedArray::OrderedArray(int initialCapacity, bool preventDuplicates)
    : Array(initialCapacity), preventDuplicates(preventDuplicates) {}

void OrderedArray::push(int item) {
    if (preventDuplicates && contains(item)) {
        return;  
    }
    if (size == capacity) {
        Expand();
    }
    int insertIndex = upper_bound(data.begin(), data.begin() + size, item) - data.begin();

    for (int i = size; i > insertIndex; i--) {
        data[i] = data[i - 1];
    }
    data[insertIndex] = item;
    size++;
}

bool OrderedArray::contains(int item) const {
    return binary_search(data.begin(), data.begin() + size, item);
}

void OrderedArray::display() const {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void OrderedArray::Expand() {
    if (capacity == 0) {
        capacity = 2;
    }
    else {
        capacity *= 2;
    }
    data.resize(capacity);
}