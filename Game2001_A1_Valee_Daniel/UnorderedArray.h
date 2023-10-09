#ifndef UNORDEREDARRAY_H
#define UNORDEREDARRAY_H

#include <vector>
#include <iostream>
#include "Array.h" 
using namespace std;

class UnorderedArray : public Array {
public:
    UnorderedArray(int initialCapacity = 2);
    void push(int item);
    int pop();
    void display() const;

private:
    void Expand();
};

#endif // UNORDEREDARRAY_H
