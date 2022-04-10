#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }

    return 0;
}



#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int  m : v) {
         if(m>=2){
            cout<<">2"<<" ";
        }    }
    return 0;
}