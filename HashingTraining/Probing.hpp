#ifndef PROBING_HPP
#define PROBING_HPP
#include "Chaining.hpp"
//This is class for linear probing. quadratic probing works similar, only
//take square of the i in the equation
class Probing : public Chaining
{
private:
    int size;
    int *Hashar ;
public:
    Probing(const int len);
    ~Probing();
    void insert(int key);
    int linear_probe(int key);
    void print_array();

};

#endif // PROBING_HPP
