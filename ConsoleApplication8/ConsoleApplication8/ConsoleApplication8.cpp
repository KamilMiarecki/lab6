// ConsoleApplication8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "lab_6.h"
using namespace std;

//zad1 
int main()
{
	int a = 1, b = 2, c = 3;
	cout << "a= " << a << "\tb= " << b << "\tc= " << c << endl;
	cout << "p_kola(a)= " << p_kola(a) << endl;
	cout << "p_prostokata(a,b)= " << p_prostokata(a,b) << endl;
	cout << "p_trojkata(a,b)= " << p_trojkata(a, b) << endl;
	cout << "p_szescianu(a) = " << p_szescianu(a) << endl;
	cout << "v_szescianu(a) = " << v_szescianu(a) << endl;
	cout << "v_walca(a,c)= " << v_walca(a, c) << endl;




	
}

//zad2

bool czy_pierwsza(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

	int main() 
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "liczba: " << i << "pierwsza t/f : " << czy_pierwsza(i) << endl;
		}
	
	}

	//zad3
	void dziesietny_na_dwojkowy(int liczba)
	{
		int i = 0, tab[30];

		while (liczba) 
		{
			tab[i++] = liczba % 2;
			liczba /= 2;
		}

		for (int j = i - 1; j >= 0; j--)
			cout << tab[j];
	}

	int main()
	{
		int liczba;

		cout << "Podaj liczbe: ";
		cin >> liczba;

		cout << liczba << "(10)";
		dziesietny_na_dwojkowy(liczba);
		cout << "(2) ";
		

		return 0;
	}



	//zad4
	long long dwusilnia(unsigned int n)
	{
		long long a = 1; 

		for (; n > 1; n -= 2)
			a *= n;

		return a;
	}

	int main()
	{
		unsigned int n;

		cout << "Podaj liczbe: ";
		cin >> n;
		cout << "Dwusilnia z liczby " << n << " wynosi: " << dwusilnia(n) << endl;


		return 0;
	}



// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
