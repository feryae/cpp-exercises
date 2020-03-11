#ifndef SINGLELIST_H_INCLUDED
#define SINGLELIST_H_INCLUDED


#include <iostream>
#include "infotype.h"
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;


typedef struct elmSingleList *address_s;

struct elmSingleList {
    infotype info;
    address_s next;
};

struct SingleList {
    address_s first;
};


address_s allocate_s(infotype x);
void deallocate_s(address_s &P);
void createList(SingleList &L);
void printInfo(SingleList L);

address_s findElm(SingleList L, infotype x);
void insertFirst(SingleList &L, address_s P);
void insertLast(SingleList &L, address_s P);
void insertAfter(SingleList &L, address_s Prec, address_s P);
void deleteFirst(SingleList &L, address_s &P);
void deleteLast(SingleList &L, address_s &P);
void deleteAfter(SingleList &L, address_s Prec, address_s &P);


#endif // SINGLELIST_H_INCLUDED
