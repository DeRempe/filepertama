#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nowuku,hasil;
	int hari;
	int pancawara;
	
	printf("Masukan Nomor Wuku (1-30) : ");scanf("%i",&nowuku);
	puts("----------");
	puts("Minggu = 0");
	puts("Senin  = 1");
	puts("Selasa = 2");
	puts("Rabu   = 3");
	puts("Kamis  = 4");
	puts("Jumat  = 5");
	puts("Sabtu  = 6");
	puts("----------");
	printf("Masukan Nomor Hari         : ");scanf("%i",&hari);
	hasil=(nowuku*7)+hari;
	puts("--------------------------------------");
	printf("Panca Wara nya Adalah = ");
	
	if(hasil%5==1)
	{
		printf("Umanis");
	}
	if(hasil%5==2)
	{
		printf("Paing");
	}
	if(hasil%5==3)
	{
		printf("Pon");
	}
	if(hasil%5==4)
	{
		printf("Wage");
	}
	if(hasil%5==5 || hasil%5==0)
	{
		printf("Kliwon");
	}
	return 0;
}

