#include <iostream> 
#include <stdio.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i <n ; i ++){
        int a,b,c,d;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        int add = a+b+c;
        int q=0;
        if (d==0)
        {
            cout<<"0"<<"\n";
            continue;
        }
        
        // q = (add + d - 1) / d;
        q = 1 + ((add - 1) / d);
        cout<<q<<"\n";
    }
    
    return 0;
}