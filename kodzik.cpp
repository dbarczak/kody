#define _CRT_SECURE_NO_WARNINGS
#include <iostream>



#define ZadanieD 

#ifdef ZadanieD

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>
#include <iomanip>

using namespace std;

using tekst = char[50];
const char* const TYP[] = { "Klasyczna", "Popularna", "Niszowa"};
enum class Typ { klas, pop, nisz };
struct Album {
	tekst nazwa;
};

struct Utwor{
	tekst tytul;
	int czas;
	Album const* wykazanie;
	Typ typ_muzyczny;
	int ranking;
};

void wypelnij(Utwor &u, const char* tytul, int czas, Album &a, Typ typ, int ranking)
{
	strcpy(u.tytul, tytul);
	u.czas = czas;
	u.wykazanie = &a;
	u.typ_muzyczny = typ;
	u.ranking = ranking;
}


ostream& operator<<(ostream& str, Utwor const& u)
{
	str << "Tytu³ utworu: " << u.tytul << endl << "Czas trwania: " << u.czas
		<< endl << "Wykazanie: " << u.wykazanie->nazwa << endl << "Typ muzyczny: " << TYP[(int)u.typ_muzyczny]
		<< endl << "Miejsce w rankingu: " << u.ranking << endl;
	return str;
}

int przetworz(Utwor *u, Album& a, Typ typ)
{
	int dlugosc = 0;
	for (int i = 0; i < 10; i++)
	{
		if (u[i].wykazanie == &a && u[i].typ_muzyczny == typ)
		{
			dlugosc += u[i].czas;
		}
	}
	return dlugosc;
}

int main()
{
	Utwor u[10];
	Album al1 = {"Album 1"}, al2 = {"Album 2"};
	wypelnij(u[1], "Tytul", 201, al1, Typ::pop, 1);
	wypelnij(u[2], "Tytulek", 220, al2, Typ::klas, 2);
	wypelnij(u[3], "Tytttt", 161, al2, Typ::nisz, 1);
	wypelnij(u[4], "Tyt", 189, al1, Typ::pop, 2);
	wypelnij(u[5], "Tyt", 195, al1, Typ::klas, 3);
	cout << u[1]<<endl;
	cout << u[2]<<endl;
	cout << u[3]<<endl;
	cout << u[4]<<endl;
	cout << u[5] << endl;

	cout<<"Sumaryczny czas trwania: "<<przetworz(u, al1, Typ::pop);
}
#endif

#ifdef ZadanieD

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>
#include <iomanip>
#include "funkcje.h"

int main()
{

}


#endif