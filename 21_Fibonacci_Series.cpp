#include<iostream>
#include<string>

using namespace std;

void FibonacciSeries(short number)
{
    int  a = 0, b = 1, next;
    cout<<"Fibonacci Series \n";
    for(short i = 1 ; i < number; i++)
        {
            if(i <= 1)
                {
                    next = i;
                }
            else
                {
                    next = a + b;
                    a = b;
                    b = next;
                }
            cout<<next<<(i == (number -1)? " ": " | ");
        }

}


int main()
{
    short number;
    cout<<"enter a number\n";
    cin>>number;

    FibonacciSeries(number);



    return 0;
}
