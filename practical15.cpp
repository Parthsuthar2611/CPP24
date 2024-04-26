#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
class product
{
protected:
    int id;
    string name;
    string manufaturer;
    float price;

public:
    product(int id, string name, string manufaturer, float price)
    {
        this-> id = id;
        this-> name = name;
        this-> manufaturer = manufaturer;
        this-> price = price;
    }
    virtual void putdata() = 0;
};
class smartwatch : public product
{
protected:
    float dial_size;

public:
    smartwatch(int id, string name, string manufaturer, float price, float dial_size) : product(id, name, manufaturer, price)
    {
       this-> dial_size = dial_size;
    }
    void putdata()
    {
        cout << "ID " << ": " << id << endl;
        cout << "NAME " << ": " << name << endl;
        cout << "MANUFACTURER " << ": " << manufaturer << endl;
        cout << "PRICE " << ": " << price << endl;
        cout << "DIAL SIZE " << ": " << dial_size << endl;
    }
};
class bedsheet : public product
{
protected:
    float width, height;

public:
    bedsheet(int id, string name, string manufaturer, float price, float width, float height) : product(id, name,manufaturer, price)
    {
        this-> width = width;
        this-> height = height;
    }
    void putdata()
    {
        cout << "ID " << ": " << id << endl;
        cout << "NAME " << ": " << name << endl;
        cout << "MANUFACTURER " << ": " << manufaturer << endl;
        cout << "PRICE " << ": " << price << endl;
        cout << "WIDTH " << ": " << width << endl;
        cout << "HEIGHT " << ": " << height << endl;
    }
};
int main()
{
    int n;
    long int id;
    string name;
    string manufaturer;
    float price;
    float dial_size;
    float width, height;
    cout << "enter 1 for smartwatch menu" << endl;
    cout << "enter 2 for bedsheet menu" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
    cout<<"------Enter smartwatch data------";
        cout << "enter product id : ";
        cin >> id;
        cout << "enter product name : ";
        fflush(stdin);
        getline(cin, name);
        cout << "enter product manufacturer : ";
        fflush(stdin);
        getline(cin, manufaturer);
        cout << "enter product price : ";
        cin >> price;
        cout << "enter product dail size : ";
        cin >> dial_size;
        smartwatch *p;
        p = new smartwatch(id, name, manufaturer, price, dial_size);
        p->putdata();
        break;
    case 2:
    cout<<"------Enter bedsheet data------";
        cout << "enter product id : ";
        cin >> id;
        cout << "enter product name : ";
        fflush(stdin);
        getline(cin, name);
        cout << "enter product manufacturer : ";
        fflush(stdin);
        getline(cin, manufaturer);
        cout << "enter product price : ";
        cin >> price;
        cout << "enter product width : ";
        cin >> width;
        cout << "enter product heigth : ";
        cin >> height;
        bedsheet *b;
        b = new bedsheet(id, name, manufaturer, price, width, height);
        b->putdata();
        break;
    }

    return 0;
}