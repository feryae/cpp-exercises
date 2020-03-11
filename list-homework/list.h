#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)

typedef struct elmlist *address;

struct persamaan{
    int koef;
    int pangkat;
};

typedef persamaan infotype;

struct elmlist {
    infotype info;
    address next;
    address prev;
};

struct list {
    address first;
};

list L;
address P;

void emptyList(list &L);
void printInfo(list L);
void insertFirst(list &L, address P);
#endif // LIST_H_INCLUDED
