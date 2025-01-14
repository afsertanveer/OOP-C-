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
    ~Student(){
        cout<<"Destructor is done"<<endl;
        delete cgpaPtr;
    }
    
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
        
    }
};

int main() {
    Student s1("Afser Tanveer",3.82);
    s1.getInfo();
    
    return 0;
}