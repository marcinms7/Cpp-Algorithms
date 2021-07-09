#ifndef QUEUEARRAY_HPP
#define QUEUEARRAY_HPP
#include <iostream>
using namespace std;

class QueueArray
{
private:
    int start;
    int end;
    int *q;
    int size;
public:
    QueueArray(int sizeset);
    ~QueueArray();
    void enqueue(int x);
    void dequeue ();
    void display();

};

#endif // QUEUEARRAY_HPP
