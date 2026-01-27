#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
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


int CountRepeatedNumber(int matrix1[3][3],short Rows,short Cols,short TargetNumber)
{
    short counter = 0;
    for(short i = 0; i < Rows; i++)
        {
            for(short j = 0; j < Cols; j++)
                {
                    if(matrix1[i][j]== TargetNumber)
                        {
                            counter++;
                        }
                }
        }
    return counter;
}

void printResult(short targetNumber,short counter){
  cout<<"Number "<<targetNumber<<" count in matrix is: "<<counter;
}

int main()
{
    srand((unsigned)time(NULL));

    // Tartget Numebr
    short TargetNumber;
    cout<<"Enter the number to count in matrix:\n";
    cin>>TargetNumber;

    //Matrices

    int matrix1[3][3];

    fillMatrixWithNumbers(matrix1,3,3);

    cout<<" matrix 1 numbers : \n";
    printMatrixElements(matrix1,3,3);

    short counter = CountRepeatedNumber(matrix1,3,3,TargetNumber);
    printResult(TargetNumber,counter);
    return 0;
}
