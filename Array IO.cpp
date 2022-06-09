#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int element[3][4];

    for(int row = 0; row<3; row++)
    {
        for(int col = 0; col<4; col++)
        {
            cout<<"type elements of ["<<row<<"] ["<<col<<"] = ";
            cin>>element[row][col];
        }
    }

    cout<<"\n";
    for(int row = 0; row<3; row++)
    {
        for(int col = 0; col<4; col++)
        {
            cout<<"the elements of ["<<row<<"] ["<<col<<"] = "<<element[row][col]<<"\n";
        }
    }
    getchar();
}
