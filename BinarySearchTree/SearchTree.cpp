#include "SearchTree.hpp"
#include <iostream>
using namespace std;
SearchTree::SearchTree()
{   root = nullptr;
}

SearchTree::~SearchTree()
{
}

void SearchTree::insert(int number){
    Node* no = root;
    Node * a;
    Node *b;
    
    if (root == nullptr){
        a = new Node;
        a->data = number;
        a->left = nullptr;
        a->right = nullptr;
        root = a;
        return;
    }
    while(no!=nullptr){
        b = no;
        if(number<no->data){
            no = no->left;
        }
        else if (number > no->data){
            no = no->right;
        }
        else{
            return;
        }
    }
    a = new Node;
    a->data = number;
    a->right = nullptr;
    a->left = nullptr;
    
    if (number < b->data){
        b->left = a;
    }
    else{
        b->right = a;
    }
    
    
    
}

void SearchTree::display(Node *nod){
    if(nod){
        cout<<nod->data<<endl;
        display(nod->left);
        display(nod->right);
    }
}
