//
// Created by szyns on 17.10.2023.
//

#ifndef LAB2ALEKSANDRAOLEJARZ_MAXBUFOR_H
#define LAB2ALEKSANDRAOLEJARZ_MAXBUFOR_H

#include "Bufor.h"
class MaxBufor: public Bufor
{

public:
    MaxBufor();

    explicit MaxBufor(int size);

    double calculate() override;

    void add(int value) override;
};

#endif //LAB2ALEKSANDRAOLEJARZ_MAXBUFOR_H
