/**
 * @file calc.h
 * @author 
 * @brief 
 * @version 0.1
 * @date 2021-007-07
 * 
 * @copyright Copyright (c) 2021
 *
 */
#ifndef __CALC_H__
#define __CALC_H__

int i,ta,nm,m;
float p,q;
double a,b,c,d,e,f,g,h,k,l,o,s,xt,xn,xs,ab,le,br,ra,lh,bh,an,rd,po,re,xcs,xsec,xcot,cube_s;

int m;
double add(double a,double b);
double sub(double a,double b);
double mul(double a,double b);
double divi(double a,double b);
double square(double a);
double power(double a,int n);
int absolute(float a);
int factorial(int n);
double cos1(double x,int n);
double sin1(double x);
double tan1(double x);
/*double cosec1(double x);
double sec1(double x);
double cot1(double x);*/
double hcf(int a, int b);
double lcm(int a,int b);
double logarithm(double a);
double triangle(double l, double b);
double circle(double r);
double sq_root(double a);
double cube_root(double a);

#endif