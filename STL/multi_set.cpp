#include<bits/stdc++.h> // it will not an unique it is only sorted and store duplicates too
using namespace std;
int main(){
  multiset<int>ms;

  ms.insert(6);
  ms.insert(7);
  ms.insert(3);
  ms.insert(8);
  ms.insert(2);
  ms.insert(6);

  ms.erase(ms.find(6)); //erase single 6
  ms.erase(6); // erase both 6
  ms.erase(ms.find(6),ms.find(6));
  
}