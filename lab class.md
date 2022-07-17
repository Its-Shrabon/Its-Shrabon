#include<iostream>
using namespace std;

class Programming
{
private :
    int marks;
    float cgpa;
    string grade;

public:
    Programming()
    {
        cout<<"default constructor is called"<<endl;

    }

    Programming(int x)
    {
        marks = x;
        cout<<"Parameterized constructor 1 is called "<<endl;
    }

    Programming(int x, float y)
    {
        marks = x;
        cgpa = y;
        cout<<"Parameterized constructor 2 is called "<<endl;

    }
    Programming (int x, float y, string z)
    {
        marks = x;
        cgpa =y;
        grade =z;
        cout<<"Parameterized constructor 3 is called "<<endl;
    }
    void show ()
    {
        cout<<marks<<endl;
        cout<<cgpa<<endl;
        cout<<grade<<endl;
    }
};

int main()
{
    Programming p;
    Programming p1(90);
    Programming p2(80,95.5);
    Programming p3 (82, 92.5, "A+");
    p1.show();
    p2.show();
    p3.show();

}
