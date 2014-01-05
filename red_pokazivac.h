struct osoba {
    int ai,bi,ci,di,ei;
    int datum;
    char ime[25],prezime[30],spol[1];
    osoba*sljedeci;
};

struct tred {
    osoba* front, *rear;
};

int AddOne(int n) {
    return((n+1)%10000);
}

int InitQ(tred*red) {
    osoba*glava=new osoba;
    glava->sljedeci=NULL;
    red->front=glava;
    red->rear=glava;
}

bool IsEmptyQ(tred*red) {
    if(red->rear==red->front)return 1;
    return 0;
}

void EnQueueQ(osoba*pacijent, tred*red) {
        Q->rear->sljedeci=new telement;
        Q->rear=Q->rear->sljedeci;
        Q->rear->sljedeci=NULL;
        Q->rear->pacijent=pacijent;
}

osoba*FrontQ(tred*red) {
    osoba*pacijent;
    pacijent=red->front->sljedeci;
    return pacijent;
}

void DeQueueQ(tred*red) {
    osoba*glava=new osoba;
    glava=red->front;
    red->front=glava->sljedeci;
    delete glava;
}
