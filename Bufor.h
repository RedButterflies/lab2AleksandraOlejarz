//
// Created by szyns on 17.10.2023.
//
#ifndef LAB2ALEKSANDRAOLEJARZ_BUFOR_H
#define LAB2ALEKSANDRAOLEJARZ_BUFOR_H

class Bufor
{

private:
    int * tab;
    int size;
    int pierwszyWolnyIndex;

public:
    Bufor();
    explicit Bufor(int size);

    virtual ~Bufor();
    virtual void add (int value);
    virtual double calculate()=0;
    int getIndex();
    int getSize();
    int getTab(int i);
    int getFirst();
    void SetFirst(int value);
    void setTab(int pos, int value);
    void wystwietlZawTablicy();






};


#endif //LAB2ALEKSANDRAOLEJARZ_BUFOR_H
