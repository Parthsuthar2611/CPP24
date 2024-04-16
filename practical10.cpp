#include<iostream>
using namespace std;
class employee
{
   int years;
   int months;
   public:
   employee()
   {
       years =0;
       months =0;
   }
   employee(float a)
   {
      years = a;
      months = (a-years)*12;
   }
   void putdata()
   {
    cout<<"Employee experience is "<<years<<" years and "<<months<<" months";
   }
};
int main()
{
    float n;
    cout<<"Enter employee experience :";
    cin>>n;
    employee E;
    E = n;
    E.putdata();

    return 0;
}

