#include<bits/stdc++.h>
using namespace std;
int main(){
  queue<int>q;
  q.push(60);
  q.push(30);
  q.push(67);
  q.push(20);
  cout<<q.size()<<endl;
  q.emplace(35);
  q.back() += 5;
  cout<<q.back();
  q.front();  //{60}
  q.pop(); //{30,67,20,36}
  // cout<<q.empty();

}