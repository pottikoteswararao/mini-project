#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"calc.h"

const double pi=3.141592653;

double add(double a,double b)
{
    double sum=0;
    sum=a+b;
    return sum;
}
double sub(double a,double b)
{
    double ans=0;
    ans=a-b;
    return ans;
}
double mul(double a,double b)
{
    double ans=0;
    ans=a*b;
    return ans;
}
double divi(double a,double b)
{
    double ans;
    if(b==0)
    {
        printf("undefined, cannot divide with number ");
    }
    else
    {
        ans=a/b;
    }
    return ans;
}
double square(double a)
{
    double sq=1;
    sq=a*a;
    return sq;
}
double power(double a,double n)
{
    double x= pow(a,n);
    return x;
}
double absolute(double a)
{
    
    return fabs(a);
    
}
long long int factorial(int n)
{
    unsigned int fact=1;
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
double cos1(double x,int n)
{
    n=3;
    x=x*(pi/180);
    double res=1;
    double s=1,fact=1,pow=1;
    for(int i=1;i<5;i++)
    {
        s=s*(-1);
        fact=fact*(2*i-1)*(2*i);
        pow=pow*x*x;
        res=res+s*(pow/fact);
    }
    return res;
}
double sin1(double x)
{
    double res;
    res=1-square(cos1(x,3));
    res=sq_root(res);
    return res;
}
double tan1(double x)
{
    double res;
    res=sin1(x)/cos1(x,3);
    return res;
}
double cosec1(double x)
{
    double res;
    res=1/sin1(x);
    return res;
}
double sec1(double x)
{
    double res;
    res=1/cos1(x,3);
    return res;
}
double cot1(double x)
{
    double res;
    res=1/tan1(x);
    return res;
}
int gcd(int a,int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long int lcm(long long int a,long long int b)
{
    long long int max;
    int flag=1;
    max=(a>b)?a:b;
    while(flag)
    {
        if(max%a==0 && max%b==0)
        {
            return max;
        }
        ++max;
    }
    return 0;
}
double logarithm(double a)
{
    
    double x= log(a);
    return x;
    
}
double circle(double r)
{
    double area,peri;
    area=pi*r*r;
    peri= 2*pi*r;
    printf( "Area = %lf and Perimeter = %lf", area,peri);
    return 0;
}
double triangle(double l,double b)
{
    double area;
    area=(l*b)/2;
    return area;
}
double sq_root(double a)
{
    int x;
    x=sqrt(a);
    return x;
    
}
double cube_root(double a)
{
   
    int x=cbrt(a);
    return x;
    
}
