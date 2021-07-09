#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP
#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};

class linked_list{
private:
    Node *first;
    int length;
public:
    linked_list(int A[],int n);
    ~linked_list();
    void display();
    double sum();
    void insert(int position, int number);
    void ndelete (int position);
    void remove_dups();
};

#endif // LINKED_LIST_HPP
