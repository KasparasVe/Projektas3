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
    cout << "NAUDOJANT VEKTORIUS:" << endl << endl;
    create_file("stud1000.txt", 1000);
    nuskaitymas_vec("stud1000.txt");
    Timer t;
    padalijimas1(grupe_vec);
    float t1 = t.elapsed();
    cout << "Padalijimas 1 budu uztruko: " << t1 << endl;

    protingi_vec.clear();
    nabagai_vec.clear();

    t.reset();
    padalijimas2(grupe_vec);
    float t2 = t.elapsed();
    cout << "Padalijimas 2 budu uztruko: " << t2 << endl;
    cout << "Santykis t1/t2: " << t1 / t2 << endl << endl;

    system("pause");

    //************************************************************************************


    cout << "NAUDOJANT LISTUS:" << endl << endl;
    create_file("stud1000.txt", 1000);
    nuskaitymas_lst("stud1000.txt");
    t.reset();
    padalijimas1(grupe_lst);
    t1 = t.elapsed();
    cout << "Padalijimas 1 budu uztruko: " << t1 << endl;

    protingi_lst.clear();
    nabagai_lst.clear();
    
    t.reset();
    padalijimas2(grupe_lst);
    t2 = t.elapsed();
    cout << "Padalijimas 2 budu uztruko: " << t2 << endl;
    cout << "Santykis t1/t2: " << t1 / t2 << endl;

    system("pause");

}


    
