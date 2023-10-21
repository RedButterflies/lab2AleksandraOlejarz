//
// Created by szyns on 17.10.2023.
//
#include "MeanBufor.h"
#include <iostream>

using namespace std;

double MeanBufor::calculate() {
    double mean;
    double sum =0;
    for (int i =0;i<getSize();i++)
    {
        sum+= getTab(i);
    }
    mean = sum/(double)getSize();
    cout<<"Srednia arytmetyczna liczb w tablicy wynosi: "<<mean<<endl;
    return mean;
}

MeanBufor::MeanBufor() {}

MeanBufor::MeanBufor(int size) : Bufor(size) {
    
}
