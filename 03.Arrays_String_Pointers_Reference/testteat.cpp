#include <bits/stdc++.h>

using namespace std;

// Function to print the subsets whose
// sum is equal to the given target K
void sumSubsets(vector<int> set, int n, int target)
{
    // Create the new array with size
    // equal to array set[] to create
    // binary array as per n(decimal number)
    int x[set.size()];
    int j = set.size() - 1;

    // Convert the array into binary array
    while (n > 0)
    {
        x[j] = n % 2;
        n = n / 2;
        j--;
    }

    int sum = 0;

    // Calculate the sum of this subset
    for (int i = 0; i < set.size(); i++)
        if (x[i] == 1)
            sum = sum + set[i];

    // Check whether sum is equal to target
    // if it is equal, then print the subset
    if (sum == target)
    {
        cout << ("{");
        for (int i = 0; i < set.size(); i++)
            if (x[i] == 1)
                cout << set[i] << ", ";
        cout << ("}, ");
    }
}

// Function to find the subsets with sum K
void findSubsets(vector<int> arr, int K)
{
    // Calculate the total no. of subsets
    int x = pow(2, arr.size());

    // Run loop till total no. of subsets
    // and call the function for each subset
    for (int i = 1; i < x; i++)
        sumSubsets(arr, i, K);
}

// Driver code
int main()
{
    vector<int> arr = {5, 10, 12, 13, 15, 18};
    int K = 30;
    findSubsets(arr, K);
    return 0;
}
//////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll arr[], ll n, ll sum)
{
    if (sum == 0)
        return 1;
    else if (sum != 0 and n == 0)
        return 0;
    else if (arr[n - 1] > sum)
        return solve(arr, n - 1, sum);
    else
        return solve(arr, n - 1, sum) + solve(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    ll t;
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll sum;
    cin >> sum;

    ll res = solve(arr, n, sum);
    cout << res << "\n";

    return 0;
}
///////////////

static string ModifyVariableName(string input)

{

    input = input.Trim();

    if (string.IsNullOrEmpty(input))
        return input;

    String result = "";

    for (int i = 0; i < input.Length; i++)

    {

        if (char.IsUpper(input[i]))

        {

            result += "_" + char.ToLower(input[i]);
        }

        else if (input[i] == '_')

        {

            i++;

            result += char.ToUpper(input[i]);
        }

        else

        {

            result += input[i];
        }
    }

    return result;
}
