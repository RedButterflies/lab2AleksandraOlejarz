//
// Created by szyns on 17.10.2023.
//

#ifndef LAB2ALEKSANDRAOLEJARZ_SQUARE_H
#define LAB2ALEKSANDRAOLEJARZ_SQUARE_H

#ifndef UNTITLED_SQUARE_H
#define UNTITLED_SQUARE_H
#include "Figure.h"
class Square: public Figure
{
private:
    float a;
public:
    Square(float a1);
    ~Square();
    virtual void calculateArea() override;
    virtual void show() override;

};

#endif //UNTITLED_SQUARE_H

#endif //LAB2ALEKSANDRAOLEJARZ_SQUARE_H
