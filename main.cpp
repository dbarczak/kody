#include<iostream>
#include<ctime>
#include<cstdio>
#include"fun.h"

using namespace std;
const size_t rozmiar = 10;


int main()
{
	srand(time(NULL));
	int tab[rozmiar];
	for (int i = 0; i < rozmiar; i++)
		tab[i] = rand() % 10;
	for (int i = 0; i < rozmiar; i++)
		cout << tab[i] << endl;
	bool czy_koniec;
	cout << "Jesli od poczatku to daj 1, jesli od konca to daj 0"<<endl;
	cin >> czy_koniec;
	int* wsk = tab;
	cout << "Pozycja ostatniej znalezione najmniejszej wartosci to:" << pozmin(wsk, rozmiar, czy_koniec)<<endl;
	cout << "Pozycja pierwszej znalezionej najmniejszej wartosci to:" << pozmin(rozmiar, wsk, czy_koniec) << endl;
}