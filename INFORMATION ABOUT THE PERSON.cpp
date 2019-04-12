/* structure INFORMATION ABOUT THE PERSON */
#include <iostream>

using namespace std;

/* This program created by Sujit Mandal */

struct person
{
    char name[20], f_name[20], m_name[20], sex[20], scl[20], h_sc[20], course_1[20], uni_1[20], course_2[20], uni_2[20], add_1[20], add_2[20], add_3[20],add_4[20];
    int age, date_1, date_2, date_3, date_4;
    long pin;


};
main()
{
    struct person p;
    cout << "INFORMATION ABOUT THE PERSON. " << endl ;
    cout << "ENTER NAME: ";
    cin >> p.name ;
    cout << "ENTER FATHER NAME: ";
    cin >> p.f_name ;
    cout << "ENTER MOTHER NAME: ";
    cin >> p.m_name;
    cout << "ENTER CITY/VILAGE NAME: ";
    cin >> p.add_1;
    cout << "ENTER DISTRIC NAME: ";
    cin >> p.add_2;
    cout << "ENTER STATE NAME: ";
    cin >> p.add_3 ;
    cout << "ENTER PIN CODE: ";
    cin >> p.pin ;
    cout << "ENTER NATONALITY: ";
    cin >> p.add_4 ;
    cout << "ENTER AGE: ";
    cin >> p.age ;
    cout << "ENTER GENDER: ";
    cin >> p.sex ;
    cout << "ENTER SECONDARY BOARD: ";
    cin >> p.scl ;
    cout << "ENTER PASSING YEAR: ";
    cin >> p.date_1 ;
    cout << "ENTER HIGH SECONDARY BOARD: ";
    cin >> p.h_sc ;
    cout << "ENTER PASING YEAR: ";
    cin >> p.date_2 ;
    cout << "ENTER BACHELOD DEGREE: ";
    cin >> p.course_1 ;
    cout << "ENTER PASSING YEAR: ";
    cin >> p.uni_1 ;
    cout << "ENTER MASTER GEGREE: ";
    cin >> p.course_2 ;
    cout << "ENTER PASSIG YEAR: " ;
    cin >> p.uni_2 ;

    cout << "NAME: " << p.name << endl ;
    cout << "FATHER NAME: " << p.f_name << endl ;
    cout << " MOTHER NAME: " << p.m_name << endl ;
    cout << "CITY/VILLAGE: " << p.add_1 << endl ;
    cout << "DISTRIC: " << p.add_2 << endl ;
    cout << "STATE: " << p.add_3 << endl ;
    cout << "PIN: " << p.pin << endl ;
    cout << "NATONALITY: " << p.add_4 << endl ;
    cout << "AGE: " << p.age << endl ;
    cout << " GENDER: " << p.sex << endl ;
    cout << "10th BOARD: " << p.scl << endl ;
    cout << "YEAR OF PASSING: " << p.date_1 << endl ;
    cout << "12th BOARD: " << p.h_sc << endl ;
    cout << "YEAR OF PASSING: " << p.date_2 << endl ;
    cout << "UG DEGREE NAME: " << p.course_1 << endl ;
    cout << "UNIVERSITY NAME: " << p.uni_1 << endl ;
    cout << "YEAR OF PASSING: " << p.date_3 << endl ;
    cout << "PG DEGREE NAME: " << p.course_2 << endl ;
    cout << "UNIVERSITY NAME: " << p.uni_2 << endl ;
    cout << "YEAR OF PASSING: " << p.date_4 << endl ;

}
