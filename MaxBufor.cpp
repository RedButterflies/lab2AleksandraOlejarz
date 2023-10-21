//
// Created by szyns on 17.10.2023.
//
#include "MaxBufor.h"
#include <iostream>

using namespace std;

double MaxBufor::calculate() {
    double max = getTab(0);
    for(int i=0;i<getSize();i++)
    {
        if((double)getTab(i)>max)
        {
            max=(double)getTab(i);

        }
    }
    cout<<"Maksymalna liczba w tablicy to: "<<max<<endl;

    return max;

}

void MaxBufor::add(int value) {
    if(getFirst()<getSize())
    Bufor::add(value);
    else
        cout<<"Tablica jest juz zapelniona"<<endl;
}

MaxBufor::MaxBufor() {}

MaxBufor::MaxBufor(int size) : Bufor(size) {}

