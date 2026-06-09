#include<iostream>
using namespace std;
//parent
class Teacher{
    public:
        void teach(){
            cout<<"teaching students..."<<endl;
        }    
 };
//parent2
class Resercher{
    public:
        void research(){
            cout<<"conducting research.."<<endl;
        }
};

//child inherit properties of both classes
class Proffessor : public Teacher, public Resercher {
public:
        void guide(){
            cout<<"guide"<<endl;
        }
};
int main(){
    Proffessor p;
    p.teach();
    p.research();
    p.guide();
}
