#include "QueueArray.hpp"
#include <iostream>
using namespace std;

QueueArray::QueueArray(int sizeset)
{
    start = -1;
    end = -1;
    size = sizeset;
    q = new int [size];
    
    
}

QueueArray::~QueueArray()
{
    delete []q;
}

void QueueArray::enqueue(int x){
    if (end == size-1){
        cout<<"Queue is full :("<<endl;
    }
    else{
        end++;
        q[end] = x;
    }
}

void QueueArray::dequeue(){
    if (start == end){
        cout<<"Queue is empty"<<endl;
    }
    else{
        int i{-1};
        start++;
        i = q[start];
    }
}

void QueueArray::display(){
    for(int i{start+1};i<end ;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}