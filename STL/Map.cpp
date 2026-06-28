#include<bits/stdc++.h>
using namespace std;
int main(){
 map<int,int>mp; //map is the container which stores everything with respect of uniqye keys
 
  mp.insert({3,1});
  mp.insert({5,2});
  mp.insert({4,6});
  for(auto t:mp){
    cout<<t.first<<" "<<t.second<<" ";
  }
   
}