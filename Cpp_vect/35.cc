
/* allocating Dynamic memory for matrix  */

#include <iostream>
using namespace std;
int main()
{
    int  rows, columns;
    cout << " Enter value of rows & columns "<< endl;
    cin >> rows >>  columns;
    int **p;
    p = new int*[rows];

    for(int i=0; i<rows; i++)
    p[i]= new int[columns];

    cout << "Enter matrix values "<<endl;
    for(int i=0; i<rows; i++)
    for (int j=0 ; j < columns; j++)
    cin >> p[i][j];
    

    cout << "Array Elements are : "<<endl;
    for(int i=0; i < rows; i++)
    {
        for (int j=0 ; j < columns; j++)
        cout << p[i][j] << " ";
        printf("\n");
    } 

    for(int i=0; i<rows; i++) 
    delete [] p[i];
    delete [] p;

}