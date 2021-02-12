#include <stdio.h>

void desbordaShort()
{
	short int x = 32770;
	short int y = 32785;
	printf("\ndesbordaShort:");
	printf("\n32770 en short = %d", x);
	printf("\n32785 en short = %d", y);
}

void desbordaUShort()
{
	unsigned short x = 65540;
	printf("\ndesbordaUShort:");
	printf("\n65540 en unsigned short = %u", x);
}

void desbordaChar()
{
	char ch = 200;
	printf("\ndesbordaChar:");
	printf("\n200 en char (numerico) = %d", ch);
	printf("\n200 en char (texto) = %c", ch);
}

void desbordaUChar()
{
	printf("\ndesbordaUChar:");
	unsigned char ch = 300;
	printf("\n300 en unsigned char (numerico) = %d", ch);
	printf("\n300 en unsigned char (texto) = %c", ch);

}

void desbordaShortNegativo()
{
	printf("\ndesbordaShortNegativo");
	short int x = -32772;
	short int y = -32790;
	printf("\n-32772 en short = %d", x);
	printf("\n-32790 en short = %d", y);
}

void desbordaUShortNegativo()
{
	printf("\ndesbordaUShortNegativo");
	unsigned short x = -10;
	printf("\n-10 en unsigned short = %u", x);
}

void desbordaCharNegativo()
{
	printf("\ndesbordaCharNegativo");
	char ch = -200;
	printf("\n-200 en  char (numerico) = %d", ch);
	printf("\n-200 en  char (texto) = %c", ch);
}


void desbordaUCharNegativo()
{
	printf("\ndesbordaUCharNegativo");
	unsigned char ch = -100;
	printf("\n-100 en  char (numerico) = %d", ch);
	printf("\n-100 en  char (texto) = %c", ch);
}



