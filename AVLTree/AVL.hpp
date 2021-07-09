#ifndef AVL_HPP
#define AVL_HPP
class Node{
public:
    Node* left;
    Node* right;
    int data;
    int height;
};

class AVL
{
public:
    Node *root;
public:
    AVL();
    ~AVL();
    void display(Node *nod);
    void display(){display(root);};
    int countheight(Node *nod);
    int balance_factor(Node* nod);
    Node* insert (Node*nod, int value);
    Node* right_rev(Node*nod);
    Node* left_rev(Node*nod);
    Node* rightleft_rev(Node*nod);
    Node* leftright_rev(Node*nod);
    

};

#endif // AVL_HPP
