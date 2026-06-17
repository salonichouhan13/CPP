#include<bits/stdc++.h>
using namespace std;
int main(){
  pair<int,int> p ={1,4};
  cout<<p.first<<""<<p.second;
  pair<int, pair<int, int>> p = {2,{3,5}};
  cout<<p.first<<""<< p.second.first<<""<< p.second.second;
  pair<int,int>arr[]={{2,4},{5,8},{3,9}};
  cout<<arr.[1].second;
}