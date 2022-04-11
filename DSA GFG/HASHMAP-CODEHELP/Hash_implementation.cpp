#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{

    unordered_map<string, int> m;
    // 1
    pair<string, int> p = make_pair("abhinav", 1);
    m.insert(p);

    // 2
    pair<string, int> pair2("baal", 2);
    m.insert(pair2);

    // 3 "best"
    m["abhi"] = 10;

    // what will happpen
    m["abhi"] = 99;



    //search
    cout<<m["abhi"]<<"\n";
    return 0;
}