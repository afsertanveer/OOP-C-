#include <iostream>
#include <vector>

using namespace std;


class Student {
public:
    string name;
    int roll;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA:public Student, public Teacher{
public:
    bool status;
};
int main() {
    
    TA t1;
    t1.name = "Afser";
    t1.status = false;
    
    cout<<t1.name<<endl;
    cout<<t1.status<<endl;

    return 0;
}
