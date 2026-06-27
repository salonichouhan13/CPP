#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int,int> p1 = {1,4};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int,int>> p2 = {2,{3,5}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    return 0;
}