#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void printmarksheet();
int main()
{
    printmarksheet();
}
void printmarksheet()
{
   int semester,i,j,gradep[3],gradet[3]; 
   char Student_name[50],Student_id[50];
   string sub1,sub2,sub3;
   int Theory_marks[3];
   int practical_marks[3];
   string Theory[3],Practical[3];
   float sgpa=0;

   cout<<"Enter student id:";
   cin>>Student_id;
   fflush(stdin);
   cout<<"Enter student name:";
   cin>>Student_name;
   fflush(stdin);
   cout<<"Enter Semester:";
   cin>>semester;
   fflush(stdin);
   
    cout<<"Subject 1:";
    getline(cin,sub1);
    fflush(stdin);
    cout<<"Sbuject 2:";
    getline(cin,sub2);
    fflush(stdin);
    cout<<"Subject 3:";
    getline(cin,sub3);
    fflush(stdin);
   
    for(i=0;i<3;i++)
    {
        cout<<"Enter practical marks "<<i+1<<":";
        cin>>practical_marks[i];
        
    }
    for(i=0;i<3;i++)
    {
        cout<<"Enter theory marks "<<i+1<<":";
        cin>>Theory_marks[i];
    }

    for ( j = 0; j < 3; j++)
    {
        
            if (Theory_marks[j]>=80)
            {
                gradet[j]=10;
                Theory[j]="AA";
            }
            else if (Theory_marks[j]>=73 && Theory_marks[j]<80)
            {
                gradet[j]=9;
                Theory[j]="AB";
            }
            else if (Theory_marks[j]>=66 && Theory_marks[j]<73)
            {
                gradet[j]=8;
                Theory[j]="BB";
            }
            else if (Theory_marks[j]>=60 && Theory_marks[j]<66)
            {
                gradet[j]=7;
                Theory[j]="BC";
            }
            else if (Theory_marks[j]>=55 && Theory_marks[j]<60)
            {
                gradet[j]=6;
                Theory[j]="CC";
            }
            else if (Theory_marks[j]>=50 && Theory_marks[j]<55)
            {
                gradet[j]=5;
                Theory[j]="CD";
            }
             else if (Theory_marks[j]>=45 && Theory_marks[j]<50)
            {
                gradet[j]=4;
                Theory[j]="DD";
            }
            else
            {
                gradet[j]=0;
                Theory[j]="FF";
            }
        }
         for ( i = 0; i < 3; i++)
        {
            if (practical_marks[i]>=80)
            {
                gradep[i]=10;
                Practical[i]="AA";
            }
            else if (practical_marks[i]>=73 && practical_marks[i]<80)
            {
                 gradep[i]=9;
                Practical[i]="AB";
            }
            else if (practical_marks[i]>=66 && practical_marks[i]<73)
            {
                 gradep[i]=8;
                Practical[i]="BB";
            }
            else if (practical_marks[i]>=60 && practical_marks[i]<66)
            {
                 gradep[i]=7;
                Practical[i]="BC";
            }
            else if (practical_marks[i]>=55 && practical_marks[i]<60)
            {
                 gradep[i]=6;
                Practical[i]="CC";
            }
            else if (practical_marks[i]>=50 && practical_marks[i]<55)
            {
                 gradep[i]=5;
                Practical[i]="CD";
            }
             else if (practical_marks[i]>=45 && practical_marks[i]<50)
            {
                 gradep[i]=4;
                Practical[i]="DD";
            }
            else
            {
                 gradep[i]=0;
                Practical[i]="FF";
            }
        }


    for ( i = 0; i < 3; i++)
    {
        sgpa = sgpa + (float)3*gradep[i] +(float)3*gradet[i];;
    }
    sgpa=sgpa/18;


   cout<<"Marksheet\n";
   cout<<"Studen name"<<setw(12)<<": "<<Student_name<<endl;
   cout<<"Semester"<<setw(15)<<": "<<semester<<endl;   
   cout<<setw(45)<<"Thoery" <<setw(13) <<"Practcal"<<endl;
   cout<<left<<setw(30)<<sub1<<right<<setw(13)<<Theory[0]<<right<<setw(13)<<Practical[0]<<endl;
   cout<<left<<setw(30)<<sub2<<right<<setw(13)<<Theory[1]<<right<<setw(13)<<Practical[1]<<endl;
   cout<<left<<setw(30)<<sub3<<right<<setw(13)<<Theory[2]<<right<<setw(13)<<Practical[2]<<endl;
   cout<<"SGPA"<<setw(16)<<":   "<<setprecision(3)<<sgpa;

}