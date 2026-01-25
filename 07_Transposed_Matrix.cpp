#include<iostream>

using namespace std;


void fillMatrixWithOrderdNumbers(int matrix[3][3],short Rows,short Cols)
{
    int counter = 0;
    for(short i = 0 ; i < Rows; i++)
        {
            for(short j =0 ; j < Cols; j++)
                {
                    counter++;
                    matrix[i][j] = counter;
                }
        }
}

void printMatrixElements(int  matrix[3][3],short Rows,short Cols)
{
    cout<<"Matrix elements are: \n";
    for(short i = 0 ; i < Rows; i++)
        {
            for(short j = 0 ; j < Cols; j++)
                {
                    cout<<matrix[i][j]<<" \t ";
                }
            cout<<endl;
        }
}

void Transposed_Matrix(int  matrix[3][3], int MatrixTransposed[3][3],short Rows,short Cols)
{
    for(short i = 0 ; i < Rows; i++)
        {
            for(short j = 0 ; j < Cols; j++)
                {
                    MatrixTransposed[j][i] = matrix[i][j] ;
                }

        }
}


int main()
{
    int  matrix[3][3], MatrixTransposed[3][3];

    fillMatrixWithOrderdNumbers(matrix,3,3);

    printMatrixElements(matrix,3, 3);

    Transposed_Matrix(matrix,MatrixTransposed,3,3);

    printMatrixElements(MatrixTransposed,3,3);

    return 0;
}
