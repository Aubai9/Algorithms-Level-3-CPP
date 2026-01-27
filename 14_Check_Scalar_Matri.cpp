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


bool checkScalarMatrix(int matrix1[3][3],int Rows,int Cols)
{
    int firstDiagonalElement = matrix1[0][0];
    for(int i = 0; i < Rows; i++)
        {
            for(int j = 0; j < Cols; j++)
                {
                    if(i == j && matrix1[i][j] != firstDiagonalElement)
                        {
                            return false;
                        }
                    else if(i!=j && matrix1[i][j] != 0)
                        {
                            return false;
                        }
                }
        }
    return true;
}

void printResult(bool result)
{
    if(result)
        {
            cout<<"Yes, it is an scalar matrix\n";
        }
    else
        {
            cout<<"No, it is not an scalar matrix\n";
        }
}

int main()
{
    srand((unsigned)time(NULL));

    //Matrices

    int matrix1[3][3];

    int matrix2[3][3] =
    {
        {4, 0, 0},
        {0, 4, 0},
        {0, 0, 4}
    };

    fillMatrixWithNumbers(matrix1,3,3);

    cout<<" matrix 1 numbers : \n";
    printMatrixElements(matrix1,3,3);

    bool result = checkScalarMatrix(matrix1,3,3);

    cout<<" matrix 2 numbers : \n";
    printMatrixElements(matrix2,3,3);


    //Check Results

    cout<<"\nMatrix 1:\n";
    bool result1 = checkScalarMatrix(matrix1,3,3);
    printResult(result1);


    cout<<"\nMatrix 2:\n";
    bool result2 = checkScalarMatrix(matrix2,3,3);
    printResult(result2);

    return 0;
}
