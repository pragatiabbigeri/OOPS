#include<iostream>
using namespace std;
class rectangle
{
    int width, length;
public:
    void set_values(int, int);
    int area()
    {
        int result = width * length;
    }

};
void rectangle :: set_values(int x,int y)
{
    width = x, length = y;
}
int main()
{
    int w, l, w1, l1;
    cout << "enter width and length of rectangle 1:" ;
    cin >> w >> l;
    cout << "enter width and length of rectangle 2:" ;
    cin >> w1 >> l1;
    rectangle r1, r2;
    r1.set_values(w,l);
    cout << "area r1: " << r1.area() << endl;
    r2.set_values(w1,l1);
    cout << "area r2: " << r2.area() << endl;
}
