// 10.Write a C++ program to find numbers between 100 and 400 (both
// included) where each digit of a number is an even number. The numbers
// obtained should be printed in a comma-separated sequence.

#include <iostream>
using namespace std;

int main()
{
    string st;
    for (int i=100;i<=400;i++)
    {
        st=to_string(i);
        if((st[0]%2==0)&&(st[1]%2==0)&&(st[2]%2==0))
        {
            cout<<i<<",";
        }
    }
}