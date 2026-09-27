#include<iostream>
using namespace std;
class rectangle
{
    int length,width;
public:
    rectangle()
    {
        cout << "enter length:";
        cin >> length;
        cout << "enter width:";
        cin >> width;
        cout << "length: " << length << "\twidth: "<< width << endl;
    }
    rectangle(int len,int wid)
    {
        length=len;
        width=wid;
        cout << "length and width: " << length <<" " << width <<endl;
    }
};
int main()
{
    rectangle r1;
    rectangle r2(34, 45);
}
