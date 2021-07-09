#include <iostream>
using namespace std;
#include <SearchTree.hpp>

int main()
{

    SearchTree test;
    test.insert(100);
    test.insert(23);
    test.insert(43);
    test.insert(1);
    test.insert(43);
    test.insert(33);
    
    test.display(test.root);


	return 0;
}
