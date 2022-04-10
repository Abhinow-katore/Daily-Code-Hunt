#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int A[N];
    int B[N];
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin>>B[i];
    }
    int C[N*N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int beta = B[j] -1;
            int jeta = j;
            C[(i+1 + jeta * N)-1] = A[i] + beta* N;
            int val = C[(i+1 + jeta * N)-1] ;
            cout<<"val: "<<val<<" ";

        }
        cout<<"\n";
    }
    // for (int i = 0; i < N*N; i++)
    // {
    //     /* code */
    //      cout<<C[i]<<" ";
    // }
    
   

    return 0;
}