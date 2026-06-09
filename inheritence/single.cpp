#include<iostream>
using namespace std;
//parent class
class Car{
    public:
        void start(){
            cout<<"car is starting.."<<endl;
        }


};
//child class(inherit class)
class ElectricCar: public Car{
    public:
        void charge(){
            cout<<"electric car is charging"<<endl;
        }
};
int  main(){
    ElectricCar e;
    e.start();
    e.charge();
}