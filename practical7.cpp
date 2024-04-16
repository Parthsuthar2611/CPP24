#include<iostream>
using namespace std;
class Complex
{
    float real,imaginary;
    public:
    void getdata()
    {
        cout<<"Enter real part :";
        cin>>real;
        cout<<"Enter imaginary part :";
        cin>>imaginary;
    }
    void putdata()
    {
        if(imaginary>=0){
        cout<<"The comlpex number is :"<<endl;
        cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        else
        {
        cout<<"The comlpex number is :"<<endl;
        cout<<real<<imaginary<<"i"<<endl;
        }
    }
    Complex operator+ (Complex &c)
    {
        Complex temp;
        temp.real = real + c.real; 
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    Complex operator- (Complex &c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imaginary = imaginary - c.imaginary;
        return temp;
    }
    Complex operator* (Complex &c)
    {
        Complex temp;
        temp.real = ((real*c.real)-(imaginary*c.imaginary)) ;
        temp.imaginary = ((real*c.imaginary)+(imaginary*c.real));
        return temp;
    }
    Complex operator/ (Complex &c)
    {
        Complex temp;
        temp.real = ((real*c.real)+(imaginary*c.imaginary))/((c.real*c.real )+ (c.imaginary*c.imaginary));
        temp.imaginary = ((imaginary*c.real)-(real*c.imaginary))/((c.real*c.real )+ (c.imaginary*c.imaginary));
        return temp;
    }
     Complex operator! ()
    {
        Complex temp;
        temp.real = -real;
        temp.imaginary = -imaginary;
        return temp;
    }
    

};
int main()
{
    Complex c1,c2,c3,c4;
    char choice;
    c1.getdata();
    c2.getdata();
    cout<<"Choose operation"<<endl<<"(+) addition"<<endl<<"(-) subtraction"<<endl<<"(*)  munliplication"<<
    endl<<"(/) division"<<endl<<"(!) negation"<<endl;
    cin>>choice;
    switch (choice)
    {
    case '+':
    c3 = c1+c2;
    c3.putdata();
    break;
    case '-':
    c3 = c1-c2;
    c3.putdata();
    break;
    case '*':
    c3=c1*c2;
    c3.putdata();
    break;
    case '/':
    c3=c1/c2;
    c3.putdata();
    break;
    case '!':
    c3=!c1;
    c3.putdata();
    c4=!c2;
    c4.putdata();
    break;
    default :
    cout<<"Wrong chice ";
    break;
    }
    
      

}