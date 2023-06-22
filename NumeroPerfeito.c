#include<stdio.h> 
#include<math.h> 
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");

    int soma,cont,contt,n; 

    printf ("Número perfeito: escolha a quantidade a ser conferida: ");
    scanf ("%d",&n);

    for (cont=1;cont<=n;cont++){
	     
		  soma=0;
		 
    for (contt=1;contt<cont;contt++) {
         
	 if (cont%contt==0){
	 
         soma=soma+contt;
		 
        }
		 
	}if (soma==cont){
		
	     printf("\n Número perfeito: %d ",cont);
	}
  }


return 0;
}