#include "My_libs.h"
#include "Libas.h"
#include <cstdio>
#include "Timer.h"

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;

int main()
{
    vector<studentas> studentai;
    int k;
    char answ, g;
    string name;
    srand(time(NULL));
    
    /*cout << "Ar norite duomenis nuskaityti is failo? (Jei taip, iveskite 't', jei ne - bet koki simboli): ";
    cin >> answ;
    if (answ == 't') { 
        cout << "\n" << endl;
        
        try{ 
            nuskaitymas("studentai10000.txt"); 
        }
        

        catch (exception& e) {
            cout << "Failas neegzistuoja! Patikrinkite failo varda ir meginkite is naujo..." << endl;
            exit(EXIT_FAILURE);
        }
    
    }
    else {
        cout << "Iveskite studentu skaiciu: ";
        
        
        tikrinimas(k);
        for (int i = 0; i < k; i++) {
            studentas temp;
            pild(temp);
            studentai.push_back(temp);
        }
        sort(studentai.begin(), studentai.end(), mycompare);
        cout << "\n" << endl;
        cout << setw(20) << left << "Vardas" << setw(20) << left << "Pavarde" << setw(20) << left << "Galutinis(Vid.)/Galutinis(Med.)"<< endl;
        for (int i = 0; i < k; i++)
            printas(studentai[i]);
    }*/

    cout << "1. 1 000 studentu:" << "\n";
    Timer t1_sukurimas;
    create_file("stud1000.txt", 1000);
    cout << "Sukurti faila uztruko: " << t1_sukurimas.elapsed() << " s" << endl;

    system("pause");

}


    

    
