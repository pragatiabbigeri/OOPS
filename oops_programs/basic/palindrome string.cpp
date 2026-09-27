#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[]="madam";
    int N = strlen(str);
    int start = 0;
    int end1 = N-1;
    while(start < end1)
    {
        if(str[start] != str[end1])
        {
            cout << "not palindrome" << endl;
            return 0;
        }
        start++;
        end1--;
    }
    cout <<"is palindrome" << endl;
}
