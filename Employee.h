//
// Created by szyns on 17.10.2023.
//

#ifndef LAB2ALEKSANDRAOLEJARZ_EMPLOYEE_H
#define LAB2ALEKSANDRAOLEJARZ_EMPLOYEE_H
#include <iostream>
using namespace std;
class Employee
{
private:
    string surname;
    int age;
    int experience;
    float salary;


public:
    Employee(const string &surname, int age, int experience, float salary);

    Employee();

    virtual ~Employee();

    virtual void show();

    virtual  float calculateBonus(int value) = 0;

    int getEmployment();

    const string &getSurname();

    int getAge();

    int getExperience();

    float getSalary() ;

    int ageEmployment();

    static void whoWorkMoreThan5Years(Employee** tab, int size);
    static void howManyEarnLessThanMeanBonus(Employee** tab, int size);



};

#endif //LAB2ALEKSANDRAOLEJARZ_EMPLOYEE_H
