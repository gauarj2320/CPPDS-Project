#include <iostream>

class Queue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int size) : arr(new int[size]), front(0), rear(-1), capacity(size) {}

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int value) {
        if (rear < capacity - 1) {
            arr[++rear] = value;
        } else {
            std::cout << "Queue Overflow!" << std::endl;
        }
    }

    void dequeue() {
        if (front <= rear) {
            ++front;
        } else {
            std::cout << "Queue Underflow!" << std::endl;
        }
    }

    int peek() {
        if (front <= rear) {
            return arr[front];
        }
        std::cout << "Queue is empty!" << std::endl;
        return -1; // Assuming -1 represents an empty queue
    }

    bool isEmpty() {
        return front > rear;
    }
};
