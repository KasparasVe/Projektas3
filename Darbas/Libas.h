#pragma once

#include "My_Libs.h"
#include "Studentas.h"

using std::string;
using std::vector;
using std::list;
/// Struktūra studentas.

struct studentas {
    string vardas, pavarde;
    vector<float> nd;
    int egzam;
    float galutinisVid;
    float galutinisMed;
    char skaiciavimas;

};

extern vector<studentas> grupe_vec;
extern vector<studentas> nabagai_vec;
extern vector<studentas> protingi_vec;
extern vector<Studentas> grupe_vec_;
extern vector <Studentas> nabagai_vec_;

extern list<studentas> grupe_lst;
extern list<studentas> nabagai_lst;
extern list<studentas> protingi_lst;

void pild(studentas& kint);
void printas(studentas& kin);
/// Medianos skaiciavimo funkcija.
/// 
/// Funkcija apskaičiuoja skaičių vektoriaus medianą.

float mediana(vector<float> vec);
bool mycompare(studentas a, studentas b);
void printfile(studentas& stud);
/// Tikrinimo funkcija, tikrinanti, ar vartotojas įvedė reikiamą duomenį.
void tikrinimas(int &a);
/// Nuskaitymo funkcija struktūrai.
/// 
/// Funkcija nuskaito struktūros studentas tipo objektus ir sudeda juos į vektorių.

void  nuskaitymas_vec(string read);
void nuskaitymas_lst(string read);
/// Failo generavimo funkcija.
/// 
/// Funkcija sukuria norimo dydžio .txt failą su studentų duomenimis.

void create_file(string name, float sk);
void padalijimas1(vector<studentas>& vec);
void padalijimas1(list<studentas>& lst);
void isvedimas(vector<studentas>& vec, string pav);
void isvedimas(list<studentas>& lst, string pav);

void padalijimas2(vector<studentas>& vec);
void padalijimas2(list<studentas>& lst);
void padalijimas3(vector<studentas>& vec);

bool func(studentas st);
bool pred(studentas st);
/// Testavimo funkcija.
/// 
/// Iškvietus funkciją, atliekamas testas, kurio metu tiriamas programos spartos priklausymas nuo strutūros arba klasės naudojimo.

void testas(string name);
/// Užpildymo funkcija.
/// 
/// Iškvietus funkciją, vartotojas gali arba pats įrašyti studentų duomenis, arba nuskaityti norimą failą.
void uzpildymas();

