#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <fstream>
#include <iomanip>

int compare(string x, string fromfile){
	int s = fromfile.size();
	int points{0};
	for(int i{0}; i<s; i++){
		if(x.at(i) == fromfile.at(i)){
			points+=1;
		}
	}
	return points;
}

int main() {
	fstream in_file{"responses.txt", ios::in};
	if (in_file.is_open()){
		cout<<"Opened"<<endl;
	} 
	else{
		cout<<"ERROR";
	}
	
	string n;
	in_file >> n;
	string line1;
	string line2;
	double points_overall{0};
	double students_number{0};
	cout<<endl;
	cout<<left<<setw(15)<<"Student Name"<<right<<"Pts"<<endl;
	cout<<"-------------------------"<<endl;
	while (in_file >> line1>> line2){
		
		cout<<left<<setw(15)<<line1<<left<<compare(line2,n)<<endl;
		
		points_overall += compare(line2,n);
		
		students_number+=1;

		
	}
	cout<<"-------------------------"<<endl;
	cout<<left<<setw(15)<<"Average Score:"<<right<<(points_overall / students_number)<<endl;
	
    
    return 0;
}

