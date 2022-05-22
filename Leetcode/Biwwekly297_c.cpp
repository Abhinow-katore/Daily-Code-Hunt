class Solution
{
public:
    int minimumLines(vector<vector<int>> &stockPrices)
    {
        sort(stockPrices.begin(), stockPrices.end());
        // for( auto &row : stockPrices) {
        // for(auto col : row)
        //      cout << col << " ";
        // cout<<endl;
        int count = 1;
        int flag = 0;
        for (int i = 0; i < stockPrices.size() - 1; i++)
        {
            int diff1 = abs(stockPrices[i][0] - stockPrices[i + 1][0]);
            int diff2 = abs(stockPrices[i][1] - stockPrices[i + 1][1]);
            if (diff1 == diff2 && flag == 0)
                continue;
            if (diff1 == diff2 && flag == 1)
            {
                flag = 0;
                count++;
            }
            if (diff1 != diff2)
                count++;
            cout << diff1 << " " << diff2 << "\n";
        }
        return count;
    }
};