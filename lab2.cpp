#include<iostream>
#include<cmath>
using namespace std;

long double d_fact(int n)
{
    if (n==0)
        return 1;
    if (n==1)
        return 1;
    return n*d_fact(n-2);
}

long double t_func(long double x)
{
    long double summa_ch=0;
    long double summa_zn=0;
    for (int k=0;k<=10;k++)
    {
        summa_ch=summa_ch+pow(x,2*k+1)/d_fact(2*k+1);
    }  
    for (int k=0;k<=10;k++)
    {
        summa_zn=summa_zn+pow(x,2*k)/d_fact(2*k);
    }
    return summa_ch/summa_zn;
}

int main()
{
    long double function;
    long double y;
    cin >> y;
    function=(7*t_func(0.25)+2*t_func(1+y))/(6-t_func(y*y-1));
    cout << function;
    return 0;
}