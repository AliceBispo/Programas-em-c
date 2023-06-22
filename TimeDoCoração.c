#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int cont=1,time,time1=0,time2=0,time3=0,outro4=0,lugar1=0,lugar2=0,nifu=0,outro3=0,lugar,salario,salariom=0;
	float media;
	
	    printf("Qual seu time do coração? \n");
	    printf("1 – Fluminense \n");
	    printf("2 – Botafogo \n");
	    printf("3 – Vasco \n");
     	printf("4 – Outros \n");
		scanf("%d",&time);
		printf("\n");
		
	    
	while(time!=0){
		
		printf("Onde você mora? \n");
	    printf("1 – Rio de Janeiro \n");
	    printf("2 – Niterói \n");
     	printf("3 – Outros \n");
		scanf("%d",&lugar);
		printf("\n");
	    
	    printf("Qual o seu salário? ");
	    scanf("%d",&salario);
	    printf("\n");
	
	    
	    if(time==1){
	    	
	    	time1++;
	    	
		}if(time==2){
			
			time2++;
			salariom=salariom+salario;
			media=salariom/time2;
			
		}if(time==3){
			
			time3++;
			
		}if(time==4){
			
			outro4++;
			
		}if(lugar==1){
			
			lugar1++;
			
		}if(lugar==2){
			
			lugar2++;
			
		}if(lugar==3){
			
			outro3++;
		}if(lugar==2 && time==1){
			
			nifu++;
		}
		
			printf("Qual seu time do coração? \n");
	    	printf("1 – Fluminense \n");
	    	printf("2 – Botafogo \n");
	    	printf("3 – Vasco \n");
     		printf("4 – Outros \n");
     		printf("0 – para acabar o estudo \n");
			scanf("%d",&time);
			printf("\n");
			
			
cont++;
}
			printf("Número de torcedores do fluminense: %d \n",time1);
			printf("\n");
		    printf("Número de torcedores do botafogo: %d \n",time2);
		    printf("\n");
		    printf("Número de torcedores do vasco: %d \n",time3);
		    printf("\n");
		    printf("Número de torcedores de outros times: %d \n",outro4);
		    printf("\n");
		    printf("A média salarial dos torcedores do botafogo: R$%.2f \n",media);
		    printf("\n");
		    printf("O número de pessoas moradoras do Rio de Janeiro: %d e torcedores de outros clubes: %d \n",lugar1,outro4);
		    printf("\n");
		    printf("Quantidade de pessoas que moram em Niterói e são torcedoras do fluminense: %d",nifu);
		    printf("\n");
		    
			
	return 0;
}