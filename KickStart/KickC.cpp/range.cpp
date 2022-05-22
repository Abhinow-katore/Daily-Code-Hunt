#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {

        int n;
        cin >> n;
        int x, y;
        cin >> x >> y;
        int sum = 0;
        for (int i = 1; i <= n; ++i)
        {
            sum += i;
        }
        int flag = 0;
        if (x + y == sum)
        {
            cout << "Case"
                 << " "
                 << "#" << j+1 << ": "
                                "POSSIBLE"
                 << "\n";
            continue;
        }
        int val = 0;
        for (int i = 1; i <= n; i++)
        {
            if (((i * x) + (i * y)) == sum)
            {
                flag = 1;
                val = i*x;
                break;
            }
        }
        int count = 0;
        vector<int>ans;
        if (flag == 1)
        {
            cout << "Case"
                 << " "
                 << "#" << j+1 << ": "
                                "POSSIBLE"
                 << "\n";
            for (int k = 1; k <=n; k++)
            {
                if((val-k)<=k){ans.push_back(val);count++;break;}
                if(k<val){
                    val = val  - k;
                    ans.push_back(k);
                    count++;
                }
                if(val==0)break;
                
            }
            cout<<count<<"\n";
            for (int l = 0; l < count; l++)
            {
                cout<<ans[l]<<" ";
            }
            cout<<"\n";
            
        }
        else
            cout << "Case"
                 << " "
                 << "#" << j+1 << ": "
                                "IMPOSSIBLE"
                 << "\n";
        
    }
    return 0;
}