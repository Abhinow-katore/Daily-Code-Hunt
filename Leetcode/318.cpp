#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        int ans = 0;
        for (int i = 0; i < words.size() - 1; i++)
        {
            for (int j = i + 1; j < words.size(); j++)
            {
                if (checkCommon(words[i], words[j]))
                {
                    int len = (words[i].size() * words[j].size());
                    ans = std::max(ans, len);
                }
            }
        }

        return ans;
    }

    bool checkCommon(string s1, string s2)
    {
        vector<bool> v(26, 0);
        for (int i = 0; i < s1.length(); i++)
        {
            v[s1[i] - 97] = true;
        }
        for (int i = 0; i < s2.length(); i++)
        {
            if (v[s2[i] - 97])
            {
                return false;
            }
        }

        return true;
    }
};

int main(){
    vector<string>words;
    

}