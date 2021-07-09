#include <iostream>
using namespace std;
int compare(char* one, char* two);
int anagramchecker(char* one, char* two);

int main() {
    // Write C++ code here
    char v [] = "Damon Albarn";
    cout<<v<<endl;

    char two [] = "Dan Abnormal";
    
    compare(v,two);
    anagramchecker(v,two);
    return 0;
}


int compare(char* one, char* two){
    int i{0};
    while (one[i] != '\0'){
        if(one[i] != two[i]){
            return 0;
        }
        i++;
    }
    cout<<"The strings are the same!"<<endl;
}
int anagramchecker(char* one, char* two){
    int len1{0}, len2{0}, i{0}, j{0}, k{0}, l{0}, m{0}, n{0}, o{0};
    while (one[i] != '\0'){
        if (one[i] != ' '){
        len1++;
        }
        i++;
    }
    while (two[j] != '\0'){
        if (two[j] != ' '){
        len2++;
        }
        j++;
    }
    if (len1 != len2){
        cout<< "Can't be anagram - unequal number of letters";
        return 0;
    }
    
    char three[len2];
	char forth[len2];
    while (two[k] != '\0'){
        if (two[k] != ' '){
        three[l] = two[k];
        l++;
        }
        k++;
    }
	cout<<"ONE"<<endl;
	for (int x{0};x<len2;x++){
		while (one[m] != '\0'){
			if (one[m] != ' '){
			if(one[m] == three[x]){
				forth[n] = one[m];
				one[m] = ' ';
				// cout<<"HEY MIKE!!!!!"<<endl;
				// cout<<n<<"AND"<<m<<endl;
				n++;
			}
			}
			m++;
			}
		m = 0;
		cout<<x;
		}
		
		
	cout<<"TWO"<<endl;
	
    cout<<three<<endl;
	cout<<"Four"<<endl;
    cout<<forth<<endl;
	cout<<"five"<<endl;
    while (three[o] != '\0'){
        if (three[o] != forth[o]){
        cout<<"This is NOT an anagram"<<endl;
        return 0;
        }
        o++;
    }
	
	cout<<"Hooray! YOU HAVE AN ANAGRAM!"<<endl;
	
	}
    


