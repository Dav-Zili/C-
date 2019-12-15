#include <iostream>
#include <cstdlib>
#include <ctime>
#include "library.h"

using namespace std;

void stampaMenu()
{
	cout << "1. Uscita" << endl;
	cout << "2. Visualizzazione del vettore" << endl;
	cout << "3. Aumentare di 100 i valori maggiori di 5000" << endl;
	cout << "4. Stampare i valori tra 6000 e 7000 " << endl;
	cout << "5. Stampa gli indici/l'indice dei maggiore/i " << endl;
	cout << "6. Mostrare gli elementi minori di v[h]" << endl;
	cout << "7. Mostrare quante volte un valore e' maggiore del suo precedente" << endl;
	cout << " " << endl;

}
void menu(float v[] , int n)
{
	int scelta;
	int h;
	int contatore = 0;
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
					if(v[i]>5000)
					{
						v[i] = v[i] + 100;
					}

				}
				break;
			case 4:
				for(int i=0;i<n;i++)
				{
					if(v[i]>=6000 & v[i] <= 7000)
					{
						cout << v[i] << endl;
					}
				}
				break;
			case 5:
				for(int i = 0; i<n;i++)
				{
					if(v[i] == maggiore(v,n))
					{
						cout << i << endl;
					}
				}
				break;
			case 6:
				cout << "Che indice devo confrontare?" << endl;
				cin >> h;
				for(int i = 0; i < n ; i++)
				{
					if(v[i] < v[h])
					{
						cout << v[i] << endl;
					}
				}
				break;
			case 7:
				contatore = 0;
				for(int i = 1; i <n ; i++)
				{
					if(v[i] > v[i-1])
					{
						contatore +=1;
					}
				}
				cout << "il numero di volte in cui un valore e' maggiore del precedente e' " << contatore  << endl;
				break;
			default:
				cout << "Opzione inesistente , riprovare " << endl;
				break;
	
		}
	}while(scelta != 1);
}

int main()
{
	srand(time(NULL));
	setRandomMin(1000);
	setRandomMax(10000);
	int n;
	cout << "Quanto deve essere grande il vettore?" << endl;
	cin >> n;
	system("cls");
	int max = 100000;
	float v[max];
	setDimensioneMax(max);
	riempiVettoreRandom(v,n);
	menu(v,n);
}
