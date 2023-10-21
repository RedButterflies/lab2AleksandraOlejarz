//
// Created by szyns on 17.10.2023.
//

#ifndef LAB2ALEKSANDRAOLEJARZ_FIGURE_H
#define LAB2ALEKSANDRAOLEJARZ_FIGURE_H
class Figure
{
private:
    float area;

public:
    Figure();
    virtual ~Figure();
    float getArea();
    void setArea(float area1);
    virtual void calculateArea()=0;
    virtual void show();
};
#endif //LAB2ALEKSANDRAOLEJARZ_FIGURE_H
