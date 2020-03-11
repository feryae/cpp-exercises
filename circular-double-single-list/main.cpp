#include <iostream>
#include "singlelist.h"
#include "doublelist.h"
#include "circularlist.h"
#include "assessment1.h"

using namespace std;

int main() {
    CircularList LC;
    DoubleList LD;
    SingleList LS;

	address_s P;
    address_c R;
	
    createList(LS);
    createList(LC);
    insertLast(LS,allocate_s(3));
    insertLast(LS,allocate_s(5));
    insertLast(LS,allocate_s(0));
    insertLast(LS,allocate_s(8));
	
    cout<<endl;
    string name = "xx"; /** <-- Change this to your name*/
    string id = "xx";   /** <-- Change this to your student id (NIM)*/
    cout<<"Hello "<<name<<" ("<<id<<"), welcome to Lab Work Assessment CLO 1"<<endl<<
        "\t\tLinear Linked List"<<endl<<endl;

		
	cout<<"Executing ASSESSMENT number ONE"<<endl;
    cout<<"1a. Delete First Single List"<<endl;
    cout<<"initial list : ";printInfo(LS);
    deleteFirst(LS,P);
    cout<<"Info(P) : "<<info(P)<<endl;
    cout<<"Your list : ";printInfo(LS);
    deleteFirst(LS,P);
    cout<<"Info(P) : "<<info(P)<<endl;
    cout<<"Your list : ";printInfo(LS);
    deleteFirst(LS,P);
    cout<<"Info(P) : "<<info(P)<<endl;
    cout<<"Your list : ";printInfo(LS);
    deleteFirst(LS,P);
    cout<<"Info(P) : "<<info(P)<<endl;
    cout<<"Your list : ";printInfo(LS);
    cout<<endl;

    cout<<"1b. Insert Last Circular Single List"<<endl;
    cout<<"initial list : ";printInfo(LC);
    cout<<"Insert 3"<<endl;
    insertLast(LC,allocate_c(3));
    cout<<"Your List : ";printInfo(LC);
     cout<<"Insert 5"<<endl;
    insertLast(LC,allocate_c(5));
    cout<<"Your List : ";printInfo(LC);
     cout<<"Insert 0"<<endl;
    insertLast(LC,allocate_c(0));
    cout<<"Your List : ";printInfo(LC);
     cout<<"Insert 8"<<endl;
    insertLast(LC,allocate_c(8));
    cout<<"Your List : ";printInfo(LC);
    cout<<endl;
	
	
    cout<<endl;
    cout<<"Executing ASSESSMENT number TWO"<<endl;
    number_two();

    cout<<endl;
    cout<<"Executing ASSESSMENT number THREE"<<endl;
    number_three();

    return 0;
}
