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


bool compareTwoMatrices(int matrix1[3][3], int matrix2[3][3],int Rows,int Cols)
{
    for(short i = 0 ; i <  Rows; i++)
        {
            for(short j = 0; j< Cols; j++)
                {
                    if(matrix1[i][j]!= matrix2[i][j])
                        {
                            return false;
                        }
                }
        }
        return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix1[3][3], matrix2[3][3];

    //Matrix 1
    fillMatrixWithNumbers(matrix1,3,3);

    cout<<"\nmatrix 1 numbers : \n";
    printMatrixElements(matrix1,3,3);

    //Matrix 2
    fillMatrixWithNumbers(matrix2,3,3);

    cout<<"\nmatrix 2 numbers : \n";
    printMatrixElements(matrix2,3,3);


    bool EqualMatrices = compareTwoMatrices(matrix1,matrix2,3,3);

    if(EqualMatrices == true)
        {
            cout<<"\nYes, Matrices are equal\n";
        }
    else
        {
            cout<<"\nNo, Matrices are not equal\n";
        }
    return 0;
}
