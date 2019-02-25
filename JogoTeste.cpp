#include <iostream>
#include <stdlib.h>
#include <time.h>

int vidaheroi = 100, vidainimigo=10;
int staminaheroi = 10, staminainimigo = 10;
int especialheroi = 5, especialinimigo = 5;


int main(int argc, char** argv) {
	
	int op = 5;
	void menu(int vidaheroi, int vidainimigo, int staminaheroi,int staminainimigo,int especialheroi, int especialinimigo);
	int soco();
	int chute();
	int especial();
	int ataqueinimigo();
	
	do {
		menu(vidaheroi, vidainimigo,staminaheroi,staminainimigo,especialheroi,especialinimigo);
		scanf("%i",&op);
		system("cls"); 
		
		switch(op){
			
			case 1:
				if (staminaheroi >=1 && vidainimigo >= 1){
					vidainimigo -= soco();
					staminaheroi--;				
				}
				break;
				
			case 2:
				if (staminaheroi >=2 && vidainimigo >= 1){
					vidainimigo -= chute();
					staminaheroi -= 2;				
				}
				
				break;
				
			case 3:
				
				if (staminaheroi>=5 && especialheroi >=1 && vidainimigo >= 1){
					vidainimigo -= especial();
					especialheroi -= 1;	
					staminaheroi -= 5;			
				}
				
				break;
				
			case 4:
				
				if (staminaheroi >= 20)
					staminaheroi = 20;
				else {
					staminaheroi += 5;
					if (staminaheroi>20){
						staminaheroi = 20;
					}
					
				}
				
				
				
			default:
				
				break;
			
		}
		
	vidaheroi -= ataqueinimigo();	
		
	}while (op!=0);
	
	return 0;
}

void menu(int vidaheroi, int vidainimigo, int staminaheroi,int staminainimigo,int especialheroi, int especialinimigo){
	
	printf("\n");
	printf(" ============ HEROI ============ / ============ INIMIGO LVL =============\n ");
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
	
	int soco(){
		int soco = 1;
		printf("Soco");
		return (soco);			
	}
	
	int chute(){
		int chute = 2;
		printf("Chute");
		return (chute);
	}
	
	int especial(){
		int especial = 5;
		printf("Especial");
		return(especial);
	}
	
	int ataqueinimigo(){
		srand(time(NULL));
		int staminainimigo = 5;
		int randomico = rand() % 3;
		int resultadoataqueinimigo;
		
		
		switch(randomico){
			case 1:
			resultadoataqueinimigo = 1;	
							
				break;
			
			case 2:	
			resultadoataqueinimigo = 2;
				break;
			
			case 3:
			resultadoataqueinimigo = 3;	
				break;
								
		}
				
		return (resultadoataqueinimigo);
		
	}
