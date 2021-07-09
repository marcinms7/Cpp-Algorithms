#include <iostream>
#include <Chaining.hpp>
#include <Probing.hpp>
using namespace std;


int main()
{
    //this is not really working well with 1 10 100 and searching hm
    //also, take time to understand linked lists here 
    cout<<"----------------------"<<endl;
    Chaining test(12);
    
    test.insert(16);
    test.insert(12);
    test.insert(5);
    
    cout<<test.search(6)<<endl;
    cout<<test.search(99)<<endl;
    cout<<test.search(16)<<endl;
    cout<<"----------------------"<<endl;
    Probing test2(10);
    test2.insert(99);
    test2.insert(88);
    test2.insert(77);
    test2.insert(66);
    test2.insert(55);
    test2.print_array();
    cout<<"----------------------"<<endl;
    test2.insert(54);
    test2.print_array();
    return 0;
}
