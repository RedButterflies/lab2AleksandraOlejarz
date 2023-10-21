//
// Created by szyns on 17.10.2023.
//
#include "Bufor.h"
#include <iostream>

using namespace std;

Bufor::Bufor() {
    size = 10;
    tab = new int [size];
    pierwszyWolnyIndex = 0;
    for(int i=0;i<size;i++)
    {
        tab[i]=0;
    }
}

Bufor::Bufor(int size) : size(size) {
    tab = new int [size];
    tab[pierwszyWolnyIndex]=0;
    for(int i=0;i<size;i++)
    {
        tab[i]=0;
    }

}

Bufor::~Bufor() {
    delete [] tab;

}

void Bufor::add(int value) {
        if(getSize()>pierwszyWolnyIndex) {
            tab[pierwszyWolnyIndex] = value;
            pierwszyWolnyIndex++;
        }
        else if(getSize()==pierwszyWolnyIndex)
        {
            cout<<"W tablicy nie ma wolnego miejsca"<<endl;
        }


}

int Bufor::getIndex() {
    return pierwszyWolnyIndex;

}

int Bufor::getSize() {
    return size;
}

int Bufor::getTab(int i) {
    return tab[i];
}

int Bufor::getFirst() {
    return pierwszyWolnyIndex;
}

void Bufor::SetFirst(int value) {
tab[pierwszyWolnyIndex] = value;
}

void Bufor::setTab(int pos, int value) {
 tab[pos]=value;
 pierwszyWolnyIndex++;
}

void Bufor::wystwietlZawTablicy() {
    for(int i=0;i<size;i++)
    {
        cout<<"Element "<<i+1<<". tablicy: "<<tab[i]<<endl;
    }

}


