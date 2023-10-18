# CPPDS-Project
String Sorting Linked List 
This project demonstrates the implementation of a string sorting system using a linked list in C++. The project provides a set of functions for creating a linked list, inserting and deleting nodes, sorting the list, finding repeated words, and counting word occurrences. Below is an overview of the project components and usage instructions.

Project Components
1. main.cpp
The main.cpp file serves as the entry point for the program. It showcases the usage of linked list functions defined in LinkedList.h. Operations such as insertion, deletion, sorting, and finding repeated words are demonstrated here.

How to Use main.cpp
Include necessary header files: <iostream> and "LinkedList.h".
Create a Node* variable representing the head of the linked list.
Utilize the provided functions for linked list operations.
2. LinkedList.h
This header file contains the implementation of linked list operations. Functions for inserting at the head or tail, deleting from the head or tail, sorting, and finding repeated words are defined within the LinkedList namespace.

How to Use LinkedList.h
Include "LinkedList.h" in your C++ files.
Utilize functions within the LinkedList namespace for various linked list operations.
Functionality Overview
Insertion and Deletion: Nodes can be inserted at the head or tail, and deletion can be performed from the head or tail of the linked list.
Sorting: The linked list can be sorted in ascending order using Bubble Sort.
Finding Repeated Words: The system identifies and prints repeated words in the linked list.
Counting Occurrences: The system can count the occurrences of specific words in the list.

Usage Example:
#include <iostream>
#include "LinkedList.h"

using namespace LinkedList;

int main() {
    Node* head = NULL;
    // Perform linked list operations here
    // ...
    return 0;
}
Performance Considerations
The sorting algorithm used in this project is Bubble Sort, which has a time complexity of O(n^2) in the worst case. For large datasets, consider using more efficient sorting algorithms like QuickSort or MergeSort for improved performance.

Contributors
Ashish Balsure
Bhoumik Sundaram
Arjunsingh Gautam
