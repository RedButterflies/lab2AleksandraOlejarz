//
// Created by szyns on 17.10.2023.
//

#ifndef LAB2ALEKSANDRAOLEJARZ_CIRCLE_H
#define LAB2ALEKSANDRAOLEJARZ_CIRCLE_H
#include "Figure.h"
class Circle: public Figure
{
private:
    float r;
public:
    Circle(float r1);
    ~Circle();
    virtual void calculateArea() override;
};
#endif //LAB2ALEKSANDRAOLEJARZ_CIRCLE_H
