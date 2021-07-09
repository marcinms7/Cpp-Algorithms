#include <stdio.h>
#include <iostream>
using namespace std;
#include <QueueArray.hpp>

int main()
{

    QueueArray test(10);
    
    test.enqueue(100);
    test.enqueue(55);
    test.enqueue(69);
    test.enqueue(111);
    test.enqueue(999);
    
    test.display();
    cout<<"---------"<<endl;
    test.dequeue();
    test.display();
	return 0;
}
