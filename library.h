#include <iostream>
#include <cstdlib>

int random_min = 0;
int random_max = 100;

int dim_max = 1000;

using namespace std;
//funzioni aggiuntive
void pd(int v[], int n);
//funzioni

//gestione random
int randomNM(int n, int m);
float randomNM_float(int n, int m);
int random0N(int n);
float randomNM_float(int n);
void setRandomMin(int min);
void setRandomMax(int max);


//gestione vettore
void setDimensioneMax(int x);
void riempiVettore(int v[], int n);
void riempiVettore(float v[], int n);
void riempiVettoreRandom(int v[], int n);
void riempiVettoreRandom(float v[], int n);
bool aggiungiElemento(int v[], int n);
bool aggiungiElemento(float v[], int n);
bool rimuoviElemento(int v[], int n, int pos);
bool rimuoviElemento(float v[], int n, int pos);

//stampa vettore
void stampaVettore(int v[], int n);
void stampaVettore(float v[], int n);

//Ordinamento array
void ordinamentoIngenuo(int v[], int n, bool inverso);
void ordinamentoIngenuo(float v[], int n, bool inverso);
void bubbleSort(int v[], int n, bool inverso);
void bubbleSort(float v[], int n, bool inverso);

//Funzioni array
float media(int v[], int n);
float media(float v[], int n);
float sommaVettore(float v[], int n);
int sommaVettore(int v[], int n);
void inverti(int v[], int n);
void inverti(float v[], int n);
bool ricercaBinaria(int v[], int n, int x);
bool ricercaBinaria(float v[], int n, int x);
int presente(int v[], int n, int x);
int presente(float v[], int n, float x);
int minore(int v[], int n);
float minore(float v[], int n);
int maggiore(int v[], int n);
float maggiore(float v[], int n);
int posizioneMinore(int v[], int n);
int posizioneMinore(float v[], int n);
int posizioneMaggiore(int v[], int n);
int posizioneMaggiore(float v[], int n);



//Programma
int randomNM(int n,int m)
{
	return rand()%(m-n+1)+n;
}
float randomNM_float(int n, int m)
{
	int prima_parte = randomNM(n,m);
	int seconda_parte = randomNM(0,999);
	return prima_parte + (float) seconda_parte / 1000 ;
}
int random0N(int n)
{
	return randomNM(0,n);
}
float randomNM_float(int n)
{
	return randomNM_float(0,n);
}
void setRandomMin(int min)
{
	random_min = min;
}
void setRandomMax(int max)
{
	random_max = max;
}



//Programma Vettori

void setDimensioneMax(int x)
{
	while(x<=0)
	{
		cout << "Dimmi la dimensione massima del vettore" << endl;
		cin >> x;
	}
	dim_max = x;
}
void riempiVettore(int v[], int n)
{
	for(int i = 0; i != n  ; i++)
	{
		cout << "Inserisci un numero intero" << endl;
		cin >> v[i];
	}
}
void riempiVettore(float v[], int n)
{
	for(int i = 0 ; i != n ; i++)
	{
		cout << "Inserisci un numero float" << endl;
		cin >> v[i];
	}
}
void riempiVettoreRandom(int v[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		v[i] = randomNM(random_min , random_max);
	}
}
void riempiVettoreRandom(float v[] , int n )
{
	for(int i = 0; i < n ; i++)
	{
		v[i] = randomNM_float(random_min , random_max);
	}
}
bool aggiungiElemento(int v[], int n , int x)
{
	if(n>=dim_max)
	{
		return false;
	}
	else
	{
		v[n] = x;	
	}
}
bool aggiungiElemento(float v[], int n , float x)
{
	if(n>=dim_max)
	{
		return false;
	}
	else
	{
		v[n] = x;
	}
}
bool rimuoviElemento(int v[], int n, int pos)
{
	if(pos > n || n>dim_max || pos > dim_max)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < n-1 ; i++)
		{
			if(i+1==pos)
			{
				v[i] = v[i+1];
			}
		}
	}
}
bool rimuoviElemento(float v[], int n, int pos)
{
	if(pos > n || n > dim_max || pos > dim_max)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < n-1 ; i++)
		{
			if(i+1==pos)
			{
				v[i] = v[i+1];
			}
		}
	}
}
//Stampa vettore
void stampaVettore(int v[], int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout << v[i] << endl;
	}
}
void stampaVettore(float v[], int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout << v[i] << endl;
	}
}

//Ordinamento array
void ordinamentoIngenuo(int v[], int n, bool inverso = false)
{
	if(inverso == false)
	{
		for(int i = 0; i < n-1 ; i++)
		{
			for(int j=i+1 ; j < n ; j++)
			{
				if(v[i]>v[j])
				{
					swap(v[i], v[j]);
				}
			}
		}
 	}
 	else
 	{
 		for(int i = 0; i < n-1 ; i++)
		{
			for(int j=i+1 ; j < n ; j++)
			{
				if(v[i]<v[j])
				{
					swap(v[i] , v[j] );
				}	
			}	
		}	
	}
}
void ordinamentoIngenuo(float v[], int n, bool inverso = false)
{
	if(inverso == false)
	{
		for(int i = 0; i < n-1 ; i++)
		{
			for(int j=i+1 ; j < n ; j++)
			{
				if(v[i]>v[j])
				{
					swap(v[i], v[j]);
				}
			}
		}
 	}
 	else
 	{
 		for(int i = 0; i < n-1 ; i++)
		{
			for(int j=i+1 ; j < n ; j++)
			{
				if(v[i]<v[j])
				{
					swap(v[i] , v[j] );
				}	
			}	
		}	
	}
}
void bubbleSort(int v[], int n, bool inverso = false)
{
	
	if(inverso == false)
	{
	int ordinato = 0;
	while(n>1 && ordinato == 0)
	{
		ordinato = 1;
		for(int i = 0 ;  i < n-1 ; i ++ )
		{
			if (v[i]>v[i+1])
			{
				swap(v[i] , v[i+1]);
				ordinato = 0 ; 	
			}
			
		}
	n--;
	}		
	}
	else
	{
	int ordinato = 0;
	while(n>1 && ordinato == 0)
	{
		ordinato = 1;
		for(int i = 0 ;  i < n-1 ; i ++ )
		{
			if (v[i]<v[i+1])
			{
				swap(v[i] , v[i+1]);
				ordinato = 0 ; 	
			}
			
		}
	n--;
	}
	}		

}
void bubbleSort(float v[], int n, bool inverso = false)
{
	
	if(inverso == false)
	{
	int ordinato = 0;
	while(n>1 && ordinato == 0)
	{
		ordinato = 1;
		for(int i = 0 ;  i < n-1 ; i ++ )
		{
			if (v[i]>v[i+1])
			{
				swap(v[i] , v[i+1]);
				ordinato = 0 ; 	
			}
			
		}
	n--;
	}		
	}
	else
	{
	int ordinato = 0;
	while(n>1 && ordinato == 0)
	{
		ordinato = 1;
		for(int i = 0 ;  i < n-1 ; i ++ )
		{
			if (v[i]<v[i+1])
			{
				swap(v[i] , v[i+1]);
				ordinato = 0 ; 	
			}
			
		}
	n--;
	}
	}		

}

//Funzioni array
float media(int v[], int n)
{
	return  sommaVettore(v,n)/float(n);
}
float media(float v[], int n)
{
	return sommaVettore(v,n)/float(n);
}
int sommaVettore(int v[], int n)
{
	int totale = 0;
	for(int i = 0 ; i < n ; i++)
	{
		totale += v[i];
	}
	return totale;
}
float sommaVettore(float v[], int n)
{
	float totale = 0;
	for(int i = 0 ; i < n ; i++)
	{
		totale += v[i];
	}
	return totale;
}
void inverti(int v[], int n)
{
	for(int i = 0 ; i < n/2 ; i++)
	{
		swap(v[i],v[n-1]);
		n--;
	}
}
void inverti(float v[], int n)
{
	for(int i = 0 ; i <n/2 ; i++)
	{
		swap(v[i],v[n-1]);
		n--;
	}
}
bool ricercaBinaria(int v[], int n, int x)
{
	int inizio = 0;
	int fine = n-1;
	int medio;
	while(inizio <= fine )
	{
		medio = (inizio + fine)/2;
		if(v[medio] == x)
		{
			return true ;

		}
		if(v[medio] < x )
		{
			inizio = medio + 1;
		}
		if(v[medio] > x )
		{
			fine = medio - 1 ; 
		}
	 }
	return false;	
}
bool ricercaBinaria(float v[], int n, int x)
{
	int inizio = 0;
	int fine = n-1;
	int medio;
	while(inizio <= fine )
	{
		medio = (inizio + fine)/2;
		if(v[medio] == x)
		{
			return true;
		}
		if(v[medio] < x )
		{
			inizio = medio + 1;
		}
		if(v[medio] > x )
		{
			fine = medio - 1 ; 
		}
	 }
	return false;	
}
int presente(int v[], int n, int x)
{
	for(int i = 0; i<n ; i++)
	{
		if(v[i] == x)
		{
			return i+1 ; 
		}
	}
	return -1;
}
int presente(float v[], int n, float x)
{
	for(int i = 0; i < n ; i++)
	{
		if(v[i] == x)
		{
			return i+1;
		}
	}
	return -1;
}
int minore(int v[], int n)
{
	int min = v[0];
	for(int i = 1; i < n ; i++)
	{
		if(min>v[i])
		{
			min = v[i];
		}
	}
	return min;
}
float minore(float v[], int n)
{
	float min = v[0];
	for(int i = 1; i < n ; i++)
	{
		if(min>v[i])
		{
			min = v[i];
		}
	}	
	return min;
}
int maggiore(int v[], int n)
{
	int max = v[0];
	for(int i = 1; i < n ; i++)
	{
		if(max<v[i])
		{
			max = v[i];
		}
	}
	return max;
}
float maggiore(float v[], int n)
{
	float max = v[0];
	for(int i = 1; i < n ; i++)
	{
		if(max<v[i])
		{
			max = v[i];
		}
	}
	return max;
}
int posizioneMinore(int v[], int n)
{
	return presente(v,n,minore(v,n));
}
int posizioneMinore(float v[], int n)
{
	return presente(v,n,minore(v,n));
}

int posizioneMaggiore(int v[], int n)
{
	return presente(v,n,maggiore(v,n));
}
int posizioneMaggiore(float v[], int n)
{
	return  presente(v,n,maggiore(v,n));
}
void pd(int v[] , int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		if(v[i]%2==0)
		{
			cout << v[i] << "-->" << " e' pari" << endl;
		}
		else
		{
				cout << v[i] << "-->" << " e' dispari" << endl;
		}
	}
}

