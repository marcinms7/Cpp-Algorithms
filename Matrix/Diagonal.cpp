#include <Diagonal.hpp>
#include <iostream>
using namespace std;

Diagonal::Diagonal(int length_set)
{
    length = length_set;
    a = new int [length]{};
}

Diagonal::~Diagonal()
{   delete []a;
}

void Diagonal:: set(){
    int num{0}, i{0};
    for (i; i< length;i++){
        cout<<"Enter number"<<endl;
        cin>>num;
        a[i] = num;
    }
}

void Diagonal::display(){
//    int i{0},j{0};
    
    for (int i{0};i<length;i++){
        
        for (int j{0}; j<length; j++){
            
            if (i==j){
                cout<<a[j]<<" ";
            }
            
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}

int Diagonal::get(int i , int j){
    if (i == j){
        return a[i];
    }
    return 0;
}