#include <iostream>
#include <Array.hpp>
using namespace std;

template<class T>
Array<T>::Array(int length_set )
{ 		length = length_set;
		a = new T [length]{};

}
template<class T>
Array<T>::~Array()
{
	delete []a;
}
template<class T>
void Array<T>:: print_array(){
	for (int i{0};i<length;i++){
		cout<<a[i]<< '\t';
	}
	cout<<endl;
}
template<class T>
T Array<T>::set (int index, T value){
	a[index] = value;
	
}

template<class T>
T Array<T>:: insert ( int index, T number){
	for (T i{length}; i>index; i--){
		a[i] = a[i-1];
	}
	a[index] = number;
}

template<class T>

T Array<T>:: append ( T number){
	for (int i{0};i<length;i++){
		if(a[i] == 0){
			a[i] = number;
			break;
		}

	}
}
template<class T>
T Array<T>:: remove ( int index){
	for (int i{index}; i<length; i++){
		a[i] = a[i+1];
	}
}
template<class T>
T Array<T>:: linear_search (int search){
	for (int i{0};i<length;i++){
		if(a[i] == search){
			cout<<"Index: "<<i<<endl;
			return 0;
		}
	}
	
	cout<<"Element not found."<<endl;
}
template<class T>
T Array<T>:: binary_search (int search, int l ){
	static int r = length;
	int mid = l + (r -l) /2;
	cout<<"-------"<<endl;
	cout<< mid<<endl;
	cout<<a[mid]<<endl;
	cout<<r<<endl;
	if(r>0  && r < (length+1)){
		
	
	if (a[mid] == search){
		cout<<"Found "<<a[mid]<<" at "<<mid<<endl;
		return 0;
	}
	if (a[mid] < search){
		binary_search(search, mid+1);
	}
	else if  (a[mid] > search){
		r = mid-1;
		binary_search(search, l);
	}
	}
	return -1;

	}
	
template<class T>
T Array<T>:: average (){
		int sum {0};
		for (int i{0};i<length;i++){
			sum+= a[i];		
	}
		double avg = static_cast<double>(sum) / length;
		cout<<avg<<endl;
}
template<class T>
T Array<T>:: reverse (){
	int i{0};
	int j{length-1};
	int temp{};
	for (i,j; i<j; i++,j--){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
template<class T>
T Array<T>:: sort(){
	int temp{0};
	for(int i{0};i<length-1;i++){
		if(a[i] > a[i+1]){
			temp = a[i+1];
			a[i+1] = a[i];
			a[i] = temp;
			sort();
			}
		}
}
template<class T>
T Array<T>:: finding_sum(int searched){
	int found{0};
	for (int i{0}; i<length-1;i++){
		for(int j{0};j<length;j++){
			if((a[i]+a[j]) == searched){
				cout<<"Sum of two numbers equal to searched "<<searched<<"found"<<endl;
				cout<<"with numbers at "<< i <<" and "<< j <<" positions."<<endl;
				found++;
			
		}
	}}
	if(found == 0){
		cout<<"Sum not found"<<endl;
	}
	
}