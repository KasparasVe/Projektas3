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
  
    
   
}


    
