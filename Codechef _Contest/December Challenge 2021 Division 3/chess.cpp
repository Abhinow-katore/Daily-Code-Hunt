#include <iostream>
#include <string>
#include<cmath>
using namespace std;
//In C++, either use printf and scanf, or
//add the line ios::sync_with_stdio(0); cin.tie(0); 
//to the beginning of main to speed up cin and cout. Also, do not use endl, only use '\n'.


int main() {
	// your code goes here
	ios::sync_with_stdio(0); cin.tie(0); 
	int test;
	cin>>test;
	while(test--){
	    int xking,yking;
	    cin>>xking>>yking;
	    int x1,y1;
	    cin>>x1>>y1;
	    int x2,y2;
	    cin>>x2>>y2;
	    string winner="No";
	if(!(xking==1 || xking==8 || yking==1 || yking==8))
             	winner="NO";
    
    	else {
	   if (xking==1)
	   {
	    if ((x1==2 || x2==2) && (y1!=y2))
	      {
	       if(abs(y1-yking)>1 && abs(y2-yking)>1){
	               winner ="YES";
	       }
	       
	       
	      }
	   }
	else if(xking==8)
	{
	    if ((x1==7 || x2==7) && (y1!=y2)){
	       if(abs(y1-yking)>1 && abs(y2-yking)>1){
	             winner ="YES";
	       }
	           }
	   
	 }
	 if(yking==1)
	 {
	    if ((y1==2 || y2==2) && (x1!=x2)){
	      if(abs(x1-xking)>1 && abs(x2-xking)>1){
	          winner ="YES";
	      }
	     
	    }
	
	}
	else if(yking==8)
	{
	    if ((y1==7 || y2 ==7) && (x1!=x2))
	    {
	        if(abs(xking-x1)>1 && abs(xking-x2)>1){
	             winner ="YES";
	        }
	      
	    }
	 
	}
    } cout<<winner<<endl;
  }
	return 0;
} 