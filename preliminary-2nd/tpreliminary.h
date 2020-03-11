#include <iostream>
#ifndef TP2_H_INCLUDED
#define TP2_H_INCLUDED

#define info(P) (P)->info
#define next(P) (P)->next
#define info(last) (last)->info
#define next(last) (last)->next
#define first(L) ((L).first)

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List{
    address first;
};

void createList(List &L);
void deleteFirst(List &L, address &P);
void insertFirst(List &L, address P);
address alokasi(int X);
void dealokasi(address &P);
void printInfo(List L);

#endif // TP2_H_INCLUDED
