#include <iostream>
using namespace std;
#include <AVL.hpp>

int main()
{
    AVL test;
    cout<<test.countheight(test.root)<<endl;
    test.root = test.insert(test.root, 999);
    test.root = test.insert(test.root, 7777);
    cout<<"------"<<endl;
    test.display();
    cout<<endl<<test.root->data<<endl;
    test.root = test.insert(test.root, 434);
    test.root = test.insert(test.root, 5);
    test.root = test.insert(test.root, 1);
    test.root = test.insert(test.root, 100000000);
    cout<<"------"<<endl;
    test.display();
    cout<<endl<<test.root->data<<endl;

    test.root = test.insert(test.root, 2);
    test.root = test.insert(test.root, 3);
    test.root = test.insert(test.root, 4);
    test.root = test.insert(test.root, 18);
    test.root = test.insert(test.root, 6);
    cout<<"------"<<endl;
    cout<<"------"<<endl;
    test.display();
    cout<<endl<<test.root->data<<endl;
    
    
    
    
    
    test.root = test.insert(test.root, 200000);
    test.root = test.insert(test.root, 39999);
    test.root = test.insert(test.root, 49999);
    test.root = test.insert(test.root, 199998);
    test.root = test.insert(test.root, 69999999999999999);
    test.root = test.insert(test.root, 699999999994999999);
    test.root = test.insert(test.root, 999999229994999999);
    test.root = test.insert(test.root, 699999999399999);
    cout<<"------"<<endl;
    cout<<"------"<<endl;
    cout<<"------"<<endl;
    test.display();
    cout<<endl<<test.root->data<<endl;
    
	return 0;
}
