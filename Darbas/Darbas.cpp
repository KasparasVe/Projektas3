#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
using std::left;
using std::setprecision;

struct studentas {
    string vardas, pavarde;
    float nd[10]{};
    float egzam;
    float galutinisVid;
    
};

void pild(studentas& kint);
void printas(studentas& kin);

int main()
{
    studentas studentai[10];
    int k;
    cout << "Kiek studentu bus?";
    cin >> k;
    for (int i = 0; i < k; i++)
        pild(studentai[i]);
    cout << setw(20) << left << "Vardas" << setw(20) << left << "Pavarde" << setw(20) << left << "GalutinisVid" << endl;
    for (int i = 0; i < k; i++)
        printas(studentai[i]);
}

void pild(studentas& kint) {

    int n;
    cout << "Iveskite studento varda ir pavarde: ";
    cin >> kint.vardas >> kint.pavarde;
    cout << "Kiek nd bus?"; cin >> n;
    cout << "Iveskite pazymius: " << endl;
    float sum = 0, vid = 0;
    for (int i = 0; i < n; i++) {
        cin >> kint.nd[i];
        sum += kint.nd[i];
    }
    vid = sum / n;
    cout << "Iveskite egzamino bala: "; cin >> kint.egzam;
    kint.galutinisVid = vid * 0.4 + 0.6 * kint.egzam;


}
void printas(studentas &kin) {
    
    cout << setw(20) << left << kin.vardas << setw(20) << left << kin.pavarde << setw(20) << left << setprecision(3) << kin.galutinisVid << endl;
}
