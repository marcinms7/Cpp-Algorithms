#include <iostream>
using namespace std;
#include <BinTree.hpp>
#include <Queue.hpp>

int main()
{
    BinTree t;
    t.create();
    
    cout<<"--------"<<endl;
    t.display(t.root);
    cout<<"--------"<<endl;
    t.displayLevel(t.root);
    cout<<"--------"<<endl;
    cout<<t.height(t.root);

	return 0;
}
