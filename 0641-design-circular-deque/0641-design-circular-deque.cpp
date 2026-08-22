class MyCircularDeque {
private:
    vector<int> arr;
    int front;
    int size;
    int capacity;

public:
    MyCircularDeque(int k) {
        capacity = k;
        arr.resize(k);
        front = 0;
        size = 0;
    }
    
    bool insertFront(int value) {
        if (isFull()) return false;
        front = (front - 1 + capacity) % capacity;  // move front back, wrap if needed
        arr[front] = value;
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) return false;
        int rearIdx = (front + size) % capacity;   // one past the current last element
        arr[rearIdx] = value;
        size++;
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty()) return false;
        front = (front + 1) % capacity;   // just move front forward, wrap if needed
        size--;
        return true;
    }
    
    bool deleteLast() {
        if (isEmpty()) return false;
        size--;   // simply shrink size -- no need to touch the actual array value
        return true;
    }
    
    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }
    
    int getRear() {
        if (isEmpty()) return -1;
        int rearIdx = (front + size - 1) % capacity;
        return arr[rearIdx];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna