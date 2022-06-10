#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int matrix[10][10], row, col, i, j, transpose_matrix[10][10];
    cout<<"Enter the Row and Columns number : ";
    cin>>row>>col;

      for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
         cout << "Enter element Matrix ["<< i+1<<"] ["<< j+1<<"]: ";
         cin >> matrix[i][j];
      }
   }

   cout<<"\n\nEntered matrix :\n\n";
   for(int i=0; i<row; i++)
   {
       for(int j =0; j<col; j++)
       {
           cout<<"   "<<matrix[i][j];
           if(j==col-1)
           cout<<endl<<endl;
       }
   }

   for(int i =0; i<row; i++)
   {
       for(int j = 0; j<col;j++)
       {
           transpose_matrix[j][i] = matrix[i][j];
       }
   }

      cout<<"\n\ntranspose matrix :\n\n";


      for (int i = 0; i < col; i++)
      {
          for (int j = 0; j < row; j++) {
         cout<<"   "<<transpose_matrix[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }
      }



    getchar();
}
