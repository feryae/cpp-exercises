#ifndef DOUBLELIST_H_INCLUDED
#define DOUBLELIST_H_INCLUDED

#include <iostream>
#include "infotype.h"
#define first(L) L.first
#define next(P) P->next
#define last(L) L.last
#define prev(P) P->prev
#define info(P) P->info


using namespace std;



typedef struct elmDoubleList *address_d;

struct elmDoubleList {
    infotype info;
    address_d next;
    address_d prev;
};

struct DoubleList {
    address_d first;
    address_d last;
};


/** GIVEN **/
void createList(DoubleList &);
address_d allocate_d(infotype);
void deallocate_d(address_d &);
void printInfo(DoubleList);
void insertLast(DoubleList &L, address_d P);

/** TODO PRACTICE **/
void insertFirst(DoubleList &L, address_d P);
address_d findElement(DoubleList L, infotype x);
void insertAfter(DoubleList &L, address_d Prec, address_d P);
void deleteLast(DoubleList &L, address_d &P);
void deleteAfter(DoubleList &L, address_d Prec, address_d &P);

/** NOT GIVEN **/
void deleteFirst(DoubleList &L, address_d &P);


#endif // DOUBLELIST_H_INCLUDED
