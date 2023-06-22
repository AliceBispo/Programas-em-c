#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int cont=1,numero,codigo1=0,codigo2=0,codigo3=0,codigo,kwh;
	float consumot1,consumot2=0,consumot3=0;
	float media1,media2,media3,custo;
	
	    	printf("Qual seu número de consumidor?  ");
	    	scanf("%d",&numero);
	    	printf("\n");
		
		while(numero!=0){
			
			printf("Quantidade de kWh consumidos durante o mês: ");
	   		scanf("%d",&kwh);
	    	printf("\n");
	    	printf("Qual seu código do consumidor: \n");
	    	printf("1 – Residencial \n");
     		printf("2 – Comercial \n");
        	printf("3 – Industrial \n"); 
			scanf("%d",&codigo);
		
	    if(codigo==1){
	    	codigo1++;
	    	custo= kwh * 0.3;
	    	printf("\n");
	    	printf("Consumidor %d o seu custo é de: R$%.2f \n",numero,custo);
	    	consumot1=consumot1+kwh;
	    	media1=consumot1/codigo1;
	    	
		}if(codigo==2){
			codigo2++;
			custo= kwh * 0.5;
			printf("\n");
			printf("Consumidor %d o seu custo é de: R$%.2f \n",numero,custo);
			consumot2=consumot2+kwh;
			media2=consumot2/codigo2;
			
		}if(codigo==3){
			codigo3++;
			custo= kwh * 0.7;
			printf("\n");
			printf("Consumidor %d o seu custo é de: R$%.2f \n",numero,custo);
			consumot3=consumot3+kwh;
			media3=consumot3/codigo3;
			
		}
		    
	        printf("\n");
		  	printf("Qual seu número de consumidor(se for o, o estudo será encerrado)?  ");
	    	scanf("%d",&numero);
			printf("\n");
	    	
			
		
cont++;
}    
            printf("\n");
		    printf("Total de kwh dos recidenciais: %.2f \n",consumot1);
		    printf("\n");
		    printf("Total de kwh dos comerciais: %.2f \n",consumot2);
		    printf("\n");
		    printf("Total de kwh dos industriais: %.2f \n",consumot3);
		    printf("\n");
		    printf("A média de comsumo dos residenciais: R$%.2f \n",media1);
		    printf("\n");
		    printf("A média de comsumo dos comerciais: R$%.2f \n",media2);
		    printf("\n");
		    printf("A média de comsumo dos industriais: R$%.2f \n",media3);
			
	return 0;
}