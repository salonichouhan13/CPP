#include<bits/stdc++.h>
using namespace std;

  bool comp(pair<int,int> p1, pair<int,int> p2) {
    return p1.first > p2.first;   // Descending order by first element
}int main(){

  pair<int,int> a[]={{2,1},{4,1},{6,1},{8,1}};
  sort(a,a+4,comp);
  for(int i=0 ; i<4; i++){
    cout<<a[i].first<<" "<<a[i].second<<" "<<endl;
  }


}