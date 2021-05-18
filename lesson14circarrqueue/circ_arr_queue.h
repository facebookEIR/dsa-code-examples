#ifndef __CIRC_ARR_QUEUE_H__
#define __CIRC_ARR_QUEUE_H__


// Exception classes
class QueueEmpty {};
class QueueFull {};

// NOTE: This simplified example does not include overriding 
// copy constructor or assignment operator, but you should do this
// in a full implementation of the CircArrQueue class.
class CircArrQueue {
  private:
    int* arr;
    int n;
    int front;
    int back;
    int capacity;

  public: 
    CircArrQueue(); // Constructor 
    ~CircArrQueue(); // Destructor
    void Enqueue(int);
    void Dequeue();
    int Front();
    bool IsEmpty();
    int Size(); 
};

#endif /* __CIRC_ARR_QUEUE_H__ */