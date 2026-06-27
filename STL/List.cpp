#include<bits/stdc++.h>
using namespace std;
int main(){
  list<int>l;
  l.push_back(2); //2
  l.emplace_back(4);//{2,4}
   l.push_front(5); //{5,2,4}
  // l.emplace_front();
  for(auto x:l)
      cout<<x<<" ";
    cout<<endl;
  l.emplace_front(5);
  for(auto x:l)
      cout<<x<<" ";
    cout<<endl;
}