#include<bits/stdc++.h>
using namespace std;

int solve(){
    int a1,b1;cin>>a1>>b1;
    int ans = 21-(a1+b1);
    (ans<=10)?cout<<ans<<endl : cout<<"-1"<<endl;
    return 0;
}


int main(){
    int num_t1;cin>>num_t1;
    while(num_t1--){
        solve();
    }
}