#include<iostream>
using namespace std;
class Add
{
  int a,b,sum;
  public:
  void putdata()
  {
    cout<<"ENTER DIGIT"<<endl;
    cin>>a>>b;
  }
  void getdata()
  {
    sum=a+b;
    cout<<sum;
  }
};

int main()
{
   Add obj1;
   obj1.putdata();
   obj1.getdata();
}

