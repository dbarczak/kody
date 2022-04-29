#include<iostream>
#include<ctime>
#include<cstdio>
#include"fun.h"

using namespace std;
const size_t rozmiar = 10;

int pozmin(int* tab, const size_t rozmiar, bool czy)
{
	
	int najmniejsza = 11;
	int pozycja = 0;
	if (czy == true)
	{
		for (int i = 0; i < rozmiar; i++)
		{
			if (tab[i] <= najmniejsza)
			{
				najmniejsza = tab[i];
				pozycja = i;
			}
		}
	}
	else
	{
		for (int i = rozmiar - 1; i >= 0; i--)
		{
			if (tab[i] <= najmniejsza)
			{
				najmniejsza = tab[i];
				pozycja = i;
			}
		}
	}
	return pozycja;
}

int pozmin(const size_t rozmiar, int* tab, bool czy)
{
	int najmniejsza = 11;
	int pozycja = 0;
	if (czy == true)
	{
		for (int i = 0; i < rozmiar; i++)
		{
			if (tab[i] < najmniejsza)
			{
				najmniejsza = tab[i];
				pozycja = i;
			}
		}
	}
	else
	{
		for (int i = rozmiar - 1; i >= 0; i--)
		{
			if (tab[i] < najmniejsza)
			{
				najmniejsza = tab[i];
				pozycja = i;
			}
		}
	}
	return pozycja;
}