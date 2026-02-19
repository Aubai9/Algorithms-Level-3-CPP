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


int get_MAX_number(int  matrix[3][3],short Rows,short Cols)
{
    short Max_number = matrix[0][0];

    for(short i = 0 ; i < Rows; i++)
        {
            for(short j = 0 ; j < Cols; j++)
                {
                    if(matrix[i][j] > Max_number)
                        {
                            Max_number = matrix[i][j];
                        }
                }
        }
    return Max_number;
}

int get_MIN_number(int  matrix[3][3],short Rows,short Cols)
{
    short Min_number = matrix[0][0];
    for(short i = 0 ; i < Rows; i++)
        {
            for(short j = 0 ; j < Cols; j++)
                {
                    if(matrix[i][j] < Min_number)
                        Min_number = matrix[i][j];
                }
        }
    return Min_number;
}


int main()
{
    srand((unsigned)time(NULL));

    //Matrices

    int matrix1[3][3];

    fillMatrixWithNumbers(matrix1,3,3);

    cout<<" matrix 1 numbers : \n";
    printMatrixElements(matrix1,3,3);

    short maxNumber = get_MAX_number(matrix1,3,3);
    cout<<"Max number in  matrix is : "<<maxNumber<<endl;

    short minNumber = get_MIN_number(matrix1,3,3);
    cout<<"Min number in  matrix is : "<<minNumber<<endl;

    return 0;
}
