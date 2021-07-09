#include "Stack.hpp"

Stack::Stack()
{
    top = nullptr;
}

Stack::~Stack()
{
    Node *p = top;
    while (top){
        top = top->next;
        delete p;
        p = top;
    }
}

void Stack::push (int x){
    Node* p = new Node;
    p->data = x;
    p->next = top;
    top = p;
}
void Stack::pop(){
    if (top == nullptr){
        cout<<"Stack underflow"<<endl;
    }
    else{
        Node* p = new Node;
        p=top;
        top = top->next;
        delete p;
    }
}
bool Stack::isnull(){
    
    return (top == nullptr ? 1 : 0);
}

void Stack::display(){
    Node *p = top;
    while (p != NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}

