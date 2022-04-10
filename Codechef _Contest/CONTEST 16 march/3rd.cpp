#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	for (int i = 0; i < test; i++) {
	    // vector<string> str;
        string str;
	    cin>>str;
	    int count= 0 ;
	    for (int i = 0; i < str.length(); i++) {
	        if(str[i]=='1'){
	            count++;
	        }
	    }
	    // vector<string> newString;
        string newString;
	    for (int i = 0; i < str.length(); i++) {
	        if(i<str.length()-count) newString.push_back('0');
	        else{
	            newString.push_back('1');
	            
	        }
	    }
	    cout<<newString<<"\n";
	    
	}
	return 0;
}
