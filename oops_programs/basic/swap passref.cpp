#include<iostream>
using namespace std;
int swap_numbers(int &, int &);
int main()
{
    int a =5;
    int b =10;
    swap_numbers(a,b);
    cout << "a=" << a << "b=" << b << endl;
}
int swap_numbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

