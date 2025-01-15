#include <iostream>
using namespace std;

class Parent{

public:
    void getInfo(){
        cout<<"parent class \n";
    }
    virtual void hello(){
        cout<<"hello from parent\n";
    }
};

class Child : public Parent{
  
public:
    void getInfo(){
        cout<<"Child Class\n";
    }
    void hello(){
        cout<<"hello from child\n";
    }
};

int main() {
    Child c;
    c.getInfo();
    c.hello();
    return 0;
}
