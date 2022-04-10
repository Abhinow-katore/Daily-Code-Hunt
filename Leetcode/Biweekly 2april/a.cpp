#include <bits/stdc++.h>
using namespace std;
 
//Function to convert a decimal number
//to its binary form
string decimalToBinary(int n)
{
    //finding the binary form of the number and
    //converting it to string.
    string s = bitset<64> (n).to_string();
     
    //Finding the first occurrence of "1"
    //to strip off the leading zeroes.
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}

int main()
{
    int n ;
    cin>>n;
    int m;
    cin>>m;
    int count = 0;
    string a = decimalToBinary(n);
    string b = decimalToBinary(m);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    // int w = abs;
    if(a.size()<b.size()){
        for (int i = 0; i < a.size()-b.size(); i++) {
            a.push_back('0');
        }
    }
    if(a.size()>b.size()){
        for (int i = 0; i <b.size() -a.size(); i++) {
            b.push_back('0');
        }
    }
    cout<<a<<"\n"<<b<<"\n";
    for(int i = 0; i<a.size(); i++){
        if(a[i]!=b[i]) count++;
    }
    cout<<count;
    return 0;
}