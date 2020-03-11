#include "circularlist.h"

void createList(CircularList &L) {
    first(L) = NULL;
}

address_c allocate_c(infotype x) {
    address_c P;
    P = new elmCircularList;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void deallocate_c(address_c &P) {
    delete P;
    P = NULL;
}


void printInfo(CircularList L) {
    address_c P = first(L);
    if(first(L)!=NULL) {
        do {
            cout<<info(P)<<", ";
            P = next(P);
        } while((P)!=first(L));
    }
    cout<<endl;
}

address_c findElm(CircularList L, infotype x) {
    address_c P = first(L);
    do {
        if(info(P)==x)
            return P;
        P = next(P);
    } while((P)!=first(L));
    return NULL;
}


void insertFirst(CircularList &L, address_c P) {
    if(first(L) == NULL) {
        first(L) = P;
        next(P) = P;
    } else {
        address_c Q = first(L);
        while (next(Q)!=first(L)){
            Q = next(Q);
        }
        next(Q) = P;
        next(P) = first(L);
        first(L) = P;
    }
}


void insertAfter(CircularList &L, address_c Prec, address_c P) {
    if(Prec!=NULL) {
        if(next(Prec)==first(L)) {
            insertLast(L, P);
        } else {
            next(P) = next(Prec);
            next(Prec) = P;
        }
    }
}

void insertLast(CircularList &L, address_c P) {
/*----Your code here----*/



/*--------*/
}

void deleteFirst(CircularList &L, address_c &P) {
    if(first(L)!=NULL) {
        P = first(L);
        if(next(P)==first(L)) {
            next(P) = NULL;
            first(L) = NULL;
        } else {
            address_c Q = first(L);
            while (next(Q)!=first(L)) {
                Q = next(Q);
            }
            first(L) = next(P);
            next(Q) = next(P);
            next(P) = NULL;
        }
    }
}

void deleteLast(CircularList &L, address_c &P) {
    if(first(L)!=NULL) {
        P = first(L);
        if(next(P)==first(L)) {
            next(P) = NULL;
            first(L) = NULL;
        } else {
            address_c Q = first(L);
            while (next(next(Q))!=first(L)) {
                Q = next(Q);
            }
            P = next(Q);
            next(Q) = next(P);
            next(P) = NULL;
        }
    }
}

void deleteAfter(CircularList &L, address_c Prec, address_c &P) {
    if(next(Prec)==first(L)) {
        deleteFirst(L, P);
    } else {
        P = next(Prec);
        next(Prec)= next(P);
        next(P)=NULL;
    }
}

