#include <bits/stdc++.h>
using namespace std;
 
void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
int indexOf(vector<int> &arr, int ele)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == ele)
        {
            return i;
        }
    }
    return -1;
}
 
// Return the minimum number
// of swaps required to sort the array
int minSwaps(vector<int> arr, int N)
{
    int ans = 0;
    vector<int> temp(arr.begin(),arr.end());
    sort(temp.begin(),temp.end());
     
    for(int i = 0; i < N; i++)
    {
         
        // This is checking whether
        // the current element is
        // at the right place or not
        if (arr[i] != temp[i])
        {
            ans++;
 
            // Swap the current element
            // with the right index
            // so that arr[0] to arr[i] is sorted
            swap(arr, i, indexOf(arr, temp[i]));
        }
    }
    return ans;
}
 
// Driver Code
int main()
{
    int test;
    cin>>test;
    for (int k = 0; k < test; k++)
    {
          
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

        }
        
    }
    // for (int i = 0; i < N*N; i++)
    // {
    //     /* code */
    //      cout<<C[i]<<" ";
    // }
    
   


    // int temp;
    vector<int> a;
    for(int i = 0; i<N*N;i++){
        
        a.push_back(C[i]);
        
    }
     
    int n = a.size();
     
    // Output will be 5
    cout << minSwaps(a, n);
    }
    
}