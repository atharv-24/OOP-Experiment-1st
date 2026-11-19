#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Operator overloading
    Complex operator+(Complex c) {
        return Complex(real + c.real,
                       imag + c.imag);
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function overloading
    void show(int x) {
        cout << "Integer: " << x << endl;
    }

    void show(float x) {
        cout << "Float: " << x << endl;
    }
};

int main() {
    Complex c1(5, 3), c2(2, 4), c3;

    c3 = c1 + c2;

    cout << "Addition: ";
    c3.display();

    c1.show(10);
    c1.show(5.5f);

    return 0;
}
