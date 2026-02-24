#include<iostream>
#include<string>

using namespace std;

int FibonacciSeriesUsingRecurssion(short number)
{
    if(number <= 1)
    {
        return number;
    }
    else
        {
            return FibonacciSeriesUsingRecurssion(number - 1) + FibonacciSeriesUsingRecurssion(number - 2);
        }
}

void printFibonacciSeries(int number)
{
    for(short i = 1; i< number; i++)
        {
            cout<<FibonacciSeriesUsingRecurssion(i)<<" ";
        }
    cout<<endl;
}

int main()
{
    short number;
    cout<<"enter a number\n";
    cin>>number;

    FibonacciSeriesUsingRecurssion(number);

    printFibonacciSeries(number);

    return 0;
}
