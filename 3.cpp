// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>

using namespace std;

class Student{

public:
    string name;
    double* cgpaPtr;
    
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double(cgpa);
    }
    //shallow copy
    // Student(Student &obj){
    //     this->name = obj.name;
    //     this->cgpaPtr = obj.cgpaPtr;
    // }
    
    //deep copy
    Student(Student &obj){
        this->name = obj.name;
         this->cgpaPtr = new double(*(obj.cgpaPtr));
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
        
    }
};

int main() {
    Student s1("Afser Tanveer",3.82);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s2.getInfo();
    //this will reflect in the s1 object allso
    cout<<"s1 object cgpa also changed"<<endl;
    s1.getInfo();
    
    return 0;
}