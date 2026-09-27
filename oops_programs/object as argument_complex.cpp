#include<iostream>
using namespace std;
class complex
{
    int real,imaginary;
public:
    void getcomplex()
    {
        cout << "enter real number:" ;
        cin >> real;
        cout << "enter imaginary number:";
        cin >> imaginary;

    }
    void print()
    {
        cout << "\nreal: " << real;
        cout << "\timaginary: " << imaginary;
    }
    void addcomplex(complex x, complex y)
    {
        real = x.real + y.real;
        imaginary =x.imaginary + y.imaginary;
    }
    void displaysum()
    {
        cout << "\nsum: " << real <<"+" << imaginary;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.getcomplex();
    c2.getcomplex();
    c1.print();
    c2.print();
    c3.addcomplex(c1,c2);
    c3.displaysum();
    return 0;
}

