//
// Created by szyns on 17.10.2023.
//
#include "Developer.h"

float Developer::calculateBonus(int value) {
    float bonus = value + 0.2*value*(getSalary()+getExperience());
    return bonus;

}

Developer::Developer(const string &surname1, int age1, int experience1, float salary1) : Employee(surname1, age1, experience1,salary1){



};

Developer::Developer() = default;
