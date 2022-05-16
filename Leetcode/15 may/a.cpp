class Solution
{
public:
    bool areAnagram(string str1, string str2)
    {
        // Get lengths of both strings
        int n1 = str1.length();
        int n2 = str2.length();

        // If length of both strings is not same, then they
        // cannot be anagram
        if (n1 != n2)
            return false;

        // Sort both the strings
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        // Compare sorted strings
        for (int i = 0; i < n1; i++)
            if (str1[i] != str2[i])
                return false;

        return true;
    }

    vector<string> removeAnagrams(vector<string> &words)
    {
        sort(words.begin(), words.end());
        int flag = 0;
        vector<string> ans;
        for (int i = 0; i < words.size() - 1; i++)
        {
            // if (areAnagram(words[i], words[i + 1]) && flag == 0)

            {
                ans.push_back(words[i]);
                // cout<<words[i]<<" ";
                flag = 1;
            }
            if (flag == 0 && areAnagram(words[i], words[i + 1]) == false && areAnagram(words[i + 1], words[i + 2]) == false)
            {
                ans.push_back(words[i + 1]);
                i++;
            }
            else
                flag = 0;
        }
        if (ans.size() == 0)
            return words;
        return ans;
    }
};///////////////
class Solution
{
public:
    bool areAnagram(string str1, string str2)
    {
        // Get lengths of both strings
        int n1 = str1.length();
        int n2 = str2.length();

        // If length of both strings is not same, then they
        // cannot be anagram
        if (n1 != n2)
            return false;

        // Sort both the strings
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        // Compare sorted strings
        for (int i = 0; i < n1; i++)
            if (str1[i] != str2[i])
                return false;

        return true;
    }

    vector<string> removeAnagrams(vector<string> &words)
    {
        // sort(words.begin(), words.end());
        // int flag = 0;
        // vector<string> ans;
        for(int i = 0 ; i<words.size();i++){
            if(areAnagram(words[i], words[i + 1]){
                words.erase(words.begin()+i+1);
                i--;
            }
        }
        return words;
    }
};