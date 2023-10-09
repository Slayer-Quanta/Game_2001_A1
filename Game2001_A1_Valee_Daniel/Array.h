#ifndef ARRAY_H
#define ARRAY_H

#include <vector>

class Array {
protected:
    std::vector<int> data;
    int size;
    int capacity;

public:
    Array(int initialCapacity = 2);
    virtual ~Array(); // Add a virtual destructor to handle polymorphism
    virtual void push(int item);
    int pop();
    void display();

private:
    void Expand();
};

#endif // ARRAY_H
