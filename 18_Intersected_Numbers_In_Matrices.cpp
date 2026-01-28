#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

short generateRandomNumber(short from, short to)
{
    return (rand() % (to -from + 1) +from);
}

void fillMatrixWithNumbers(int matrix[3][3],short Rows,short Cols)
{
    for(short i = 0 ; i < Rows; i++)
        {
            for(short j =0 ; j < Cols; j++)
                {
                    matrix[i][j] = generateRandomNumber(0,10);
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


bool isNumberInMatrix(int matrix[3][3], short Rows, short Cols, int number)
{
    for (short i = 0; i < Rows; i++)
        {
            for (short j = 0; j < Cols; j++)
                {
                    if (matrix[i][j] == number)
                        {
                            return true;
                        }
                }
        }
    return false;
}

void printIntersectedNumbers(int matrix1[3][3],int matrix2[3][3],short Rows,short Cols)
{
    cout<<"Intersected Numbers are:\n";
    for (short i = 0; i < Rows; i++)
        {
            for (short j = 0; j < Cols; j++)
                {
                    if (isNumberInMatrix(matrix2,Rows,Cols,matrix1[i][j]))
                        {
                            cout<<matrix1[i][j]<<" ";
                        }
                }
        }
}

int main()
{
    srand((unsigned)time(NULL));

    //Matrices

    int matrix1[3][3];

    fillMatrixWithNumbers(matrix1,3,3);

    cout<<" matrix 1 numbers : \n";
    printMatrixElements(matrix1,3,3);

    int matrix2[3][3];

    fillMatrixWithNumbers(matrix2,3,3);

    cout<<" matrix 2 numbers : \n";
    printMatrixElements(matrix2,3,3);

    printIntersectedNumbers(matrix1,matrix2,3,3);
    return 0;
}
