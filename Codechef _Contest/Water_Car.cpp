#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int

int main() {
    ll t;
    cin>>t; 
    while(t --) {
        ll n,v,i;
        cin>>n>>v;
        if(v==1){
            ll ans = n*(n-1/2);
            cout << ans <<" "<<ans;
        }
        else{
            cout<<n*(n-v)*(n-v+1)/2+v-1;
            if(n>v+1){
                cout<<(n-v)*(n-v+1)/2+v-1
;            }
            else {
                cout<<n-1;
            }
        }
        cout<<"\n";
    }
    return 0;
}