#include <iostream>
#include "list.h"

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
    address P;
    P = first(L);
    while (next(P) != first(L)) {
        cout<<info(P).koef;
        cout<<info(P).pangkat<<", ";
        P = next(P);
    }
    cout<<info(P).koef;
    cout<<info(P).pangkat;
}

void insertFirst(list &L, address P) {
    if (first(L) == NULL) {
        next(P) = P;
        prev(P) = P;
        first(L) = P;
    } else {
        next(P) = first(L);
        prev(P) = prev(first(L));
        prev(first(L)) = P;
        next(prev(first(L))) = P;
        first(L) = P;
    }
}

address SearchPangkat(list L, int &pangkat) {
    address P = first(L);
    while ((next(P) != first(L)) && (info(P).pangkat != pangkat)){
        P = next(P);
    }
    if (info(P).pangkat = pangkat) {
        return P;
    } else {
        return NULL;
    }
}

void createPersamaan(int &koef, int &pangkat, list L) {
    cin>>koef;
    cin>>pangkat;
    while (pangkat >= 0) {
        P = SearchPangkat(L, pangkat);
        if (P != NULL) {
            info(P).koef = info(P).koef + koef;
        } else {
            insertFirst(L, P);
        }
        cin>>koef;
        cin>>pangkat;
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

void perkalian(list &L1, list &L2, list L3) {
    address P = first(L1);
    address Q = first(L2);
    while (next(P) != first(L1)) {
        int koef = info(P).koef * info(Q).koef;
        int pangkat = info(P).pangkat * info(Q).pangkat;
        createNewElmt(koef, pangkat);
        insertFirst(L3,P);
        while (next(Q) != first(L2)) {
            Q = next(Q);
            koef = info(P).koef * info(Q).koef;
            pangkat = info(P).pangkat * info(Q).pangkat;
            createNewElmt(koef, pangkat);
            insertFirst(L3,P);
        }
        Q = next(Q);
        P = next(P);
    }
    int koef = info(P).koef * info(Q).koef;
    int pangkat = info(P).pangkat * info(Q).pangkat;
    createNewElmt(koef, pangkat);
    insertFirst(L3,P);
    while (next(Q) != first(L2)) {
        Q = next(Q);
        koef = info(P).koef * info(Q).koef;
        pangkat = info(P).pangkat * info(Q).pangkat;
        createNewElmt(koef, pangkat);
        insertFirst(L3,P);
    }
}

