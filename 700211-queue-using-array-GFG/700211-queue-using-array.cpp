class myQueue {
    queue<int>q;
    int capacity;

  public:
    myQueue(int n) {
        // Define Data Structures
        capacity=n;
        
    }

    bool isEmpty() {
        // check if the queue is empty
        return q.empty();
    }

    bool isFull() {
        // check if the queue is full
        return q.size()==capacity;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(!isFull()){
            q.push(x);
        }
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(!isEmpty()){
            q.pop();
        }
        
    }

    int getFront() {
        // Returns the front element of the queue.
        if(isEmpty()) return -1;
        return q.front();
    }

    int getRear() {
        // Return the last element of queue
        if(isEmpty()) return -1;
        return q.back();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna