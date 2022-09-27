#include <stdio.h>

int fatorial ( int n)
{	
	int i, soma = 1;
	
	for(i = 1; <=n; i++)
	{
		soma = soma+(i*i);
		
	}
	return soma;	
}

int main()
{
	printf("Digite um Numero");
	scanf("%d", &n);
	resp = somatorio(n);
	
}