#include <iostream>
using namespace std;

class Complex {
private:
    int real, im;

public:
    // Constructor with default arguments
    Complex(int r = 0, int i = 0) : real(r), im(i) {}

    // Function to print the complex number
    void print() const {
        cout << real << " + " << im << "i" << endl;
    }

    // Overloaded + operator for adding two complex numbers
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, im + c.im);
    }
};

int main() {
    // Create two complex numbers
    Complex c1(5, 4);
    Complex c2(2, 5);

    // Add them using the overloaded + operator
    Complex c3 = c1 + c2;

    // Display the result
    c3.print();

    // Demonstrate addition of integers for comparison
    int x = 5;
    int y = 4;
    int z = x + y;
    cout << "z value: " << z << endl;

    return 0;
}
