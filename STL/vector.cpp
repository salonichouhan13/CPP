#include<bits/stdc++.h>
using namespace std;
int main(){

  vector<int>::iterator t = v.begin();
  t++;
  cout<<*(t)<<"";

  t= t+2;
  cout<<*(t)<<"";
  vector<int>::iterator it = v.end();
  // vector<int>::iterator it = v.rend();
  // vector<int>::iterator it = v.rbegin();

  cout<<v[0]<<""<<v.at(0);
  cout<< v.back()<<"";

  // for(vector<int>::iterator t = v.begin(); t != v.end(); t++){
  //   cout<< *(t)<<"";
  // } // we doesnt need to write this all 


//------auto means auto assignation-------------

  for( auto  t = v.begin(); t!=v.end(); t++){
    cout<<*(t)<<"";
   } 

//-----by for each loop-------------------

  for(auto t:v){
    cout<<t<<"";
  }


  //------delete something from vector----------

  //{10,20,30,40} One way erase
  v.erase(v.begin()+1); //{10,30,40}

  //{10,22,33,44,21,44,55} two ways 
   v.erase(v.begin()+2,v.begin()+4); //{10,22,44,44,55}


//-------Insert Function-------------

vector<int>v(2,100);
v.insert(v.begin(),200); //{200,100,100}
v.insert(v.begin()+1,3,21); //{200,21,21,21,100,100}

//-----copy function---------
vector<int>copy(50,50);
v.insert(v.begin(),copy.begin(),copy.end()); //{ 50,50,200,21,21,21,100,100}

//-----size-----------
//{10,20}
cout<<v.size(); //2

//-----pop--------
v.pop_back();//{20}

//-------swap function---------

// v1 {10,20}
// v2 {30,40}
//v1.swap(v2); // v1 -->{30,40} , v2 -->{10,20}





}