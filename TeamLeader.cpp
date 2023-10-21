//
// Created by szyns on 17.10.2023.
//
#include "Employee.h"
#include "TeamLeader.h"
//
// Created by student on 16.10.2023.
//
void TeamLeader::show() {
    Employee::show();
    cout<<"Jestem TeamLeader z "<<getExperience()<<" letnim doswiadczeniem"<<endl;
}

float TeamLeader::calculateBonus(int value) {
    float bonus =value*(1+getSalary()+getExperience());
    return bonus;
}

TeamLeader::TeamLeader(const string &surname, int age, int experience, float salary) : Employee(surname, age,
                                                                                                experience, salary) {}

TeamLeader::TeamLeader() {}
