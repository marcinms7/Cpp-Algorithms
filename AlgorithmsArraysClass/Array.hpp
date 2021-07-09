#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
using namespace std;

template<class T>
class Array
{
private:
	T *a;
	int length;
	int index{0};
public:
	void print_array();
	T set (int index, T value);
	T insert ( int index, T number);
	T append ( T number);
	T remove ( int index);
	T linear_search ( int search);
	T binary_search (int search,int l = 0);
	T average ();
	T reverse ();
	T sort();
	T finding_sum(int searched);

	Array<T>(int length_set);
	~Array<T>();

};

#endif // ARRAY_HPP
