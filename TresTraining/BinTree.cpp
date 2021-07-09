#include <iostream>
#include "BinTree.hpp"
using namespace std;

BinTree::BinTree()
{
    root = NULL;
}

BinTree::~BinTree()
{
}

void BinTree::create(){
    Node *a, *b;
    int x,y;
    Queue q(100);
    
    //creating root
    cout<<"Enter root: "<<endl;
    cin>>x;
    root = new Node;
    root->data = x;
    root->lnode = NULL;
    root->rnode = NULL;
    q.enqueue(root);
    
    while(q.emptycheck()==false){
        a = q.dequeue();
        cout<<"Enter left node of: "<<a->data<<endl;
        cin>>x;
        if(x != -1){
            b = new Node;
            b-> data = x;
            b->lnode = NULL;
            b->rnode = NULL;
            a->lnode = b;
            q.enqueue(b);
        }
        
        cout<<"Enter right node of: "<<a->data<<endl;
        cin>>y;
        if(y != -1){
            b = new Node;
            b-> data = y;
            b->lnode = NULL;
            b->rnode = NULL;
            a->rnode = b;
            q.enqueue(b);
            
        }
        
    }
}

void BinTree::display(Node *nod){
    if(nod){
        cout<<nod->data<<endl;
        display(nod->lnode);
        display(nod->rnode);
    }
}
void BinTree::displayInorder(Node *nod){
    if(nod){
        display(nod->lnode);
        cout<<nod->data<<endl;
        display(nod->rnode);
    }
}
void BinTree::displayPostorder(Node *nod){
    if(nod){
        display(nod->lnode);
        display(nod->rnode);
        cout<<nod->data<<endl;
    }
}

void BinTree::displayLevel(Node *nod){
        Queue q(100);
    cout<<nod->data<<endl;
    
    q.enqueue (nod);
   while(q.emptycheck()==false){
       nod = q.dequeue();
       if (nod->lnode){
           cout<<nod->lnode->data<<endl;
           q.enqueue(nod->lnode);
       }
       if (nod->rnode){
           cout<<nod->rnode->data<<endl;
           q.enqueue(nod->rnode);
       }
   }

}

int BinTree::height(Node *nod){
    int x{0},y{0};
    if (nod == NULL){
        return 0;
    }
    x = height(nod->rnode);
    y = height(nod->lnode);
    if(x>y){
        return x+1;
    }
    else{
        return y+1;
    }
}