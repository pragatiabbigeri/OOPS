#include<iostream>
using namespace std;
int main()
{
    char str[] = "Hello world";
    int count1 = 0;
    for(int i=0;str[i]!='\0';i++)
    {
        count1++;
    }
    cout << "length of a string:" << count1 << endl;
}
