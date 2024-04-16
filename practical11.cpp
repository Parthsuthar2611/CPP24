#include<iostream>
#include<iomanip>

using namespace std;
class employee
{
  int years;
  float experience,months;
  public:
  operator float()
  {
    return experience;
  }
  void getdata()
  {
    cout<<"Enter employee experience in years and months \n";
    cout<<"Enter year :";
    cin>>years;
    cout<<"Enter months :";
    cin>>months;
    months =months/12;
    experience = years + months;

  }
};
int main()
{
    float experience;
    employee E;
    E.getdata();
    experience =E;
    cout<<"Experience is :"<<setprecision(4)<<experience;
    return 0;
}