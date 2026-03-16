#include <iostream>
#include <string>
using namespace std;

class CircularQueue {
private:
    string *arr;
    int front, rear, size, capacity;

    

public:
    CircularQueue(int cap) {
        capacity = cap;
        arr = new string[capacity];
        front = 0;
        rear = -1;
        size = 0;



    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

 
    void enqueue(string value) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
    }


    string dequeue() {
        if (isEmpty()) {
            return "None";
        }

        string removed = arr[front];
        front = (front + 1) % capacity;
        size--;
        return removed;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        int index = front;
        for (int i = 0; i < size; i++) {
            cout << arr[index] << " ";
            index = (index + 1) % capacity;
        }
        cout << endl;
    }
};

int main() {



    CircularQueue q(10);

    q.enqueue("Hello");
    q.enqueue("World");
    q.display();
    cout << q.dequeue() << endl;
    q.display();
    q.enqueue("apple");
    q.display();
    q.enqueue("banana");
    q.display();
    cout << q.dequeue() << endl;
    q.display();
    q.enqueue("Red");
    q.enqueue("Green");
    q.enqueue("One");
    q.enqueue("Seven");
    q.enqueue("Yellow");
    q.display();
    return 0;
}


#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;        // pointer to dynamic array
    int capacity;    // total size
    int size;        // elements stored

public:
    DynamicArray() {
        capacity = 1;
        size = 0;
        arr = new int[capacity];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void resize() {
        int* newArr = new int[capacity * 2];

        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
        capacity *= 2;
    }

    void append(int value) {
        if (size == capacity)
            resize();

        arr[size] = value;
        size++;
    }

    int get(int index) {
        return arr[index];
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};

int main() {
    DynamicArray a;

    a.append(10);
    a.append(20);
    a.append(30);

    cout << "Size: " << a.getSize() << endl;
    cout << "Capacity: " << a.getCapacity() << endl;

    for (int i = 0; i < a.getSize(); i++)
        cout << a.get(i) << " ";

    return 0;
}


