// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>

using namespace std;

class Teacher{
    // properties/ attributes    
    
private:
    double salary;

public:  
    string name;
    string dept;
    string subject;
    
    Teacher(Teacher &obj){ // pass by reference
        this->name = obj.name ;
        this->subject = obj.subject ;
        this->dept = obj.dept ;
        this->salary = obj.salary ;
    }
    Teacher( string name, string subject, string dept, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
        
    }
    
    //methods /member functions
    void changeDept(string newDept){
        dept = newDept;
    }
    
    //setter
    void setSalary(double s){
        salary = s ;
    }
    
    //getter
    double getSalary(){
        return salary ;
    }
    void getInfo(){
        // cout<<this<<endl; ponting the memory
        cout<<"name: "<<this->name<<endl;
        cout<<"Subject: "<<this->subject<<endl;
    }
};


//for encapsulation
class Account{
private: //hiding data
    double balance;
    string password;
public:
    string accountId;
    string username;
};

int main() {
    Teacher t1("Afser","C++","CS",2500) ;
    
    t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();
    
    return 0;
}