#include <iostream>
#include <vector>
using namespace std;
#include <Diagonal.hpp>
#include <LowerTriangular.hpp>
//#include <Diagonal.cpp>
#include <UpperTriangular.hpp>
#include <Sparse.hpp>


int main()
{

//    cout<<"testtest"<<endl;
//    Diagonal identity(4);
//    identity.set();
//    identity.display();
//    cout<<"---------"<<endl;
//    cout<<identity.get(2,2);

//    LowerTriangular m1(4);
//    m1.set();
//    cout<<"---------"<<endl;
//    m1.display();
//    cout<<"---------"<<endl;
//    m1.get_array();
//    cout<<m1.get(2,2);
    
//    UpperTriangular m2(4);
//    m2.set();
//    m2.display();
//    cout<<"---------"<<endl;
//    m2.get_array();

    Sparse m3(2, 2, 2);
    cin>>m3;
    cout<<"--------------"<<endl;
    cout<<m3;
    Sparse m4(2, 2, 2);
    cin>>m4;
    cout<<"--------------"<<endl;
    cout<<m4;
    
    Sparse sum=m4 + m3;
    cout<<"--------------"<<endl;
    cout<<sum;
    return 0;
}
