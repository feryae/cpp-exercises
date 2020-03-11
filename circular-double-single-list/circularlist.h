#ifndef CIRCULARLIST_H_INCLUDED
#define CIRCULARLIST_H_INCLUDED

#include <iostream>
#include "infotype.h"
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info


using namespace std;



typedef struct elmCircularList *address_c;

struct elmCircularList {
    infotype info;
    address_c next;
};

struct CircularList {
    address_c first;
};


/** GIVEN **/
void createList(CircularList &);
address_c allocate_c(infotype);
void deallocate_c(address_c &);

void printInfo(CircularList);
address_c findElm(CircularList L, infotype x);

void insertFirst(CircularList &L, address_c P);
void insertLast(CircularList &L, address_c P);
void insertAfter(CircularList &L, address_c Prec, address_c P);
void deleteFirst(CircularList &L, address_c &P);
void deleteLast(CircularList &L, address_c &P);
void deleteAfter(CircularList &L, address_c Prec, address_c &P);

#endif // CIRCULARLIST_H_INCLUDED
