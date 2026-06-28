#include<bits/stdc++.h>
using namespace std;
int main(){
  unordered_set<int>st;
  st.insert(2);
  st.insert(5);
  st.insert(7);
  st.emplace(5);//{2,5,7}
}