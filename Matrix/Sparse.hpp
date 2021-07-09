#ifndef SPARSE_HPP
#define SPARSE_HPP
#include <iostream>
using namespace std;

class Sparse
{
private:
    int *rows;
    int *columns;
    int *numbers;
    int n_elements;
    int n_rows;
    int n_columns;
    
public:
    Sparse( int elements, int set_rows, int set_columns);
    ~Sparse();
    friend istream & operator>>(istream &is,Sparse &s);
    friend ostream & operator<<(ostream &ret,Sparse &s);
    Sparse operator+(Sparse &s);
};

#endif // SPARSE_HPP
