#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <cstdlib>
#include "conio.h"
#include <iostream>

using namespace std;

int gcdIterative(int a,int b);
int gcdRecursive (int a,int b);
int lcm(int a,int b);
void PrimeBetween(int A,int B);
bool IsPrime(int n);

void inputDataCP1();
void inputDataCP2();
void menu();


#endif // HEADER_H_INCLUDED
