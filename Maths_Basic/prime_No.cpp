#include<bits/stdc++.h>
using namespace std;
bool Prime(int n)//{
//   int n;
//   int count = 0;
//   cout<<"enter num to check"<<endl;
//   cin>>n;

//   for(int i=1; i<=n; i++){
//     if(n%i==0){
//       count= count+1;
//     }
//   }
//   if(count==2){
//       cout<<"number is prime";}
//       else{
//         cout<<"number is not prime"<<endl;
//       }
  
//   return 0;
// }
{ if(n<=1)
    return false;
    for(int i =2; i*i<=n; i++){
      if(n%1==0)
       return false;
}return true;
}