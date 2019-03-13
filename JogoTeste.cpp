#include <iostream>
#include <stdlib.h>
#include <time.h>

struct Personagem {

int level = 1;
int vidaheroi = 100;
int staminaheroi = 10;
int especialheroi = 5;
float experieniaheroi = 1;	

};

int  vidainimigo=10;
int  staminainimigo = 10;
int  especialinimigo = 5;
float experienciainimigo = 1;

struct Personagem personagem;

int main(int argc, char** argv) {
	

	
	int op = 5;
	void menu(int vidaheroi, int vidainimigo, int staminaheroi,int staminainimigo,int especialheroi, int especialinimigo);
	int soco();
	int chute();
	int especial();
	int ataqueinimigo();
	
	do {
		menu(personagem.vidaheroi, vidainimigo,personagem.staminaheroi,staminainimigo,personagem.especialheroi,especialinimigo);
		scanf("%i",&op);
		system("cls"); 
		
		switch(op){
			
			case 1:
				if (personagem.staminaheroi >=1 && vidainimigo >= 1){
					vidainimigo -= soco();
					personagem.staminaheroi--;				
				}
				break;
				
			case 2:
				if (personagem.staminaheroi >=2 && vidainimigo >= 1){
					vidainimigo -= chute();
					personagem.staminaheroi -= 2;				
				}
				
				break;
				
			case 3:
				
				if (personagem.staminaheroi>=5 && personagem.especialheroi >=1 && vidainimigo >= 1){
					vidainimigo -= especial();
					personagem.especialheroi -= 1;	
					personagem.staminaheroi -= 5;			
				}
				
				break;
				
			case 4:
				
				if (personagem.staminaheroi >= 20)
					personagem.staminaheroi = 20;
				else {
					personagem.staminaheroi += 5;
					if (personagem.staminaheroi>20){
						personagem.staminaheroi = 20;
					}
					
				}
	
			default:
				
				break;
			
		}
		
	personagem.vidaheroi -= ataqueinimigo();	
		
	}while (op!=0);
	
	return 0;
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
