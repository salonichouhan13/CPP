// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     pair<int,int> a[] = {{2,3}, {4,9}, {3,9}};

//     sort(a, a+3);

//     for(int i = 0; i < 3; i++) {
//         cout << a[i].first << " " << a[i].second << endl;
//     }

//     return 0;
// } // ascending order


#include<bits/stdc++.h>
using namespace std;

int main() {
  
    pair<int,int> a[] = {{2,3}, {4,9}, {3,9}};
    sort(a,a+3,greater<pair<int,int>>());

    sort(a, a+3);

    for(int i = 0; i < 3; i++) {
        cout << a[i].first << " " << a[i].second << endl;
    }

    return 0;
} //descending order