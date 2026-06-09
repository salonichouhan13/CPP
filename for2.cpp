#include<iostream>
using namespace std;
int main(){
//     int n;
//     cout<<"Enter number";
//     cin>>n;
//     int sum=0;
//     while(n!=0){
//         int digit=n%10;
//         sum+=digit;
//         n/=10;
//     }
//     cout<<sum;
//     return 0;
// }

  int n;
    cout<<"Enter number";
    cin>>n;
    int reverse=1;
    for(int i=1;i<=n;i++){
        int digit=n%10;
        reverse*=digit
        ;
        n/=10;
    }
    cout<<reverse;
    return 0;
}