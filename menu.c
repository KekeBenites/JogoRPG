#include <stdio.h>


void menu(int vidaheroi, int vidainimigo, int staminaheroi,int staminainimigo,int especialheroi, int especialinimigo, int level){
	
	printf("\n\n\n");
	printf(" ============ HEROI ============ / ============ INIMIGO LVL %i ===========\n ",level);
       printf("=\t Vida = %i\t \t / = \t Vida = %i\t\t\t=\n ",vidaheroi,vidainimigo);	
	printf("=\t Stamina = %i\t \t / = \t Stamina = %i\t\t\t=\n ",staminaheroi,staminainimigo);		
   printf("=\t Especial = %i\t \t / = \t Especial =  %i\t\t\t=\n ",especialheroi,especialinimigo);	
	printf("=============================== / ======================================\n\n ");	
		
	printf("========= ACAO DO HEROI =========\n");
	printf(" 1 - Soco (1 Dano / 1 Stamina)\n");
	printf(" 2 - Chute (2 Dano / 2 Stamina)\n");
	printf(" 3 - Especial (5 Dano / 5 Stamina)\n");
	printf(" 4 - Descancar (Perde 1 turno)\n");
	printf(" ================================\n");
	printf("O que vc quer fazer?\n\n");
	
	
	}
