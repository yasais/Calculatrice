#include<stdio.h>
#include "../Includes/include.h"


void calcule()
{
	double x,y; 
	int calculer = 1;
	char operateur; 
	char input[3];

	while(calculer!=0)
	{		
		printf ("\nDonnez le premier nombre : ");
		scanf("%lf",&x);
		printf ("Donnez un operateur ( +, -, * ou /) : ");
		scanf(" %c",&operateur);
		printf ("Donnez le deuxieme nombre : ");
		scanf("%lf",&y);
		

		switch(operateur)
		{

			case '+': printf("\nRésultat : %.2lf + %.2lf = %.2lf\n",x,y,x+y);break;
			case '-': printf("\nRésultat : %.2lf - %.2lf = %.2lf\n",x,y,x-y);break;
			case '*': printf("\nRésultat : %.2lf * %.2lf = %.2lf\n",x,y,x*y);break;
			case '/':if (y == 0)
						printf ("\nVous ne pouvez pas diviser pas 0!!\n");
					else
						printf ("\nRésultat : %.2lf * %.2lf = %.2lf\n",x,y,x/y);
					break;
			default: printf("Vous pouvez seulement utiliser: +, -, *, /.");
		}

	   printf("\nVoulez-vous continuer à faire des calculs ? (Oui/Non)\n"); 
        scanf("%s", &input[0]); 

        if ((input[0]=='o') ||(input[0]=='O'))
             calculer= 1; 
        else 
        {
        	calculer=0;
        	printf("\nMerci d'avoir utilisé notre calculatrice, à bientôt!!\n\n");
        }       
	}        
}