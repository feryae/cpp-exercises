#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

#define nil NULL
#define first(L) L.first
#define info(P)  P->info
#define next(P)  P->next
#define mid(P)   P->mid

typedef struct elmlistJournal   *adrJour;

struct infoJour {
    string  title;
    int     date;
};

struct elmlistJournal {
    infoJour info;
    adrJour  next;
    adrJour  mid;
};

struct listJour {
    adrJour first;
    adrJour newest;
    adrJour oldest;
};

typedef struct elmlistAuthor *adrAuth;

struct infoAuth {
    string  name;
};

struct elmlistAuthor {
    infoAuth    info;
    adrAuth     next;
    adrAuth     mid;
};

struct listAuth {
    adrAuth first;
};

typedef struct elmlistInstitiution *adrInst;

struct infoInst {
    string  name;
};

struct elmlistInstitiution {
    infoInst    info;
    adrInst     next;
    adrInst     mid;
};


struct listInst {
    adrInst first;
};

typedef struct elmlistKeyword *adrKey;

struct infoKey {
    string name;
};

struct elmlistKeyword {
    infoKey info;
    adrKey  next;
    adrKey  mid;
};

struct listKey {
    adrKey first;
};

typedef struct elmlistRelation *adrRel;

struct infoRel {
    adrAuth auth;
    adrInst inst;
    adrJour jour;
    adrKey  key;
};

struct elmlistRelation {
    infoRel info;
    adrRel  next;
};

struct listRel {
    adrRel first;
};

void createlistAuthor(listAuth &A);
void createlistInstitution(listInst &I);
void createlistJournal(listJour &J);
void createlistKeyword(listKey &K);
void createlistRelation(listRel &R);

adrAuth allocateAuthor(infoAuth name);
adrInst allocateInstitution(infoInst nameofinstitution);
adrJour allocateJournal(infoJour Journal);
adrKey allocateKeyword(infoKey keyword);
adrRel allocateRelation(adrAuth a, adrInst i, adrJour j, adrKey k);

void deallocateAuthor(adrAuth &p);
void deallocateInstitution(adrInst &p);
void deallocateJour(adrJour &p);
void deallocateKeyword(adrKey &p);
void deallocateRelation(adrRel &p);

void insertfirstAuthor(listAuth &L, adrAuth p);
void insertfirstInstitution(listInst &L, adrInst p);
void insertfirstJournal(listJour &L, adrJour p);
void insertfirstKeyword(listKey &L, adrKey p);
void insertfirstRelation(listRel &L, adrRel p);

adrAuth findelmAuthor(listAuth L, string x);
adrInst findelmInstitution(listInst L, string x);
adrJour findelmJournalName(listJour L, string x);
adrJour findelmJournalDate(listJour L, int x);
adrKey  findelmKeyword(listKey L, string x);
adrRel findelmRelationInst(listRel L, infoRel x);
adrRel findelmRelationAuth(listRel L, infoRel x);
adrRel findelmRelationJour(listRel L, infoRel x);
adrRel findelmRelationKey(listRel L, infoRel x);
adrRel findelmRelation(listRel L, infoRel x);

void printRel(listRel);
void inputRelation(listRel &Lr, listJour &Lj, listAuth &La, listInst &Li, listKey &Lk);
void newold (listJour L);
void searchJourbyKey(listJour Lj, listKey Lk, listRel Lr);
void searchAuthbyKey(listAuth La, listKey Lk, listRel Lr);
void searchInstbyKey(listInst Li, listKey Lk, listRel Lr);

void menu();



















/*
typedef struct Author           infoAuthor;
typedef struct elmlistAuthor    *adrAuthor
typedef struct Institution      infoInstitution;
typedef struct Keyword          infoKeyword;


struct listJournal {
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
*/




#endif // TUBES_H_INCLUDED
