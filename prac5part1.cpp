#include<iostream>
#define pi 3.148
using namespace std;
class circle
{
   float radius;
   static int c;
   public:
    circle()
    {
        radius=1.;
        c++;
    }
    circle(float a)
    {
        radius=a;
        c++;
    }
    circle(circle &f)
    {
        radius=f.radius;
        c++;
    }
    void totalobj()
    {
        cout<<"Total active object :"<<c<<endl;
    }
    void putdata()
    {
        float area;
        area=pi*radius*radius;
        cout<<"Circle with radius"<<radius<<"has area ="<<area<<endl;
    }
    ~circle()
    {
        cout<<"one object is deleted"<<endl;
        c--;
        totalobj();
    }  
};
int circle :: c = 0;
int main()
{
    circle c1;
    circle c2(20.00);
    circle c3(c1);
    c1.putdata();
    c2.putdata();
    c3.putdata();
    return 0;
}
