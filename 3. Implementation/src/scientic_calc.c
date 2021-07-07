#include<stdio.h>
#include<math.h>
#include<stdlib.h>
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
        printf("undefined, cannot divide with number 0");
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
}
double power(double a,int n)
{
    double ans;
    ans=pow(a,n);
    return ans;
}
int absolute(float a)
{
    int ans=0;
    ans=abs(a);
    return ans;
}
int factorial(int n)
{
    unsigned int fact=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            fact=fact*i;
        }
    }
    return fact;
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
    res=1-square(cos(x,3));
    res=sq_root(res);
    return res;
}
double tan1(double x)
{
    double res;
    res=sin(x)/cos(x,3);
    return res;
}
double cosec1(double x)
{
    double res;
    res=1/sin(x);
    return res;
}
double sec1(double x)
{
    double res;
    res=1/cos(x,3);
    return res;
}
double cot1(double x)
{
    double res;
    res=1/tan(x);
    return res;
}
double hcf(int a,int b)
{
    int t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    double ans=a;
    return ans;
}
double lcm(int a,int b)
{
    int t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    int n=a;
    double ans;
    ans=(a*b)/n;
    return ans;
}
double logarithm(double a)
{
    double res;
    res=log(a);
    return res;
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
    area=1/2*(b*l);
    return area;
}
double sq_root(double a)
{
    double sqt;
    sqt=sqrt(a);
    return sqt;
}
double cube_root(double a)
{
    double cube;
    cube=pow(a,1.0/3.0);
    return cube;
}