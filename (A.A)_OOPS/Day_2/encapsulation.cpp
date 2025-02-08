#include<iostream>
using namespace std;
class student{
    private:
    string studentname;
    int studentrollno; 
    int balance;
    public:
   string getstudentname(){
    return studentname;
   }
   int getrollno(){
    return studentrollno;
   }
   void setstudentname(string studentname){
     this->studentname=studentname;
   }
   void setrollno(int roll){

    this->studentrollno=roll;
   }

    
};

int main(){
    student obj;
    // obj.balance=100;            inacessible data member
    obj.setstudentname("themanjeetkr");
    obj.setrollno(104);
    cout<<"student name"<<obj.getrollno()<<endl;
    cout<<"student name"<<obj.getstudentname()<<endl;
    cout<<"student name"<<obj.getrollno()<<endl;
    
   


}