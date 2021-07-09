#include "UpperTriangular.hpp"
using namespace std;
#include <iostream>

UpperTriangular::UpperTriangular(int dim):
LowerTriangular(dim)
{
}

UpperTriangular::~UpperTriangular()
{
}
void UpperTriangular::display(){
    for (int i{0}; i<length; i++){
        for (int j{0}; j<length; j++){
            if (i <= j){
                int index = ((i)*length) - (((i-1)*(i))/ 2) + ((j+1)-(i+1)) ;
                cout<<a[index]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}

