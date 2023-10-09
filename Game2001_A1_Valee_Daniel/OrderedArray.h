#ifndef ORDEREDARRAY_H
#define ORDEREDARRAY_H

#include <vector>
#include <iostream>
#include "Array.h" 
using namespace std;

class OrderedArray : public Array {
private:
    bool preventDuplicates;

public:
    OrderedArray(int initialCapacity = 2, bool preventDuplicates = false);
    void push(int item) override;
    bool contains(int item) const;
    void display() const;

private:
    void Expand();
};

#endif // ORDEREDARRAY_H
