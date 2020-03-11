#include "header.h"

int gcdIterative(int a,int b){
 // RETURN AN LCM BY EUCLID'S ALGORITHM ITERATIVE VERSION
        int x = a;
        int y = b;
        int r ;
        if ((x != 0) && (y != 0)){
            while (y != 0){
                r = (x%y);
                x = y;
                y = r;
            }
        }else{
            cout<<"Error because a and b is 0"<<endl;
        }

        return x;
 }


 int lcm(int a,int b){
 // RETURN AN LCM BY IMPORTANT THEORIES LEFT IN THE SLIDE
    if (gcdIterative(a,b) == 0){
        return -1;
    }else{
        return ((a*b)/gcdIterative(a,b));
    }
}

void inputDataCP1(){
    int A,B;
    int N,C,K;
    string x;

    cout<<"Input A and B : "<<endl;
    cout<<"A : "; cin>>A;
    cout<<"B : "; cin>>B;

    N = gcdIterative(A,B);
    if (N != 0){
        C = A / N;
        K = B / N;
        cout<<"This is N,C,K : "<<endl;
        cout<<"N : "<< N<<endl;
        cout<<"C : "<< C<<endl;
        cout<<"K : "<< K<<endl;
    }else{
        cout<<"The program is error."<<endl;
    }

    cout<<endl<<" Type anything to continue...";
    cin>>x;

}

void inputDataCP2(){
    int A,B;
    int P;
    string x;

    cout<<"Input A and B : "<<endl;
    cout<<"A : "; cin>>A;
    cout<<"B : "; cin>>B;

    P = lcm(A,B);
    if (P != -1){
        cout<<"This is P : "<<endl;
        cout<<"P : "<< P<<endl;
    }else{
        cout<<"The program is error. "<<endl;
    }
    cout<<endl<<" Type anything to continue...";
    cin>>x;

}

void inputDataCP3(){
    int A,B;

    string x;
    cout<<"Input A and B : "<<endl;
    cout<<"A : "; cin>>A;
    cout<<"B : "; cin>>B;
    cout<<"Prime numbers between "<<A<<" and "<<B<<" are : ";
    if (A < B){
        PrimeBetween(A,B);
    }else if (A > B){
        PrimeBetween(B,A);
    }

    cout<<endl<<" Type anything to continue...";
    cin>>x;


}

 void menu(){
    char a;
    cout<<" Type anything to start the program :) ";
    cin>>a;
    system("cls");

    while (a != '0'){
        cout << "======= GCD AND LCM PROGRAM ========" << endl;
        cout << "    By : Fery Ardiansyah Effendi "<< endl;
        cout << "============== Options =============" << endl;
        cout << "1. Challenging Problem Number 1 (GCD)" << endl;
        cout << "2. Challenging Problem Number 2 (LCM)" << endl;
        cout << "3. Challenging Problem Number 3 (Prime)" << endl;
        cout << "0. Exit Program "<<endl;
        cout << "===================================="<<endl;
        cout << "Choose the option    : "; cin >> a;
        system("cls");
        switch(a){
            case '1' : inputDataCP1(); break;
            case '2' : inputDataCP2(); break;
            case '3' : inputDataCP3(); break;
            case '0': break;
        }
        system("cls");
    }
 }

bool IsPrime(int n) {
    bool prime = true;
    int i = 2;
    if (n == 1){
        prime = false;
    }
    while ((prime == true) && (i < n)){
        if (n % i == 0){
            prime = false;
        }else{
            i = i + 1;
        }
    }
        return prime;
}

void PrimeBetween(int A,int B){
    int x = A;
    int y = B;
    while (x<y){
        if (IsPrime(x)){
            cout<<x<<" - ";
        }
        x = x + 1;
    }
}
