#include <bits/stdc++.h>
#define N 4
using namespace std;




bool solveNQUtil(int board[N][N], int col){
    if(col>=N){
        return true;
    }
    for (int i = 0; i < N; i++)
    {
        if(isSafe(board,i,col)){
            board[i][col]=1;

            if(isSafe(board,i,col+1)) return true;
            board[i][col] =0;
        }

    }
    
}

bool solveNQ(){
    int board[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };

    if(solveNQUtil(board,0)==false){
        cout<<"not exist";
        return false;
    }
    return true;
}


int main()
{
    solveNQ();
    return 0;
}