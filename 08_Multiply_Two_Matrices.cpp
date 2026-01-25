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

int MultiplyMatrixElements(int matrix1[3][3],int matrix2[3][3],int matrix3[3][3],int Rows,int Cols)
{
    for(short i = 0 ; i < Rows; i++)
        {
            for(short j = 0 ; j < Cols; j++)
                {
                    matrix3[i][j]= matrix1[i][j] * matrix2[i][j];
                }
        }
    return matrix3[3][3];
}


int main()
{
    srand((unsigned)time(NULL));

    int matrix1[3][3], matrix2[3][3], matrix3[3][3];

    fillMatrixWithNumbers(matrix1,3,3);
    fillMatrixWithNumbers(matrix2,3,3);

    cout<<"\nMatrix 1 elements are: \n";
    printMatrixElements(matrix1,3, 3);
    cout<<"\nMatrix 2 elements are: \n";
    printMatrixElements(matrix2,3, 3);

    MultiplyMatrixElements(matrix1,matrix2,matrix3,3,3);

    cout<<"\nMatrix 2 elements are: \n";
    printMatrixElements(matrix3,3, 3);

    return 0;
}
