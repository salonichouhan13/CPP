#include<bits/stdc++.h>
using namespace std;
int main(){
  set<int>s;
  s.insert(2);
  s.insert(6);
  s.insert(3);
  s.emplace(5);
  s.insert(3);

  // cout<<s.size()<<endl;
  for(auto x: s)
    cout<<x<<endl;
    
}