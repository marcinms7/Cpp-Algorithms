#include "AVL.hpp"
#include <iostream>
using namespace std;
AVL::AVL()
{
    root = nullptr;
}

AVL::~AVL()
{
}
void AVL::display(Node *nod){
    if(nod){
        display(nod->left);
        cout<<nod->data<<endl;
        display(nod->right);
    }
}
int AVL::countheight(Node *nod){
    int hright, hleft;
//    checking whether nod and right/left side of it is there
    hright = (nod && nod->right) ? nod->right->height : 0;
    hleft = (nod && nod->left) ? nod->left->height : 0;
    
    return hright > hleft ? hright+1 : hleft+1;
}
int AVL::balance_factor(Node* nod){
    int hright, hleft;
//    checking whether nod and right/left side of it is there
    hright = (nod && nod->right) ? nod->right->height : 0;
    hleft = (nod && nod->left) ? nod->left->height : 0;
    return hleft-hright;
}
Node* AVL::insert (Node*nod, int value){
    Node* temp;
    if(nod == nullptr){
        temp = new Node;
        temp->data = value;
        temp->left = nullptr;
        temp->right = nullptr;
        temp->height = 1;
        nod = temp;
        return temp;
        
    }
    //insertion using recursion
    if (value < nod->data){
        nod->left = insert(nod->left,value);
    }
    else{
        nod->right = insert(nod->right,value);
    }
    //setting height
    nod->height = countheight(nod);
    
    //rotating tree if required and choosing the right rotation
    if(balance_factor(nod) == 2 && balance_factor(nod->left) == 1){
        return left_rev(nod);
    }
    else if (balance_factor(nod) == -2 && balance_factor(nod->right) == -1){
        return right_rev(nod);
    }
    else if (balance_factor(nod) == 2 && balance_factor(nod->left) == -1){
        return leftright_rev(nod);
    }
    else if (balance_factor(nod) == -2 && balance_factor(nod->right) == 1){
        return rightleft_rev(nod);
    }
    
    return nod;
}

Node* AVL::right_rev(Node*nod){
    Node* nright = nod->right;
    Node* rightleft = nright->left;
    
    nright->left = nod;
    nod->right = rightleft;
    
    //upd heights 
    nod->height = countheight(nod);
    nright->height = countheight(nright);
    
    if(nod==root){
        root = nright;
    }
    return nright;
    
}
Node* AVL::left_rev(Node*nod){
    Node* nleft = nod->left;
    Node* leftright = nleft->right;
    
    nleft->right = nod;
    nod->left = leftright;
    
    //upd heights 
    nod->height = countheight(nod);
    nleft->height = countheight(nleft);
    
    if (nod==root){
        root = nleft;
    }
    
    
    return nleft;
    
    
}
Node* AVL::rightleft_rev(Node*nod){
    Node* nright = nod->right;
    Node* rightleft = nright->left;
    
    nright->left = rightleft->right;
    nod->right = rightleft->left;
    
    rightleft->right = nright;
    rightleft->left = nod;
    
    //upd heights 
    nod->height = countheight(nod);
    nright->height = countheight(nright);
    rightleft->height = countheight(rightleft);
    
    if(nod==root){
        root = rightleft;
    }
    return rightleft;
    
}
Node* AVL::leftright_rev(Node*nod){
    Node* nleft = nod->left;
    Node* leftright = nleft->right;
    
    nleft->right = leftright->left;
    nod->left = leftright->right;
    leftright->left = nleft;
    leftright-> right = nod;
    
    //set height 
    nod->height = countheight(nod);
    nleft->height = countheight(nleft);
    leftright->height = countheight(leftright);
    
    if(nod==root){
        root = leftright;
    }
    return leftright;
    
    
    
}


