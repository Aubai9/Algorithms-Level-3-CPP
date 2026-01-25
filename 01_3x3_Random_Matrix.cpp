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
                    matrix[i][j] = generateRandomNumber(1,100);
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
                    cout<<setw(3)<<matrix[i][j]<<" \t ";
                }
            cout<<endl;
        }
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix[3][3];
    fillMatrixWithNumbers(matrix,3,3);
    printMatrixElements(matrix,3, 3);
    return 0;
}
