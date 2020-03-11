#include <iostream>
#include "header.h"

using namespace std;

address createNewElmt(int koef, int pangkat) {
    address P = new elmlist;
    info(P).koef = koef;
    info(P).pangkat = pangkat;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void emptyList(list &L) {
    first(L) = NULL;
}

void printInfo(list L) {
    address P = first(L);
    if(first(L)!=NULL) {
        do {
            cout<<info(P).koef<<", ";
            cout<<info(P).pangkat<<", ";
            P = next(P);
        } while((P)!=first(L));
    }
    cout<<endl;
}

void insertFirst(list &L, address P,int koef, int pangkat) {

    P = createNewElmt(koef,pangkat);

    if(first(L) == NULL) {
        first(L) = P;
        next(P) = P;
    } else {
        address Q = first(L);
        while (next(Q)!=first(L)){
            Q = next(Q);
        }
        next(Q) = P;
        next(P) = first(L);
        first(L) = P;
    }
}

address SearchPangkat(list L, int &pangkat) {
    address P = first(L);
    do {
        if(info(P).pangkat == pangkat)
            return P;
        P = next(P);
    } while(((P)!=first(L)) && (info(P).pangkat != pangkat));
     return NULL;
}

void createPersamaan(list &L) {
    int pangkat;
    int koef;
    first(L) = NULL;
    cin>>koef;
    cin>>pangkat;
    while (pangkat >=0) {
        P = SearchPangkat(L, pangkat);
        if (P != NULL) {
            info(P).koef = info(P).koef + koef;
        } else {
            cout<<"tai"<<endl;
            insertFirst(L, P,koef,pangkat);
        }
         cin>> koef;
        cin>> pangkat;
    }
}

void sortList(list L){
    infotype temp;
    address P = first(L);
    address Q = next(first(L));
    while (P != prev(first(L))) {
        int max = info(P).pangkat;
        while (Q != first(L)) {
            if (info(Q).pangkat >= max) {
                max = info(Q).pangkat;
            }
            Q = next(Q);
        }
        temp = info(P);
        info(P) = info(Q);
        info(Q) = temp;
        P = next(P);
    }
}


