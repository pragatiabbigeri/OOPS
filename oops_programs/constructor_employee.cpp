#include<iostream>
using namespace std;
class employee
{
private:
    char id;
    string dept;
public:
    employee()
    {
        cout << "\nenter id: ";
        cin >> id;
        cout << "enter dept: ";
        cin >> dept;
        cout << "id and dept: " << id << dept;
    }
};
int main()
{
    employee e1,e2;
}

