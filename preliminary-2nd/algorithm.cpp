#include "tpreliminary.h"

int P;
List L;

void createList(List &L) {
    first(L) = NULL;
}

void deleteFirst(List &L, address &P) {
    if (first(L) !=NULL) {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void insertFirst(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}

address alokasi(int X) {
    address P = new elmlist;
    info(P) = X;
    return P;
}

void dealokasi(address &P) {
    delete P;
}

void printInfo(List L) {
    address last = first(L);
    while (last != NULL) {
        cout << info(last) << endl;
        last = next(last);
    }
}
