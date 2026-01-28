#include<iostream>
#include<string>
#include<iomanip>

#include<cmath>

using namespace std;


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

void printResult(short ZerosCounter,short nonZerosCounter)
{
    if(ZerosCounter > nonZerosCounter)
        cout<<"Yes: it is a Sparse\n";
    else
        cout<<"No: it is not a Sparse\n";
}


short CountNumberInMatrix(int matrix1[3][3],short number,short Rows,short Cols)
{
    short numberCount = 0;
    for(short i = 0; i < Rows; i++)
        {
            for(short j = 0; j < Cols; j++)
                {
                    if(matrix1[i][j]== number)
                        {
                            numberCount++;
                        }

                }
        }
    return numberCount;
}

bool isSparseMatrix(int matrix[3][3],short Rows,short Cols)
{
    short matrixSize = Rows * Cols;
    return (CountNumberInMatrix(matrix,0,Rows,Cols))>= ceil((float )matrixSize /2);
}

int main()
{

    int matrix1[3][3] =
    {
        0,0,1,
        0,0,2,
        0,0,3,
    };


    cout<<" matrix 1 numbers : \n";
    printMatrixElements(matrix1,3,3);

    if(isSparseMatrix(matrix1,3,3))
        cout<<"\nYes, it is Sparse\n";
    else
        cout<<"\nNo, it is not Sparse\n";

    return 0;
}
