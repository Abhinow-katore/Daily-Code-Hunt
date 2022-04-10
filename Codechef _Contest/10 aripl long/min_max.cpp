#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void remove_duplicates(int* arr, int& n) {

	int k = 0;

	// iterate each element of arr[]
	for (int i = 0; i < n; ++i) {

		// checking if there exist an element arr[j] ( j < i )
		// that is equal to arr[i]
		int flag = 1;
		for (int j = 0; j < i; ++j) {
			if (arr[j] == arr[i]) {
				flag = 0;
				break;
			}
		}

		// flag == 0 means arr[i] is repeated
		// flag == 1 means that no element that appears
		// on left side of arr[i] is equal to arr[i]
		// therefore, we swap arr[k] and arr[i] then increment k
		if (flag)
			swap(arr[k++], arr[i]);

	}

	n = k;

}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int hash[*max_element(arr, arr + n) + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 1; i < *max_element(arr, arr + n) + 1; i++)
    {
        cout << hash[i] << " ";
    }
    cout << "\n"
         << "-----------"
         << "\n";
    int i = 0;
    int ans = 0;
    // int val[]
    // cout<<*max_element(arr, arr + n);
    remove_duplicates(arr, n);
    int hash_max = *max_element(arr, arr + n);
    cout << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    


    while (i < hash_max)
    {
        cout << hash[arr[i]] << " ";
        cout << arr[i] << "\n";

        if (hash[arr[i]] == 1)
        {
            ans++;
            i++;
            cout << ans << " -@1"
                 << "\n";
            // hash[arr[i]]--;
            continue;
        }
        if (hash[arr[i]] > 1 && k >0)
        {
            hash[arr[i]]--;
            k--;
            ans++;

            cout << ans << " -@2"
                 << "\n";
            continue;
        }
        if (hash[arr[i]] > 1 && k == 0)
        {
            i++;
            int temp = hash[arr[i]] * (hash[arr[i]] - 1) / 2;
            ans = ans + temp;
            cout << "temp" << temp << " ";
            cout << ans << "ans hai"
                 << "\n";
            cout << ans << " -@3"
                 << "\n";
            continue;
        }
    }
    cout << ans << " ";

    return 0;
}