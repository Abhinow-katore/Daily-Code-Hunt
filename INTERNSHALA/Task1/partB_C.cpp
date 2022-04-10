#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    priority_queue<int,vector<int>,greater<int>> minh;
    int t;
    cin>>t; 
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        v.clear();
        for(int i=0;i<n;i++){
            minh.push(arr[i]);
            if(minh.size()>k){
                v.push_back(minh.top());
                minh.pop();
            }
        }
        while(minh.size()>0)
        {
            v.push_back(minh.top());
            minh.pop();
        }
        for(int i=0;i<n;i++)
        {
            cout<<v.at(i)<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}