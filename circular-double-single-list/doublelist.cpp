#include "doublelist.h"

void insertFirst(DoubleList &L, address_d P) {
    if(first(L)!=NULL && last(L)!=NULL) {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    } else {
        first(L) = P;
        last(L) = P;
    }
}

address_d findElement(DoubleList L, infotype x) {
    address_d P = NULL;
    P = first(L);
    while(P!=NULL && info(P)!=x) {
        P = next(P);
    }
    return P;
}

void insertAfter(DoubleList &L, address_d Prec, address_d P) {
    if(Prec!=NULL) {
        if(next(Prec)==NULL) {
            insertLast(L, P);
        } else {
            next(P) = next(Prec);
            prev(P) = Prec;
            prev(next(Prec)) = P;
            next(Prec) = P;
        }
    }
}

void insertLast(DoubleList &L, address_d P) {
    if(first(L)!=NULL && last(L)!=NULL) {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    } else {
        first(L) = P;
        last(L) = P;
    }
}
void deleteFirst(DoubleList &L, address_d &P) {
    if(first(L)!=NULL) {
        P = first(L);
        if(P==last(L)) {
            first(L)=NULL;
            last(L)=NULL;
        } else {
            first(L) = next(first(L));
            next(P) = NULL;
            prev(first(L)) = NULL;
        }
    }
}

void deleteLast(DoubleList &L, address_d &P) {
    if(first(L)!=NULL) {
        P = last(L);
        if(P==first(L)) {
            first(L)=NULL;
            last(L)=NULL;
        } else {
            last(L) = prev(last(L));
            prev(P) = NULL;
            next(last(L)) = NULL;
        }
    }
}

void deleteAfter(DoubleList &L, address_d Prec, address_d &P) {
    if(first(L)!=NULL) {
        if(Prec!=NULL&&Prec!=last(L)) {
            if(next(Prec)==last(L)) {
                deleteLast(L,P);
            } else {
                P = next(Prec);
                next(Prec) = next(P);
                prev(next(P)) = Prec;
                prev(P) = NULL;
                next(P) = NULL;
            }
        }
    }
}



void createList(DoubleList &L) {
    first(L) = NULL;
    last(L) = NULL;
}

address_d allocate_d(infotype x) {
    address_d P;
    P = new elmDoubleList;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void deallocate_d(address_d &P) {
    delete P;
    P = NULL;
}

void printInfo(DoubleList L) {
    if(first(L)!=NULL &&last(L)!=NULL) {
        address_d P = first(L);
        while(P!=last(L)) {
            cout<<info(P)<<", ";
            P = next(P);
        }
        cout<<info(P)<<", ";
    }
    cout<<endl;
}





