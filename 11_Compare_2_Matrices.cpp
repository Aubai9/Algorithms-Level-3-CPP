#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
using namespace std;

int generateRandomNumber(int from, int to)
{
    return (rand() % (to -from + 1) +from);
}

void fillMatrixWithNumbers(int matrix[3][3],short Rows,short Cols)
{
    for(short i = 0 ; i < Rows; i++)
        {
            for(short j =0 ; j < Cols; j++)
                {
                    matrix[i][j] = generateRandomNumber(1,10);
                }
        }
}

void printMatrixElements(int  matrix[3][3],short Rows,short Cols)
{
    for(short i = 0 ; i < Rows; i++)
        {
            for(short j = 0 ; j < Cols; j++)
                {
                    cout<<setw(3)<<matrix[i][j]<<" \t ";
                }
            cout<<endl;
        }
}

int  sumMatrixElements(int matrix[3][3],int Rows,int Cols)
{
    int sum = 0;
    for(short i = 0 ; i < Rows; i++)
        {
            for(short j = 0 ; j < Cols; j++)
                {
                    sum+= matrix[i][j];
                }
        }
    return sum;
}

void compareTwoMatrices(int matrix1Sum, int matrix2Sum)
{
    if(matrix1Sum == matrix2Sum)
        cout<<"\nYes, matrices are equal"<<endl;
    else
        cout<<"\nNo, matrices are not equal"<<endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix1[3][3], matrix2[3][3];
    //Matrix 1
    fillMatrixWithNumbers(matrix1,3,3);

    cout<<"\nmatrix 1 numbers : \n";
    printMatrixElements(matrix1,3,3);

    int matrix1Sum = sumMatrixElements(matrix1,3,3);
    cout<<"\nSum matrix 1 numbers : "<<matrix1Sum<<endl;
    //Matrix 2
    fillMatrixWithNumbers(matrix2,3,3);

    cout<<"\nmatrix 2 numbers : \n";
    printMatrixElements(matrix2,3,3);

    int matrix2Sum = sumMatrixElements(matrix2,3,3);
    cout<<"\nSum matrix 2 numbers : "<<matrix2Sum<<endl;

    compareTwoMatrices(matrix1Sum,matrix2Sum);
    return 0;
}
