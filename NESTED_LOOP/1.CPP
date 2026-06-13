//NETSED MEANS 
// outer and inner loop 
// outer means rows and inner means columns like  i andd j
// connect the columns and cinnect them with the rows
#include<bits/stdc++.h>
using namespace std;
void printl( int n){
  for (int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<"*";
    }
      cout<<endl;
  }
}
int main() {
    int n;
    cin>>n;
    printl(n);
    return 0;
}