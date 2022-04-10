// C++ program to find
// minimum number of swaps
// required to sort an array
#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr,
          int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
// Return the minimum number
// of swaps required to sort
// the array
int minSwaps(vector<int> arr,
             int N)
{
    int ans = 0;
    vector<int> temp = arr;

    // Hashmap which stores the
    // indexes of the input array
    map<int, int> h;

    // sort(temp.begin(), temp.end());
    for (int i = 0; i < N; i++)
    {
        h[arr[i]] = i;
    }
    for (int i = 0; i < N; i++)
    {
        // This is checking whether
        // the current element is
        // at the right place or not
        if (arr[i] != temp[i])
        {
            ans++;
            int init = arr[i];

            // If not, swap this element
            // with the index of the
            // element which should come here
            swap(arr, i, h[temp[i]]);

            // Update the indexes in
            // the hashmap accordingly
            h[init] = h[temp[i]];
            h[temp[i]] = i;
        }
    }
    return ans;
}

// Driver class
int main()
{

    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {

        int N;
        cin >> N;
        int A[N];
        int B[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        int C[N * N];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int beta = B[j] - 1;
                int jeta = j;
                C[(i + 1 + jeta * N) - 1] = A[i] + beta * N;
            }
        }
        // for (int i = 0; i < N*N; i++)
        // {
        //     /* code */
        //      cout<<C[i]<<" ";
        // }

        // int temp;
        vector<int> a;
        for (int i = 0; i < N * N; i++)
        {

            a.push_back(C[i]);
        }
        int n = a.size();

        // Output will be 5
        cout << minSwaps(a, n);
    }

    // This code is contributed by Stream_Cipher
}