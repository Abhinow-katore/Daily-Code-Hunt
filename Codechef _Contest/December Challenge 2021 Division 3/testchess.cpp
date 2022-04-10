#include <iostream>

using namespace std;
//In C++, either use printf and scanf, or
//add the line ios::sync_with_stdio(0); cin.tie(0); 
//to the beginning of main to speed up cin and cout. Also, do not use endl, only use '\n'.


int main() {
	// your code goes here
	ios::sync_with_stdio(0); cin.tie(0); 
	int t;
	cin>>t;
	while(t--){
	    int xking,yking;
	    cin>>xking>>yking;
	    int x1,y1;
	    cin>>x1>>y1;
	    int x2,y2;
	    cin>>x2>>y2;
	if(!(xking==1 || xking==8 || yking==1 || yking==8))
	cout<<"NO\n";
	else if (xking==1){
	    if ((x1==2 || x2==2) && (y1!=y2)){
	        if(abs(yking-y1)>1 && abs(yking-y2)>1){
	            cout<<"YES\n";
	        }
	    //   else cout<<"NO"\n;
	    }
	    else cout<<"NO\n";
	}
	else if(xking==8){
	    if ((x1==7 || x2==7) && (y1!=y2)){
	          if(abs(yking-y1)>1 && abs(yking-y2)>1){
	            cout<<"YES\n";
	        }
	     //   else cout<<"NO"\n;
	    }
	    else cout<<"NO\n";
	    }
	else if(yking==1){
	    if ((y1==2 || y2==2) && (x1!=x2)){
	      if(abs(xking-x1)>1 && abs(xking-x2)>1){
	         cout<<"YES\n";
	      }
	      //   else cout<<"NO"\n;
	    }
	    else cout<<"NO\n";
	}
	else if(yking==8){
	    if ((y1==7 || y2 ==7) && (x1!=x2)){
	        if(abs(xking-x1)>1 && abs(xking-x2)>1){
	            cout<<"YES\n";
	        }
	       //   else cout<<"NO"\n;
	    }
	    else cout<<"NO\n";
	}
	}
	return 0;
}