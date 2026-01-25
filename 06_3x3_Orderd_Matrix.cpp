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


int main()
{
    int  matrix[3][3];
    fillMatrixWithOrderdNumbers(matrix,3,3);
    printMatrixElements(matrix,3, 3);


    return 0;
}
