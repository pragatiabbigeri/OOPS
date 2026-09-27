#include<iostream>
using namespace std;
class time
{
    int hour,minute,second;
public:
    void gettime()
    {
        cout << "enter hours:" ;
        cin >>hour;
        cout << "enter minutes:";
        cin >> minute;
        cout << "enter seconds:";
        cin >> second;
    }
    void print()
    {
        cout << "\nhour: " << hour;
        cout << "\tminute: " << minute;
        cout << "\tsecond: " << second;
    }
    void addtime(time x, time y)
    {
        hour = x.hour + y.hour;
        minute =x.minute + y.minute;
        second = x.second + y.second;
    }
};

int main()
{
    time t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t1.print();
    t2.print();
    t3.addtime(t1,t2);
    t3.print();
    return 0;
}
