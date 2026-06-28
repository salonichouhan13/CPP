#include<bits/stdc++.h>
using namespace std;
int main(){
  // map<int,int>mp; //map is the container which stores everything with respect of uniqye keys
   map<pair<int,int>>mp;
  mp[1]= 2;
  mp.insert({3,1});
  mp.insert({5,2});
  mp[{2,3}] = 10;
   
}