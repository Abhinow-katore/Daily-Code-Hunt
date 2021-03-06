#include <bits/stdc++.h>
#define N 4
using namespace std;

bool safe(int board[N][N], int row, int col)
{
    int i, j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;
    return true;
}
bool solveQut(int board[N][N], int col)
{
    if (col >= N)
        return true;
    for (int i = 0; i < N; i++)
    {
        if (safe(board, i, col))
        {
            board[i][col] = 1;
            if (solveQut(board, col + 1))
            {
                return true;
            }
            board[i][col] = 0; // backtracking
        }
    }
    return false;
}

int main()
{
    int board[N][N] = {{0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0}};

    if (solveQut(board, 0) == false)
    {
        cout << "can't"
             << "\n";
        return 0;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << " " << board[i][j] << " ";
        printf("\n");
    }
}

//------------------------
#define N 4
class Solution
{
public:
    bool safe(int board[N][N], int row, int col)
    {
        int i, j;
        for (i = 0; i < col; i++)
            if (board[row][i])
                return false;
        for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
            if (board[i][j])
                return false;
        for (i = row, j = col; j >= 0 && i < N; i++, j--)
            if (board[i][j])
                return false;
        return true;
    }
    bool solveQut(int board[N][N], int col)
    {
        if (col >= N)
            return true;
        for (int i = 0; i < N; i++)
        {
            if (safe(board, i, col))
            {
                board[i][col] = 1;
                if (solveQut(board, col + 1))
                {
                    return true;
                }
                board[i][col] = 0; // backtracking
            }
        }
        return false;
    }

    vector<vector<string>> solveNQueens(int n)
    {
        int board[4][4] = {{0, 0, 0, 0},
                           {0, 0, 0, 0},
                           {0, 0, 0, 0},
                           {0, 0, 0, 0}};

        if (solveQut(board, 0) == false)
        {
            cout << "can't"
                 << "\n";
            // return {0};
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cout << " " << board[i][j] << " ";
            printf("\n");
        }
    }
};
