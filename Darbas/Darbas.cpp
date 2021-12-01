#include "My_libs.h"
#include "Libas.h"
#include <cstdio>
#include "Timer.h"
#include "Studentas.h";


using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;



int main()
{
    
    char ats;
    cout << "Ar norite atlikti testa STRUKTURAvsKLASE? Irasykite t, jei taip, n, jei ne: ";
    cin >> ats;
    if (ats == 't') { testas(); }
    else { uzpildymas(); }

    system("pause");


    //cout << p1.galutinisVid() << "  " << p1.galBalas('v') << "  " << p1.galBalas('m');
    

    //cout << setw(20) << left << p.vardas() << setw(20) << left << p.pavarde() << setw(20) << left << std::setprecision(3) << p.galutinisVid() << endl;
    
    

    
    /*for (auto p : students) {
        cout << setw(20) << left << p.vardas() << setw(20) << left << p.pavarde() << setw(20) << left << std::setprecision(3) << p.galutinisVid() << endl;
    }*/
   
}


    
