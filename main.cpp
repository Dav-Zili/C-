#include <iostream>
#include <cstdlib>
#include <ctime>
#include "library.h"

using namespace std;

void stampaMenu()
{
	cout << "1. Uscita" << endl;
	cout << "2. Visualizzazione del vettore" << endl;
	cout << "3. Aumentare del 10% ogni elemento del vettore" << endl;
	cout << "4. Stampa l'elemento massimo " << endl;
	cout << "5. Stampa quante volte e' presente il numero minore nella lista " << endl;
	cout << "6. Mostrare gli elementi di indice pari " << endl;
	cout << " " << endl;

}
void menu(int v[] , int n)
{
	int scelta;
	do
	{
		stampaMenu();
		cout << "Inserisci scelta: " << endl;
		cin >> scelta;
		system("cls");
		switch(scelta)
		{
			case 1:
				cout << "Fine programma" << endl;
				break;
			case 2:
				cout << "--Ecco il vettore--" << endl;
				stampaVettore(v,n);
				break;
			case 3:
				int x;
				for(int i = 0 ; i < n ; i++)
				{
					x = v[i];
					v[i] = x*(1+0.1);
				}
				break;
			case 4:
				cout << "Il numero massimo della lista -->  " << maggiore(v,n) << endl;
				break;
			case 5:
				int contatore = 0;
				for(int i = 0; i<n;i++)
				{
					if(v[i] == minore(v,n))
					{
						contatore += 1;
					}
				}
				cout << "Il numero minore della lista e' stato trovato " << contatore << " volte " << endl;
				break;
			case 6:
				for(int i = 0 ; i <n ;i++)
				{
					if()
				}
			
			
		}
	}while(scelta != 1);
}

int main()
{
	srand(time(NULL));
	setRandomMin(50);
	setRandomMax(150);
	int n;
	cout << "Quanto deve essere grande il vettore?" << endl;
	cin >> n;
	system("cls");
	int max = 100000;
	int v[max];
	setDimensioneMax(max);
	riempiVettoreRandom(v,n);
	menu(v,n);
}
