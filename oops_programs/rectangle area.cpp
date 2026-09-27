#include<iostream>
using namespace std;
class rectangle
{
public:
    int area(int w,int l)
    {
        int result = w * l;
    }

};
int main()
{
    int w, l, w1, l1;
    cout << "enter width and length of rectangle 1:" ;
    cin >> w >> l;
    cout << "enter width and length of rectangle 2:" ;
    cin >> w1 >> l1;
    rectangle r1, r2;
    int result1 = r1.area(w,l);
    cout << "area r1: " << result1 << endl;
    int result2 = r2.area(w1, l1);
    cout << "area r2: " << result2 << endl;
}
