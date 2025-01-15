#include <iostream>
using namespace std;

class Shape{
    virtual void draw() = 0; //pure virtual function
};

class Circle : public Shape{
public :
    void draw(){
        cout<<"drawing circle \n";
    }
};


int main() {
    Circle c;
    c.draw();
    return 0;
}
