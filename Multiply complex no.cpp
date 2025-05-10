#include <iostream>
using namespace std;

// Forward declaration of Class B and Class C
class ClassB;
class ClassC;

// Class A
class ClassA {
private:
    int x, y;
public:
    ClassA(int a, int b) : x(a), y(b) {}
    
    // Friend function declaration
    friend int multiply(const ClassA& a, const ClassB& b, const ClassC& c);
};

// Class B
class ClassB {
private:
    int m, n;
public:
    ClassB(int a, int b) : m(a), n(b) {}
    
    // Friend function declaration
    friend int multiply(const ClassA& a, const ClassB& b, const ClassC& c);
};

// Class C
class ClassC {
private:
    int o, p;
public:
    ClassC(int a, int b) : o(a), p(b) {}
    
    // Friend function declaration
    friend int multiply(const ClassA& a, const ClassB& b, const ClassC& c);
};

// Friend function definition
int multiply(const ClassA& a, const ClassB& b, const ClassC& c) {
    return (a.x * b.m * c.o) + (a.y * b.n * c.p);
}

int main() {
    // Create instances of Class A, B, and C
    ClassA objA(2, 3);
    ClassB objB(4, 5);
    ClassC objC(6, 7);

    // Calculate the multiplication
    int result = multiply(objA, objB, objC);

    // Print the result
    cout << "Result: " << result << endl;

    return 0;
}