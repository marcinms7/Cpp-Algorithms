#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

class Stack
{
private:
    Node* top;
public:
    Stack();
    ~Stack();
    void push (int x);
    void pop();
    bool isnull();
    void display();
    
     

};

#endif // STACK_HPP
