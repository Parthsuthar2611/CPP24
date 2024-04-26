#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<string>

using namespace std;

class literature
{
    string title;
    long int id; 
 
    public:
    void getdata()
    {
        cout<<"Enter id :";
        cin>>id;
        cout<<"Enter title :";
        cin>>title;
    }
    void putdata()
    {
       
        cout<<left<<setw(5)<<id<<setw(15)<<title;

    }
   
};

class e_lit :public virtual literature
{
    string doi;
    public:
    void getdoi()
    {
        
        cout<<"Enter doi:";
        cin>>doi;

    }
    void putdoi()
    {
        putdata();
       
       cout<<left<<setw(30)<<doi;

    }
};
class hard_bound : virtual public  literature
{
    int no_copies;
    public:
    void getno()
    {
        
        cout<<"Enter no of copies :";
        cin>>no_copies;
    }
    void putno()
    {
        putdata();
        cout<<left<<setw(30)<<no_copies;
    }
};

class book : public e_lit , public hard_bound
{
    int isbn;
    char Type_book;
    public:
    char choice;
    void getisbn()
    {
        getdata();
        cout<<"Enter isbn :";
        cin>>isbn;
        
        cout<<"(E)copy or (H)copy :";
        cin>>choice;
        if(choice== 'e' || choice== 'E')
        {
            getdoi();
        }
        else if(choice=='H' || choice=='h')
        {
            getno();
        }
        

    }
    void putisbn()
    {
        
       if(choice== 'e' || choice== 'E')
        {
            putdoi();
        }
        else if(choice=='H' || choice=='h')
        {
            putno();
        }
        cout<<left<<setw(40)<<isbn;
    }

};
class magzine : public e_lit,public hard_bound
{
    int issn;
    public:
    char select;
    void getissn()
    {
        getdata();
        cout<<"Enter issn :";;
        cin>>issn;
        
        cout<<"(E)copy or (H)copy :";
        cin>>select;
        if(select== 'e' || select== 'E')
        {
            getdoi();
        }
        else if(select=='H' || select=='h')
        {
            getno();
        }
    }
    void putissn()
    {
        if(select== 'e' || select== 'E')
        {
            putdoi();
        }
        else if(select=='H' || select=='h')
        {
            putno();
        }
        cout<<left<<setw(40)<<issn;

    }
};
int main()
{
    book b[100];
    magzine m[100];
    int  choice ,b_count=0,m_count=0;
    char choice_new;
    do{
    cout<<"Enter 1 : Add book data"<<endl<<"Enter 2 : Add magazine data "<<endl<<"Enter 3 : List all books "<<endl<<"Enter 4 : List all magazines"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        char selection;
        do
        {
            b[b_count].getisbn();
            b_count++;
            cout<<"Enter y to enter more book data or press n:";;
            cin>>selection;
        } while (selection=='y' || selection=='Y');
        break;
        case 2:
        char option;
        do 
        {
           m[m_count].getissn();
           cout<<"Enter y to enter more magazine data or press n:";;
           cin>>option;
        }while(option=='y' || option== 'Y');
        break;
        case 3:
        cout<<"*****List of all books*****"<<endl;
        for(int i=0;i<b_count;i++)
        {
            b[i].putisbn();
            cout<<"\n";
        } 
        break;
        case 4:
        cout<<"******List of all magazine******"<<endl;
        for(int i=0;i<m_count;i++)
        {
            m[i].putissn();
            cout<<"\n";
        }
        break;
        default :
        cout<<"Entered choice is wrong";
        break;
        
    }
     cout<<"Enter y for continue or n for exist :";
     cin>>choice_new;
    }
    while(choice_new=='y'||choice_new=='Y');
}