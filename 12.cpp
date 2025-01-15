#include <iostream>
using namespace std;

class Parent{

public:
    void getInfo(){
        cout<<"parent class \n";
    }
};

class Child : public Parent{
  
public:
    void getInfo(){
        cout<<"Child Class\n";
    }
};

int main() {
    Child c;
    c.getInfo();
    
    return 0;
}
