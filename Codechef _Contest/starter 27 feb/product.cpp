#include<bits/stdc++.h>
using namespace std;

int solve(){
    int bN,c;cin>>bN>>c;
    cout<<c/__gcd(bN,c)<<endl;
    return 0;
}


int main(){
    int testingNum;cin>>testingNum;
    while(testingNum--){
        solve();
    }
}
