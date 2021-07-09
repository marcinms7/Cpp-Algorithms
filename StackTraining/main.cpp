#include <iostream>
using namespace std;
#include <Stack.hpp>

int main()
{

    Stack t;
    cout<<t.isnull()<<endl;
    t.push(100);
    t.push(20);
    t.push(99);
    t.push(69);
    t.display();
    cout<<"---------"<<endl;
    t.pop();
    t.display();
    
    cout<<t.isnull();




	return 0;
}
