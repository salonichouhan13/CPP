#include<bits/stdc++.h>
using namespace std; //double ended queue
int main(){
deque<int>dq;
dq.push_back(1); //{1}
dq.emplace_back(2); //{1,2}
dq.push_front(4); //{4,1,2}
dq.emplace_front(5); //{5,4,2,1}
for( auto x:dq)
  cout<<x<<" ";
cout<<endl;

//-----remove values----

dq.pop_back();
dq.pop_front();
for( auto x : dq)
  cout<<x<<" ";
cout<<endl; //{4,1}

//rest function same as the vector

}