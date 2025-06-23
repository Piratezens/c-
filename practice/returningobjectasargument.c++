#include<iostream>
using namespace std;

class complex {
    float x;
    float y;
public:
    void setx(float a) {
        x = a;
    }
    void sety(float b) {
        y = b;
    }
    complex sum(complex c1, complex c2) {
        complex c3;
        c3.x = c1.x + c2.x;
        c3.y = c1.y + c2.y;
        return c3;
    }
    void display() {
        cout << x << " + " << y << "i" << endl;
    }
};

int main() {
    complex c1, c2, c3;
    float a, b, c, d;
    cout << "Enter the real and imaginary parts of first complex number: ";
    cin >> a >> b;
    c1.setx(a);
    c1.sety(b);

    cout << "Enter the real and imaginary parts of second complex number: ";
    cin >> c >> d;
    c2.setx(c);
    c2.sety(d);

    c3 = c1.sum(c1, c2); // Corrected function call

    cout << "Sum of the two complex numbers is: ";
    c3.display();

    return 0;
}