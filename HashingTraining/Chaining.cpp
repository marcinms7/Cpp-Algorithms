#include "Chaining.hpp"

Chaining::Chaining()
{
    const int size = 10;
    Hash = new Node*[10];
    for (int i{0}; i<10; i++){
        Hash[i] = nullptr;
    }
}
Chaining::Chaining(const int len){
    size = len;
    Hash = new Node*[size];
    for (int i{size}; i<size; i++){
        Hash[i] = nullptr;
    }
}
Chaining::~Chaining()
{
    delete [] Hash;
}

int Chaining::hash(int key){
    return key % 10;
}
void Chaining::insert(int key){
    int index = hash(key);
    Node * t = new Node;
    t->data = key;
    t->next = nullptr;
    if (Hash[index] = nullptr){
        Hash[index] = t;
    }
    else{
        Node * p = Hash[index];
        Node* q = Hash[index];
        
        //traverse to find not empty position
        while(p && p->data < key){
            q = p;
            p = p->next;
        }
        //if the position is first
        if (Hash[index] == q){
            t->next = Hash[index];
            Hash[index] = t;
        }
        else{
            t->next = q->next;
            q->next = t;
        }
    }
}
int Chaining::search(int key){
    int index = hash(key);
    Node* p = Hash[index];
    while(p){
        if(p->data == key){
            return p->data;
        }
        else{
            p = p->next;
        }
    }
    return -1;
}
