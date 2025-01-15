#include <iostream>
#include <vector>

using namespace std;

class Student{

public:
    string name;
    
    Student(){
        cout<<"non-parametirised\n";
    }
    Student(string name){
     this->name = name;
     cout<<"Parameterised\n";
    }
};
int main() {
    
    Student s1;
    s1.name = "Afser";
    Student s2("Afser");
    

    return 0;
}
