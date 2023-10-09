// Game2001_A1_Valee_Daniel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "OrderedArray.h"
#include "UnorderedArray.h"
#include "Array.h"

int main() {
    // Create an ordered array with a capacity of 4 and prevent duplicates
    OrderedArray ordered_array(4, true);

    // Push some values to the ordered array to see it grow
    ordered_array.push(5); // Array expands when it gets full (initial capacity: 4)
    ordered_array.push(3); // It grows to handle more items (capacity: 8)
    ordered_array.push(7); // Keeps expanding as needed (capacity: 16)
    ordered_array.push(3); // Ignores duplicates

    // Show the ordered array
    cout << "Ordered Array: ";
    ordered_array.display();

    // Check if a value is in the ordered array
    int search_item = 5;
    if (ordered_array.contains(search_item)) {
        cout << "Yep, " << search_item << " is in there." << endl;
    }
    else {
        cout << "Nope, " << search_item << " didn't make it." << endl;
    }

    // Create an unordered array with a capacity of 4
    UnorderedArray unordered_array(4);

    // Put some numbers into the unordered array
    unordered_array.push(9);
    unordered_array.push(2);
    unordered_array.push(9); // Duplicates are okay here

    // Display the unordered array
    cout << "Unordered Array: ";
    unordered_array.display();

    // Take some values out of the unordered array
    int popped_item1 = unordered_array.pop();
    int popped_item2 = unordered_array.pop();

    // Display the items we took out
    cout << "Popped items from Unordered Array: " << popped_item1 << " " << popped_item2 << endl;

    return 0;
}

