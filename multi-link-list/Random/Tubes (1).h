#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>
#include <conio.h>

using namespace std;

#define nil NULL
#define info(P) P->info
#define next(P) P->next
#define mid(P)  P->mid

typedef struct Journal      infotype;
typedef struct Author       infoAuthor;
typedef struct Institution  infoInstitution;
typedef struct Keyword      infoKeyword;


struct listJousrnal {
    address first;
};

struct Journal {
    string  title, institution;
    int     date;
};

struct elmlistJournal{
    infotype info;
    address mid;
    address next
};

struct listAuthor

struct Author {
    string name;
    address mid;
    address next;
};

struct Institution {
    string name;
    address mid;
    address next;
};

struct Keyword {
    string name;
    address mid;
    address next;
};


typedef struct keywordlist {
    string keyword;
    address mid;
    address next;
};





#endif // TUBES_H_INCLUDED
