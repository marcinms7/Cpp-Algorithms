#include "LowerTriangular.hpp"
using namespace std;
#include <iostream>

LowerTriangular::LowerTriangular(int dim)
{
    int n;
    length = dim;
    n = (dim * (dim + 1)/2);
    a = new int [n]{};
}

LowerTriangular::~LowerTriangular()
{   
    delete []a;
}

void LowerTriangular::set(){
    int x{0};
    for (int i{0}; i<length; i++){
        for (int j{0}; j<length; j++){
            if (i >= j){
                cout<<"Enter number for position "<<i<<" ,"<<j<<endl;
                cin>>x;
                int index = (((i+1) * (i ))/2) + j;
                a[index] = x;
        }
    }


}
}

void LowerTriangular::display(){
    for (int i{0}; i<length; i++){
        for (int j{0}; j<length; j++){
            if (i >= j){
                int index = (((i+1) * (i ))/2) + j ;
                cout<<a[index]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}

void LowerTriangular::get_array(){
    int n{0};
    n = (length * (length + 1)/2);
    for (int i{0}; i<n; i++){
        cout<< i<<": "<<a[i]<<" ";
    }
}

int LowerTriangular::get(int i, int j){
    int index = (((i+1) * (i ))/2) + j ;
    if (i >= j){
        return a[index];
    }
    return 0;


}