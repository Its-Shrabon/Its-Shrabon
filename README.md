•	Array?  - Definition: An array is a collection of variables of the same type.

•	Array declaration:
 Data_type array_name [array_size];

•	Array Index number is 0.

Int marks[5];       Array size 5
                              Marks[0] Marks[1] Marks[2] Marks[3] Marks[4] 

•	Array initialization 
marks[0] = 90;
marks[1] = 80;
…

•	Input Array
int marks[5] = {90, 80, 70, 60,50 }

•	Output Array
Cout<<marks[0];

Also use loop.

•	Types of Array
i.	One dimensional ( 1- D) arrays or Linear arrays. Example : int marks [5];
ii.	Multi-dimensional arrays.
a)	Two dimensional ( 2-D ) arrays or Matrix arrays. Example : int marks [2][3];
b)	Three dimensional arrays. Example : int marks [2][3][4];
















•	Old style-

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int marks [5];
    marks[0] = 90;
    marks[1] = 80;
    marks[2] = 70;
    marks[3] = 60;
    marks[4] = 50;
    cout<<marks[0] <<"\n";
    cout<<marks[1] <<"\n";
    cout<<marks[2] <<"\n";
    cout<<marks[3] <<"\n";
    cout<<marks[4] <<"\n";
    getchar ();
}
•	Stylish style – 

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int marks [5] = {90,80,70,60,50};
     for(int i=0; i<5; i++)
     {
         cout<<marks[i]<<endl;
     }
     getchar();
}








•	Input-output arrays –

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int runs[5];

    for(int i = 0; i<5 ; i++)
    {
        cout<<"Enter players numbers :";
        cin>>runs[i];
    }
    cout<<"\n\nPlayer runs are :";
    for(int i=0;i<5; i++)
    {
        cout<<runs[i] <<"\t";
    }
    getchar();
}



