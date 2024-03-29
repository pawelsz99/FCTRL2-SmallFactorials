// FCTRL2 - Small factorials.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>

using namespace std;


int fac(int i, int T[], int tsize)
{
	int c = 0;

	for (int j = 0; j < tsize; j++)
	{
		int p = T[j] * i + c;
		T[j] = p % 10;
		c = p / 10;

	}
	while (c)
	{
		T[tsize] = c % 10;
		c /= 10;
		tsize++;
		
	}

	return tsize;
}




int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, T[160];
		cin >> n;
		
		if(n==1)
			cout << 1 << endl;
		else
		{
			T[0] = 2;
			int  tsize = 1;
			for (int i = 3; i <= n; i++)
				tsize = fac(i, T, tsize);

			for (int i = tsize - 1; i >= 0; i--)
				cout << T[i];
			cout << endl;
			
		}
	}
	return 0;
}
/*
			while (n)
			{
				T[i] = n % 10;
				n /= 10;
				i++;
				
			}
			*/
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
