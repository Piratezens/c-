#include<iostream>
using namespace std;

class complex {
    float x;
    float y;
public:
    void setx(float a) { x = a; }
    void sety(float b) { y = b; }
    // This sum function stores the result in the calling object
    void sum(complex c1, complex c2) {
        x = c1.x + c2.x;
        y = c1.y + c2.y;
    }
    void display() {
        cout << x << " + " << y << "i" << endl;
    }
};

int main() {
    complex *ptr = new complex[3]; // Allocate space for 3 objects
    float a, b;
    for(int i = 0; i < 2; i++) {
        cout << "Enter the real and imaginary parts of complex number: ";
        cin >> a >> b;
        (ptr + i)->setx(a);
        (ptr + i)->sety(b);
    }

    // Store the sum in the third object directly
    (ptr + 2)->sum(*(ptr + 0), *(ptr + 1));
    cout << "Sum of the two complex numbers is: ";
    (ptr + 2)->display();

    delete[] ptr; // Free allocated memory
    return 0;
}