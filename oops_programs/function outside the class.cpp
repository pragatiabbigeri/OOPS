#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
public:
    void setdata()
    {
        cout << "enter name: ";
        cin >> name;
        cout << "enter age: ";
        cin >> age;
    }
    void displaydata();
};
void student :: displaydata()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;;
    }
int main()
{
    student s1, s2;
    s1.setdata();
    s2.setdata();
    s1.displaydata();
    s2.displaydata();
    return 0;
}

