#include <iostream>
#include <vector>

using namespace std;

class Person {
public:
    string name;
    int age;

};

class Student : public Person {
public:
    int roll;
};

class GradStudent: public Student{
 public:
    string researchArea;
};

int main() {
    // Correct object creation with all parameters
    GradStudent s1;
    s1.name = "AT";
    s1.researchArea = "Programming";
    
    cout<<s1.name<<endl;
    cout<<s1.researchArea<<endl;

    return 0;
}
