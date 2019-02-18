#include <iostream>

int main(int argc, char** argv) {
	int op = 5;
	void menu();
	
	do {
		menu();
		scanf("%i",&op);
		
		
		
		
	}while (op!=0);
	
	return 0;
}

void menu(){
	printf("\n");
	printf(" ============ HEROI ============ / ============ INIMIGO LVL =============\n ");
       printf("=\t Vida = \t \t / = \t Vida = \t\t\t=\n ");	
	printf("=\t Stamina = \t \t / = \t Stamina = \t\t\t=\n ");		
   printf("=\t Especial = \t \t / = \t Especial =  \t\t\t=\n ");	
	printf("=============================== / ======================================\n\n ");	
		
	printf("=========== ACAO DO HEROI ===========\n");
	printf(" 1 - Soco \n");
	printf(" 2 - Chute \n");
	printf(" 3 - Especial \n");
	printf("================================\n");
	printf("O que vc quer fazer?\n\n");
	}
	
	int soco(){
		int soco = 1;
		return (soco);			
	}
	
	int chute(){
		int chute = 2;
		return (chute);
	}
	
	int especial(){
		int especial = 5;
		return(especial);
	}
