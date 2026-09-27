#include <iostream>
using namespace std;
class demo
{
    static int count;

  public:
    void getcount()
    {
        cout<<"count"<<" "<<++count<<endl;
    }

};
int demo::count;
int main()
{
  demo e1,e2,e3;
   e1.getcount();
   e2.getcount();
   e3.getcount();
   return 0;

}

