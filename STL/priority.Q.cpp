#include<bits/stdc++.h> //priority queue --> prioritize the large element from the queue
using namespace std;
int main(){
  priority_queue<int>pq;
  pq.push(3);
  pq.push(6);
  pq.push(2);
  pq.push(8);
  pq.push(5);
  cout<<pq.top()<<endl;
  
}