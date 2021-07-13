#ifndef __CALC_H__
#define __CALC_H__
#include<math.h>
int i,ta,nm,m,ha,hb;
long long int facto,la,lb;
double a1,a2,su1,su2,mu1,mu2,div1,div2,sqr,pwr,z1,xcos,xsin,xtan,xcosec,xsec,xcot,ab,len,bred,radi,sq_s,cube_s;

int m;
double add(double a,double b);
double sub(double a,double b);
double mul(double a,double b);
double divi(double a,double b);
double square(double a);
double power(double a,double n);
double absolute(double a);
long long int factorial(int n);
double cos1(double x,int n);
double sin1(double x);
double tan1(double x);
double cosec1(double x);
double sec1(double x);
double cot1(double x);
int gcd(int a, int b);
long long int lcm(long long int a,long long int b);
double logarithm(double a);
double triangle(double l, double b);
double circle(double r);
double sq_root(double a);
double cube_root(double a);

#endif
