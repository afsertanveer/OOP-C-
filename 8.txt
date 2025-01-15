#include <iostream>
#include <vector>

using namespace std;

class Person{
public:
    string name;
    int age ;
};

class Student: public Person {
public:
    int roll;
};

class Teacher : public Person{
public:
    string subject;
    double salary;
};

int main() {
    
    Teacher t1;
    t1.name = "Afser";
    t1.salary = 2500;
    
    Student s1 ;
    s1.name ="Tanveer";
    cout<<t1.name<<endl;
    cout<<s1.name<<endl;

    return 0;
}
