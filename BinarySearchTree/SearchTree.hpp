#ifndef SEARCHTREE_HPP
#define SEARCHTREE_HPP
class Node{
public:
    Node* left;
    Node* right;
    int data;
};
class SearchTree
{
public:
    Node *root;
public:
    SearchTree();;
    ~SearchTree();
    void insert(int number);
    void display(Node *nod);

};

#endif // SEARCHTREE_HPP
