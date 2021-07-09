#ifndef QUEUE_HPP
#define QUEUE_HPP
class Node{
public:
    Node *lnode;
    Node *rnode;
    int data;
};
class Queue
{
private:
    int front;
    int end;
    int size;
    Node **q;
public:
    Queue();
    Queue(int sizeset);
    ~Queue();
    void enqueue(Node *x);
    Node* dequeue ();
    bool emptycheck();

};

#endif // QUEUE_HPP
