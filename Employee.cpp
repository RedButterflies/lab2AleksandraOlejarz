//
// Created by szyns on 17.10.2023.
//
#include "Employee.h"

Employee::Employee(const string &surname1, int age1, int experience1, float salary1) {
    this->surname= surname1;
    this->age = age1;
    this->experience= experience1;
    this->salary = salary1;

}



Employee::Employee() {}

Employee::~Employee() {

}

const string &Employee::getSurname() {
    return surname;
}

int Employee::getAge() {
    return age;
}

int Employee::getExperience()  {
    return experience;
}

float Employee::getSalary()  {
    return salary;
}
void Employee :: show()
{
    cout<<"Nazwisko: "<<getSurname()<<endl;
    cout<<"Wiek: "<<getAge()<<endl;
    cout<<"Staz pracy w latach "<<getExperience()<<endl;
    cout<<"Miesieczna wyplata: "<<getSalary()<<endl;
    cout<<"Zatrudniony w wieku: "<<getEmployment()<<endl;

}
int Employee :: ageEmployment()
{
    int ageWhenEmployed = getAge() - getExperience();
    return ageWhenEmployed;
}

void Employee::whoWorkMoreThan5Years(Employee **tab, int size) {

    for( int i=0;i<size;i++)
    {
        if(tab[i]->getExperience()>5)
        {
            tab[i]->show();
        }
    }

}

void Employee::howManyEarnLessThanMeanBonus(Employee **tab, int size) {
    float meanBonus = 0;
    float sumBonus = 0;
    int howMany=0;
    for(int i=0;i<size;i++)
    {
        sumBonus +=tab[i]->getSalary();
    }
    meanBonus= sumBonus/(float)size;
    for(int i=0;i<size;i++)
    {
        if(tab[i]->getSalary()<meanBonus)
        {
            howMany++;
        }

    }

    cout<<"Premie nizsza niz srednia wszytskich premii, ktora wynosi "<< meanBonus<<"otrzymalo "<<howMany<<" pracownikow"<<endl;




}

int Employee::getEmployment() {
    return ageEmployment();
}


