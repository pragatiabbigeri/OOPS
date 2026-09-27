#include<iostream>
using namespace std;
int main()
{
    int N;
    cout << "enter number of elements in a list:" << endl;
    cin >> N;
    int arr[N];
    cout << "enter the elements:" << endl;
    for(int i=0;i<N ;i++)
    {
        cin >> arr[i];
    }
    int maximum = arr[0];
    for(int i=0;i<N;i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    cout << "biggest number in the list:" << maximum << endl;
    return 0;
}
