#pragma once

#include <iostream>;
#include <string>;
#include <vector>;

using std::string;
using std::vector;
using std::istream;
using std::cout;
using std::cin;
using std::endl;
/// Klasė Zmogus.
/// 
/// Ši klasė yra abstrakti bazinė klasė, turinti išvestinę klasę Studentas.
class Zmogus{
protected:
	string vardas_;
	string pavarde_;
public:
	Zmogus() {
		vardas_ = "";
		pavarde_ = "";
	}
	
	virtual string vardas() = 0;
	virtual string pavarde() = 0;
	~Zmogus() {};
};


/// Klasė Studentas
/// 
/// Tai išvestinė klasė iš klasės Zmogus. Šia klase kuriamas objektas Studentas, turintis vardą, pavardę,
/// egzamino balą, galutinį balą, namų darbų vektorių. Šioje klasėje aprašytos funkcijos, dirbančios su tokio tipo objektais.
class Studentas : public Zmogus{
private:
	int egzaminas_;
	float galutinisVid_;
	vector<float> nd_;

public:
	/// Default konstruktorius
	Studentas() {
		egzaminas_ = 0;
		galutinisVid_ = 0;
		nd_.clear();
	}
	/// Konstruktorius, priskiriantis objektui vardą, pavardę, galutinį balą.

	Studentas(string, string, float);
	/// Copy konstruktorius.
	
	Studentas(const Studentas& st);
	/// Priskyrimo operatorius.

	Studentas& operator=(const Studentas& st);
	/// Getter funkcija, grąžinanti vardą.
	inline string vardas() { return vardas_; }
	/// Getter funkcija, grąžinanti pavardę.
	inline string pavarde() { return pavarde_; }
	/// Getter funkcija, grąžinanti egzamino balą.
	inline int egzaminas() const { return egzaminas_; }
	/// Getter funkcija, grąžinanti namų darbų vektorių.
	inline vector<float> nd() const { return nd_; }
	/// Getter funkcija, grąžinanti galutinį balą.
	inline float galutinisVid() const { return galutinisVid_; }
	
	/// Setter funkcija, leidžianti nustatyti vardą.
	void setVardas(string);
	/// Setter funkcija, leidžianti nustatyti pavardę.
	void setPavarde(string);
	/// Setter funkcija, leidžianti nustatyti egzamino balą.
	void setEgzaminas(int);
	/// Setter funkcija, leidžianti nustatyti namų darbų vektorių.
	void setND(vector<float>);
	/// Setter funkcija, leidžianti nustatyti galutinį balą.
	void setGalutinisVid(float);
	/// Destruktorius.
	~Studentas() {
		nd_.clear();
	}
	/// Užpildymo funkcija.
	/// 
	/// Ši funkcija leidžia vartotojui užpildyti klasės objektą duomenimis.
	void pild();
	/// Vidurkio funkcija.
	/// 
	/// Ši funkcija apskaičiuoja namų darbų vidurkį.
	float vidurkis();
	/// Galutinio balo funkcija.
	/// 
	/// Ši funkcija apskaičiuoja studento galutinį balą pagal vidurkį arba medianą.
	float galBalas(const char);
	/// Nuskaitymo funkcija.
	/// 
	/// Ši funkcija nuskaito duomenis iš failo ir sukuria Studentas tipo objektų vektorių.
	static void nuskaitymas_vec_(string read);
	/// Studentų padalijimo funkcija.
	/// 
	/// Ši funkcija padalija studentus i 2 grupes: turinčius galutinį balą mažesnį už 5 ir likusius.
	static void padalijimas3_(vector<Studentas>& vec);
	static bool pred_(const Studentas &st);
	/// Išvedimo į failą funkcija.
	/// 
	/// Ši funkcija gautą vektorių išveda į tekstinį failą.
	static void isvedimas_(vector<Studentas>& vec, string pav);
	/// Išvedimo operatorius.
	/// 
	/// Perdengtas operatorius, leidžiantis išvesti klasės objektą. Išvedamas vardas, pavardė, galutinis balas.
	friend std::ostream& operator<<(std::ostream& out, const Studentas& a);
	/// Sulyginimo operatorius.
	///
	/// Perdengtas operatorius, leidžiantis sulyginti du studentus, jeigu jų vardas ir pavardė sutampa.
	friend bool operator==(const Studentas& a,const Studentas &b);
};

