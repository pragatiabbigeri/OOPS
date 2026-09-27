#include<iostream>
using namespace std;
class emp
{
    int id;
    string name;
    int salary;
    string dept;
public:
    emp(int ID,string NAME,int SALARY,string DEPT)
    {
        id= ID;
        name = NAME;
        salary= SALARY;
        dept = DEPT;
        cout << "id" <<ID<<endl;
        cout << "name" << NAME <<endl;
        cout << "salary" << SALARY << endl;
        cout <<"dept" << DEPT <<endl;
    }
};
int main()
{
    emp e1(302, "Pragati" , 50000, "ECE");

}
