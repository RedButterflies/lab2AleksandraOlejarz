//
// Created by szyns on 17.10.2023.
//

#ifndef LAB2ALEKSANDRAOLEJARZ_DEVELOPER_H
#define LAB2ALEKSANDRAOLEJARZ_DEVELOPER_H
#include "Employee.h"

class Developer: public Employee
{
public:
    float calculateBonus(int value) override;


    Developer(const string &surname, int age, int experience, float salary);

    Developer();


};
#endif //LAB2ALEKSANDRAOLEJARZ_DEVELOPER_H
