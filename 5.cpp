#include <iostream>
#include <vector>

using namespace std;

class Person {
public:
    string name;
    int age;

    // Constructor for Person
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person {
public:
    int roll;

    // Constructor for Student
    Student(string name, int age, int roll) : Person(name, age) {
        this->roll = roll;
    }

    // Display information
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    // Correct object creation with all parameters
    Student s1("Afser Tanveer", 20, 42);
    s1.getInfo();

    return 0;
}
