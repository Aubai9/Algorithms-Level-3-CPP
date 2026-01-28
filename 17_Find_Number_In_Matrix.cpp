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
                    matrix[i][j] = generateRandomNumber(0,100);
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


bool CheckIfNumberExist(int matrix1[3][3],short Rows,short Cols,short TargetNumber)
{
    for(short i = 0; i < Rows; i++)
        {
            for(short j = 0; j < Cols; j++)
                {
                    if(matrix1[i][j]== TargetNumber)
                        {
                            return true;
                        }
                }
        }
    return false;
}

void printResult(bool Result)
{
    if(Result)
        cout<<"Yes,Your Number Found in matrix";
    else
        cout<<"NO,Your Number is not Found in matrix";
}

int main()
{
    srand((unsigned)time(NULL));

    // Tartget Numebr
    short TargetNumber;
    cout<<"Enter the number to look for in matrix:\n";
    cin>>TargetNumber;

    //Matrices

    int matrix1[3][3];

    fillMatrixWithNumbers(matrix1,3,3);

    cout<<" matrix 1 numbers : \n";
    printMatrixElements(matrix1,3,3);

    bool Result = CheckIfNumberExist(matrix1,3,3,TargetNumber);
    printResult(Result);
    return 0;
}
