#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	for (int i = 0; i < test; i++) {
	    /* code */
	    int n,x,k;
	    cin>>n>>x>>k;
	    int val = (k/x);
	    if(val>n) cout<<n;
	    else cout<<val;
	    
	    cout<<"\n";
	}
	return 0;
}
