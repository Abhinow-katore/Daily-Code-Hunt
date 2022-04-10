#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int f,s;
    cin>>f>>s;
    int a1,b1;
    cin>>a1>>b1;
    int arr[f][s];
    int a2,b2;
    cin>>a2>>b2;
    if((a1+b1)%2!=0 && (a2+b2)%2==0){
        for (int i = 0; i < f; i++)
        {
            if(i%2==0){
                for (int j = 0; j < s; j++)
                {
                    if(j%2==0){
                        arr[i][j]=2;
                    }
                    else{
                        arr[i][j]=1;
                    }
                }
                
            }
            else{
                for (int j = 0; j < s; j++)
                {
                    if(j%2==0){
                        arr[i][j]=1;
                    }
                    else
                    {
                        arr[i][j] =2;
                    }
                    
                }
                
            }
        }
        
    }
    else if((a1+b1)%2==0 && (a2+b2)%2!=0){
        for (int i = 0; i < f; i++)
        {
            if(i%2==0){
                for (int j = 0; j < s; j++)
                {
                    if(j%2==0){
                        arr[i][j]=1;
                    }
                    else{
                        arr[i][j]=2;
                    }
                }
                
            }
            else{
                for (int j = 0; j < s; j++)
                {
                    if(j%2==0){
                        arr[i][j]=2;
                    }
                    else
                    {
                        arr[i][j] =1;
                    }
                    
                }
                
            }
        }

    }
    else
    {
        for (int i = 0; i < f; i++)
        {
            if(i%2==0){
                for (int j = 0; j < s; j++)
                {
                    if(j%2==0){
                        arr[i][j]=3;
                    }
                    else{
                        arr[i][j]=4;
                    }
                }
                
            }
            else{
                for (int j = 0; j < s; j++)
                {
                    if(j%2==0){
                        arr[i][j]=4;
                    }
                    else
                    {
                        arr[i][j] =3;
                    }
                    
                }
                
            }
        }
        int temp = arr[a1-1][b1-1];
        arr[a1-1][b1-1] =1;
        arr[a2-1][b2-1] =2;
        for (int i = 0; i < f; i++)
        {
            for (int j = 0; j < s; j++)
            {
                if(arr[i][j]==temp){
                    arr[i][j]=1;
                }
            }
            
        }
        for (int i = 0; i < f; i++)
        {
            for (int j = 0; j < s; j++)
            {
                cout<<arr[i][j];
            }
            cout<<"\n";
            
        }
        
        
    }
    
    return 0;
}