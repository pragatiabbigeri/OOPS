#include<iostream>
using namespace std;
class time
{
    int hour,minute,second;
public:
    void settime(int, int, int);
    void print()
    {
        cout << "time:" << hour <<":" << minute << ":" << second << endl;
    }
};
void time :: settime(int h, int m,int s)
{
    hour = h;
    minute = m;
    second = s;
}
int main()
{
    int h1,m1,s1,h2,m2,s2;
    cout << "enter hour,minute, second of 1:" ;
    cin >> h1 >> m1 >> s1;
    cout << "enter hour,minute, second of 2:" ;
    cin >> h2 >> m2 >> s2;
    time t1,t2;
    t1.settime(h1,m1,s1);
    t1.print();
    t2.settime(h2,m2,s2);
    t2.print();
}
