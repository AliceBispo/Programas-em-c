#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

    int x,cont;
    float resposta;
   
    printf("escreva um valor para x: ");
    scanf("%d",&x);
    
    for (cont=3;cont<50;cont+=2){
    	
    	
        
		resposta = 2 * cont / x + cont ;
		
		printf("\n  %.2f \n ",resposta);
					

}
     
    
    
    return 0;
}