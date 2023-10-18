#include <iostream>

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) : arr(new int[size]), top(-1), capacity(size) {}

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top < capacity - 1) {
            arr[++top] = value;
        } else {
            std::cout << "Stack Overflow!" << std::endl;
        }
    }

    void pop() {
        if (top >= 0) {
            --top;
        } else {
            std::cout << "Stack Underflow!" << std::endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        }
        std::cout << "Stack is empty!" << std::endl;
        return -1; // Assuming -1 represents an empty stack
    }

    bool isEmpty() {
        return top == -1;
    }
};
