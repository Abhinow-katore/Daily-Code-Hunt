#include <bits/stdc++.h>
#define ll long long int
//#define for(n) for(int i=0;i<n;i++)
#define tc ll t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll num;
    cin>>num;
    ll arr[num];

    for(int i=0;i<num;i++) cin>>arr[i];
    ll less=0,more=0,c=0;
    for(int i=0;i<num;i++){
        less=0,more=0;
        for(int j=0;j<num;j++){
            if(arr[j]<=arr[i]) less++;
            if(arr[j]>arr[i]) more++;
        }
        if(less>more) c++;
    }
    cout<<c<<endl;
    

}

int main() {
    fast
    tc 
}