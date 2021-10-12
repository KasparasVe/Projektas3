#pragma once
#include "My_Libs.h"

using std::string;
using std::vector;

struct studentas {
    string vardas, pavarde;
    vector<float> nd;
    int egzam;
    float galutinisVid;
    float galutinisMed;
    char skaiciavimas;

};

void pild(studentas& kint);
void printas(studentas& kin);
float mediana(vector<float> vec);
void nuskaitymas(string read);
void uzpildymas(studentas& k, string eilute);
bool mycompare(studentas a, studentas b);
void printfile(studentas& stud);
void tikrinimas(int &a);
