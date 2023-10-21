//
// Created by szyns on 17.10.2023.
//

#ifndef LAB2ALEKSANDRAOLEJARZ_MEANBUFOR_H
#define LAB2ALEKSANDRAOLEJARZ_MEANBUFOR_H

#include "Bufor.h"
class MeanBufor: public Bufor
{
public:
    MeanBufor();

    explicit MeanBufor(int size);

    double calculate() override;
};

#endif //LAB2ALEKSANDRAOLEJARZ_MEANBUFOR_H
