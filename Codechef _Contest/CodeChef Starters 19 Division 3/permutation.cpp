// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin >> test;
//     for (int j = 0; j < test; j++)
//     {
//         int n;
//         cin >> n;
//         if (n == 2)
//         {
//             cout << "2" <<" "
//                  << "1";
//         }
//         if (n != 2)
//         {
//             cout << "1"
//                  << " " << n<<" ";

//             for (int i = 2; i < n; i++)
//             {

//                 cout << i << " ";
//             }
//         }

//         cout << "\n";
//     }

//     return 0;
// }





#include <iostream>
using namespace std;
 
int main() {

	int test; 
	cin>>test;
 
	while(test--){
	    int n; 
	    cin>>n;
 
	    cout << n << " " ;
	    for(int i=1; i<=n-1; i++){
	        cout << i << " " ;
	    }
 
	    cout << endl ;
 
	}
 
	return 0;
}