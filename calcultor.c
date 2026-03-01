#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/**
*main - Entry point
*calculator whit menu
*Return: Always 0 (Success)
*/

int main(void)

{
	int menu = 0;
	int op1, op2, result;
		while (menu != 6)
		{
		printf("1. Addition\n2. Soustration\n3. Multiplication\n4. Division\n");
		printf("5. Modulo\n6. Quitter\n");
		printf("Merci d'entrer le chiffre correspondant a l'opération voulu :");
		scanf("%d", &menu);
			if (menu == 1)
			{
			printf("Veuilez entrer les valeurs a additionner :");
			scanf("%d" "%d", &op1, &op2);
			result = op1 + op2;
			printf("le resultat de votre calcul est: %d\n", result);
			}
				else if (menu == 2)
				{
				printf("Veuilez entrer les valeurs a soustraire :\n");
				printf("Premier nombre:");
				scanf("%d", &op1);
				printf("Second nombre:");
				scanf("%d", &op2);
				result = op1 - op2;
				printf("le resultat de votre calcul est: %d\n", result);
				}
					if (menu == 3)
					{
					printf("Veuilez entrer les valeurs a multiplier :\n");
					printf("Premier nombre:");
					scanf("%d", &op1);
					printf("Second nombre:");
					scanf("%d", &op2);
					result = op1 * op2;
					printf("le resultat de votre calcul est: %d\n", result);
					}
		}
		putchar('\n');
		return (0);
}
