#include <iostream>
using namespace std;
#include <linked_list.hpp>



int main()
{
    
    int a[] = {3,5,5,7,6,5,6,6,4,4,15,6,1};
    linked_list l(a,12);
    
    l.display();
    cout<<"-----------"<<endl;
    l.insert(1,999);
    l.display();
    cout<<"-----------"<<endl;
    
    cout<<l.sum()<<endl;
    cout<<"-----------"<<endl;
    l.ndelete(1);
    l.display();
    
    cout<<"-----------"<<endl;
//    l.remove_dups();
//    l.display();
    return 0;
    
}
