#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int cont=0,op,n,c1=0,c2=0,c3=0,white=0,nulo=0;
	
	printf("Escreva a quantidade de eleitores que irão participar da pesquisa: ");
	scanf("%d",&n);
	
	while(cont<n){
		
		printf("Escolha uma das opções de voto:\n");
	    printf("1 para o primeiro canditado \n");
	    printf("2 para o segundo candidato \n");
	    printf("3 para o terceiro canditado \n");
     	printf("0 para branco \n");
    	printf("-1 para nulo \n");
	    printf("Opção escolhida: \n");
	    scanf("%d",&op);
	    
	    
	    if(op==1){
	    	
	    	c1++;
	    	
		}if(op==2){
			
			c2++;
			
		}if(op==3){
			
			c3++;
			
		}if(op==0){
			
			white++;
			
		}if(op== -1){
			
			nulo++;
			
		}
		
		cont++;
		
		    
} 
			if(c1>c2 && c1>c3 && c1>white && c1>nulo){
				printf("Candidato 1 é o ganhador com %d votos!! \n",c1);
			}if(c2>c1 && c2>c3 && c2>white && c2>nulo){
				printf("Candidato 2 é o ganhador com %d votos!! \n",c2);
			}if(c3>c2 && c3>c1 && c3>white && c3>nulo){
				printf("Candidato 3 é o ganhador com %d votos!! \n",c3);
			}if(white>c2 && white>c3 && white>c1 && white>nulo){
				printf("A maioria  votou Branco!! \n");
			}if(nulo>c2 && nulo>c3 && nulo>white && nulo>c1){
				printf("A maioria votou nulo!! \n");
			}if(c1==c2 && c2==c3){
				printf("Houve Um Empate em os três candidatos!! \n");
			}if(c1==c2){
				printf("Houve Um Empate em os candidatos um e dois!! \n");
			}if(c1==c3){
				printf("Houve Um Empate em os candidatos um e três!! \n");
			}if(c2==c3){
				printf("Houve Um Empate em os candidatos dois e três!! \n");
			}


            printf("Quantidade do primeiro candidato:%d \n",c1);
            printf("Quantidade do segundo candidato:%d \n",c2);
		    printf("Quantidade do terceiro candidato:%d \n",c3);
		    printf("Quantidade dos voto em branco:%d \n",white);
		    printf("Quantidade dos votos nulos:%d \n",nulo);
			
	return 0;
}