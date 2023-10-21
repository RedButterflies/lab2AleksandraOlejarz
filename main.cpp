#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"
#include "Employee.h"
#include "Developer.h"
#include "TeamLeader.h"
#include "Bufor.h"
#include "MaxBufor.h"
#include "MeanBufor.h"


using namespace std;
int main()
{
    Figure* f1=new Square(4);
    Figure* f2=new Circle(2);
    Figure *f3;
    Square s1(4);
    f3=&s1;
    f3->calculateArea();
    f3->show();
    f1->calculateArea();
    f1->show();
    f2->calculateArea();
    f2->show();
    delete f1;
    delete f2;
    Figure* tab[3];
    tab[0]=new Square(4);
    tab[1]=new Square(2);
    tab[2]=new Circle(5);
    for(auto & i : tab)
    {
        i->calculateArea();
        delete i;
    }
    //Klasa Employee, Developer, TeamLeader
    Employee *e1 = new Developer("Szewczuk",24,5,6669.9);
    e1->show();
    cout<<"Metoda getSalary()"<<e1->getSalary()<<endl;
   cout<< "Bonus - "<<e1->calculateBonus(9)<<endl;
   cout<<"Doswiadczenie - "<<e1->getExperience()<<endl;
   cout<<"Wiek - "<<e1->getAge()<<endl;
   cout<<"Zatrudniony w wieku: "<<e1->getEmployment()<<" lat"<<endl;
   cout<<"Nazwisko - "<< e1->getSurname()<<endl;

    Employee *eT = new TeamLeader("Olejarz",21,3,96669.9);
    eT->show();
    cout<<"Metoda getSalary()"<<eT->getSalary()<<endl;
    cout<< "Bonus - "<<eT->calculateBonus(9)<<endl;
    cout<<"Doswiadczenie - "<<eT->getExperience()<<endl;
    cout<<"Wiek - "<<eT->getAge()<<endl;
    cout<<"Zatrudniony przez w wieku"<< eT->getSurname()<<endl;


    //sprawdzenie działania funkcji whoWorkMoreThan5Year & howManyEarnLessThanMeanBonus
    Employee **employeeTab;
    employeeTab = new Employee * [5];
    for(int i=0;i<3;i++)
    {
        employeeTab[i]=new Developer("Slowik",56,5,5678.5);


    }
    for(int i=3;i<5;i++)
    {
        employeeTab[i]=new TeamLeader("Stanczyk",96,47,12635.5);
    }
    Employee **scndemployeeTab;
    scndemployeeTab = new Employee * [5];
    for(int i=0;i<2;i++)
    {
        scndemployeeTab[i]=new Developer("Kaczor",56,9,5678.5);


    }
    for(int i=2;i<5;i++)
    {
        scndemployeeTab[i]=new TeamLeader("Polaj",86,55,12635.5);
    }


    Developer d1 = *new Developer("Dzwonkowski",45,23,5555.3);
    Developer::howManyEarnLessThanMeanBonus(employeeTab,5);
    Developer::whoWorkMoreThan5Years(scndemployeeTab,5);

    //klasa Bufor, MeanBufor, MaxBufor
     Bufor *b1 = new MaxBufor();
     Bufor *b2 = new MeanBufor();
     Bufor *b3 = new MaxBufor(6);
     Bufor *b4= new MeanBufor(4);

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Obiekt b1 klasy MaxBuffor"<<endl;

     for(int i=0;i<b1->getSize()-1;i++)
     {
         b1->setTab(i,(i+1)*8);
     }
    b1->add(123);
    b1->getIndex();
    b1->getFirst();
    b1->getTab(0);
    b1->SetFirst(6);
    b1->getSize();
    b1->add(156);
    b1->wystwietlZawTablicy();
    b1->calculate();

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Obiekt b2 klasy MeanBuffor"<<endl;
    for(int i=0;i<b2->getSize();i++)
    {
        b2->setTab(i,(i+1)*13);
    }
    cout<<"Pierwsze wolne miejsce w tablicy: "<<b2->getIndex()<<endl;
    cout<<"Pierwszy wolny index tablicy: "<<b2->getFirst()<<endl;
    b2->SetFirst(66);
    cout<<"Rozmiar tablicy: "<<b2->getSize()<<endl;
    b2->add(3);
    b2->wystwietlZawTablicy();
    b2->add(156);
    b2->calculate();
    cout<<"Pierwsze wolne miejsce w tablicy: "<<b2->getIndex()<<endl;
    cout<<"Pierwszy wolny index tablicy: "<<b2->getFirst()<<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Obiekt b3 klasy MaxBuffor"<<endl;
    for(int i=0;i<b3->getSize()-1;i++)
    {
        b3->setTab(i,99-i);

    }
    cout<<"Rozmiar tablicy:"<<b3->getSize()<<endl;
    b3->wystwietlZawTablicy();
    b3->calculate();
    b3->getFirst();
    b3->SetFirst(9);
    b3->getTab(0);
    b3->add(5);
    b3->wystwietlZawTablicy();
    b3->calculate();
    b3->add(7);

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Obiekt b4 klasy MeanBuffor"<<endl;
    cout<<"Pierwsze wolne miejsce w tablicy: "<<b4->getIndex()<<endl;
    cout<<"Pierwszy wolny index tablicy: "<<b4->getFirst()<<endl;
    b4->SetFirst(66);
    cout<<"Rozmiar tablicy: "<<b4->getSize()<<endl;

    for(int i=0;i<b4->getSize()-1;i++)
    {
        b4->setTab(i,99-i);

    }
    b4->wystwietlZawTablicy();
    b4->add(256);
    cout<<"Po dodaniu 256 na pierwsze wolne miejsce: "<<endl;
    b4->wystwietlZawTablicy();

    b4->calculate();
    cout<<"Pierwsze wolne miejsce w tablicy: "<<b4->getIndex()<<endl;
    cout<<"Pierwszy wolny index tablicy: "<<b4->getFirst()<<endl;


    for(int i=0;i<5;i++)
    {
        delete employeeTab[i];
    }
    delete [] employeeTab;

    for(int i=0;i<5;i++)
    {
        delete scndemployeeTab[i];
    }
    delete [] scndemployeeTab;




    return 0;
}
