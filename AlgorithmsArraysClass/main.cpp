#include <iostream>
#include <vector>
#include <Array.hpp>
#include <Array.cpp>

using namespace std;
//void print_array(const int *array , int rows, int columns );
int main()
{
	int size{0};
	cout<< "Enter size of the array"<<endl;
	cin>>size;
	Array <int> array1(size);
	
	int choice;
	do
	{
	cout << endl
	<< " 1 - Print Array.\n"
	<< " 2 - Set element.\n"
	<< " 3 - Insert element.\n"
	<< " 4 - Append element.\n"
	<< " 5 - Remove element.\n"
	<< " 6 - Linear search.\n"
	<< " 7 - Binnary search.\n"
	<< " 8 - Average.\n"
	<< " 9 - Reverse.\n"
	<< " 10 - Sort.\n"
	<< " 11 - Find sum of 2 numbers.\n"
	<< " ------------------------.\n"
	<< " 0 - QUIT.\n"
	<< " Enter your choice and press return: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
	cout<<"Array: "<<endl;
	array1.print_array();
	break;
	case 2:
	int index, value;
	cout<<"Type index you want to set your element to: "<<std::endl;
	cin>>index;
	cout<<"Type number you wish to set: "<<endl;
	cin>>value;
	array1.set(index,value);
	cout<<"Inserted"<<endl;
	break;
	case 3:
	int indx, val;
	cout<<"Type index you want to insert your element to: "<<endl;
	cin>>indx;
	cout<<"Type number you wish to insert: "<<endl;
	cin>>val;
	array1.insert(indx,val);
	cout<<"Inserted"<<endl;
	break;
	case 4:
	int num;
	cout<<"Type number you want to append: "<<endl;
	cin>>num;
	array1.append(num);
	break;
	case 5:
	cout << "Here is your array: .\n";
	array1.print_array();
	cout<<"Type index of the number you'd like to remove: "<<endl;
	int rem;
	cin>>rem;
	array1.remove(rem);
	break;
	case 6:
	cout << "Which number you'd like to search for?.\n";
	int searchednum;
	cin>>searchednum;
	array1.linear_search(searchednum);
	break;
	case 7:
	cout << "Which number you'd like to search for?.\n";
	int searchednumb;
	cin>>searchednum;
	array1.binary_search(searchednumb);
	break;
	case 8:
	cout << "Average of your array is.\n";
	array1.average();
	break;
	case 9:
	cout << "Array has been reversed now.\n";
	array1.reverse();
	break;
	case 10:
	cout << "Array has been sorted from the smallest to the largest number.\n";
	array1.sort();
	break;
	case 11:
	cout << "This function can find location of the numbers that have a specified sum.\n";
	cout << "Please type the sum :\n";
	int sum;
	cin>>sum;
	array1.finding_sum(sum);
	break;
	default:
	cout << "Not a Valid Choice. \n"
	<< "Choose again.\n";
	break;
	}

	}while (choice !=0);
	
	
	
	
//	
//	array1.set(0,10);
//	array1.set(1,22);
//	array1.set(2,34);
//	array1.set(3,46);
//	array1.print_array();
//	array1.insert(2,999);
//	array1.print_array();
//	array1.linear_search(500);
//	array1.average();
//	array1.reverse();
//	array1.print_array();
//	array1.sort();
//	array1.print_array();
//	array1.finding_sum(32);
//	

	return 0;

}
