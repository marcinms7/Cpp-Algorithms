#ifndef CHAINING_HPP
#define CHAINING_HPP
class Node{
public:
    Node *next;
    int data;
};
class Chaining
{
private:
    int size;
public:
    Node** Hash;
    int hash(int key);
    void insert(int key);
    int search(int key);
    

    Chaining();
    Chaining(int len);
    ~Chaining();

};

#endif // CHAINING_HPP
