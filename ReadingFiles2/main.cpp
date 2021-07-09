#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <fstream>
#include <iomanip>
bool check_word(const string wordtofind, const string word){
	
	if(word ==wordtofind){
		return true;
	}
	else{
		return false;
	}
}

void check_word_alt(const string &wordtofind, const string &word){
	size_t f = word.find(wordtofind);
	if (f != string::npos){
		cout<<1<<endl;
		
		cout<<"F: "<<f<<endl;
		cout<<"npos: "<<string::npos;
	}
}

int main() {
	fstream in_file{"romeoandjuliet.txt", ios::in};
	
	if (in_file.is_open()){
		cout<<"Opened"<<endl;
	} 
	else{
		cout<<"ERROR";
	}
	int foundtimes{0};
	string user_word;
	cout<<"Type some word, mate"<<endl;
	cin>>user_word;
	
	
	string singleword;
	
	
	
	while(in_file>>singleword){
		foundtimes+=check_word(user_word,singleword);
		
		check_word_alt(user_word,singleword);
	}
	cout<<endl;
	cout<<"Word "<<user_word<<" found "<<foundtimes<<" times!";
	
	cout<<string::npos;
    
    return 0;
}

