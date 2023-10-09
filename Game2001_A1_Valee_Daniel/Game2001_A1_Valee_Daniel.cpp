// Game2001_A1_Valee_Daniel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "OrderedArray.h"
#include "UnorderedArray.h"
#include "Array.h"

int main() {
    OrderedArray ordered_array(4, true);
    ordered_array.push(5);
    ordered_array.push(3);
    ordered_array.push(7);
    ordered_array.push(3);
    cout << "Ordered Array: ";
    ordered_array.display();  

    int search_item = 5;
    if (ordered_array.contains(search_item)) {
        cout << search_item << " is in the ordered array." << endl;
    }
    else {
        cout << search_item << " is not in the ordered array." << endl;
    }
    
    UnorderedArray unordered_array(4); 
    unordered_array.push(9);
    unordered_array.push(2);
    unordered_array.push(9);  
    cout << "Unordered Array: ";
    unordered_array.display();  

    int popped_item1 = unordered_array.pop();
    int popped_item2 = unordered_array.pop();
    cout << "Popped items from Unordered Array: " << popped_item1 << " " << popped_item2 << endl;

    return 0;
}

