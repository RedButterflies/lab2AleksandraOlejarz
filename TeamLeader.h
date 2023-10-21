//
// Created by szyns on 17.10.2023.
//
#ifndef LAB2ALEKSANDRAOLEJARZ_TEAMLEADER_H
#define LAB2ALEKSANDRAOLEJARZ_TEAMLEADER_H

#include "Employee.h"

class TeamLeader: public Employee
{
public:
    float calculateBonus(int value) override;

    void show() override;

    TeamLeader(const string &surname, int age, int experience, float salary);

    TeamLeader();
};
#endif //LAB2ALEKSANDRAOLEJARZ_TEAMLEADER_H
