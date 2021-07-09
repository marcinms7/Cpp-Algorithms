#include "Queue.hpp"
#include <iostream>
using namespace std;


Queue::Queue()
{
    front = -1;
    end = -1;
    size = 10;
    q = new Node* [size];

}

Queue::Queue(int sizeset)
{
    front = -1;
    end = -1;
    size = sizeset;
    q = new Node* [size];
}


Queue::~Queue()
{
    delete []q;
}

void Queue::enqueue(Node *x){
    end++;
    q[end] = x;
    
}

Node* Queue::dequeue(){
    Node* x = nullptr;
    if(front == end){
        
    }
    else{
        front++;
        x = q[front];
    }
    return x;
    
}
bool Queue::emptycheck(){
    if(front==end){
        return true;
    }
    else{
        return false;
    }
}