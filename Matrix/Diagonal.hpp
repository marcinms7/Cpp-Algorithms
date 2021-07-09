#include <iostream>
using namespace std;
#ifndef DIAGONAL_HPP
#define DIAGONAL_HPP

class Diagonal
{
    
private: 
    int *a;
    int length;
public:
    Diagonal(int length_set);
    ~Diagonal();
    void display();
    void set();
    int get(int i , int j);


};

#endif // DIAGONAL_HPP
