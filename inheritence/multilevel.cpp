#include<iostream>
using namespace std;
//parent
class Animal{
public :
    void eat(){
        cout<<"eating food"<<endl;

    }    
};
//derived
class Dog : public Animal{
public:
    void bark(){
        cout<<"dog is barking"<<endl;
    }
};
//derived from dog
class Puppy :public Dog{
public:
    void sleep(){
        cout<<"puppy is sleeping"<<endl;
    }
};
int main(){
    Puppy p;
    p.eat();
    p.bark();
    p.sleep();
}