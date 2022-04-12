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
    m["abhi"] = 99; // it will delete previous constexpr

    // search
    cout << m["abhi"] << "\n";

    cout << m.at("abhinav") << "\n";

    cout << m["ee"] << "\n";    // zero- if written before line 33 -cout<<m.at("ee");
    cout << m.at("ee") << "\n"; // abort - terminate called after throwing an instance of 'std::out_of_range'   what():  _Map_base::at

    // sizeof
    cout << m.size() << "\n";

    // to check presence
    cout << m.count("bro") << "\n";  // 0 absent
    cout << m.count("abhi") << "\n"; // 1 present

    // erase
    m.erase("abhi");

    cout << m.count("abhi") << "\n"; // 0 absent

    //-----------------
    /// best
    for (auto i : m)
    {

        cout << i.first << " " << i.second << "\n";
    }

    // above output
    //  ee 0
    //  baal 2
    //  abhinav 1

    return 0;
}
