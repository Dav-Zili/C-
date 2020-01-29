#include <assert.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	freopen("./input/11", "r" , stdin);
	freopen("./output/11", "w" , stdout);
	
	
	int N,somma = 0,a,b,c,d,e;
	scanf("%d",&N);
	int C[N];
	for(int i = 0; i < N ; i++)
	{
		scanf("%d" "%d" "%d" "%d" "%d" , &a , &b , &c , &d , &e);
		somma = a + b + c + d + e;
		cout << somma << " " ;
	}

}
