#ifndef BINTREE_HPP
#define BINTREE_HPP
#include <Queue.hpp>

class BinTree
{
public:
    Node *root;
public:
    BinTree();
    ~BinTree();
    void create();
    void display(Node *nod);
    void displayInorder(Node *nod);
    void displayPostorder(Node *nod);
    void displayLevel(Node *nod);
    int height(Node *nod);
};

#endif // BINTREE_HPP
