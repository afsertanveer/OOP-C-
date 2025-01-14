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
};

int main() {
    Teacher t1 ;
    // t1 = new Teacher();
    t1.name = "Afser";
    t1.setSalary(25000);
    cout<<t1.name<<endl<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}