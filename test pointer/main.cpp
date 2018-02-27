#include <stdio.h>
void main()
{
	int a=15;
	int* pointer1;
	pointer1 = &a;
	printf("Dia chi cua a la %d %d", &a, pointer1);
	printf("\ngia tri bien a la:%d", *pointer1);
	printf("\nGia tri con tro: %d", pointer1);
	printf("\ndia chi cua con tro: %d", &pointer1);


}