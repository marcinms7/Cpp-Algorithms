#include "Probing.hpp"
#include <iostream>
using namespace std;
Probing::Probing(const int len)
{
    size = len;
    Hashar = new int[size];
    for (int i{0}; i<size; i++){
        Hashar[i] =0;
    }
}

Probing::~Probing()
{
    delete[] Hashar;
}
void Probing::insert(int key){
    int index = hash(key);
    if(Hashar[index] != 0){
        index = linear_probe(key);
    }
    Hashar[index] = key;
}
int Probing::linear_probe(int key){
    int index = hash(key);
    int i = 0;
    while(Hashar[(index+i) % size] != 0){
        i++;
    }
    return (index+i) % size;
}
void Probing::print_array(){
    for(int i{0}; i<size; i++){
        cout<<Hashar[i]<<" | ";
    }
    cout<<endl;
}

