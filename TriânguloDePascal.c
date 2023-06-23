#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

    int n,pascal=0,cont,contt;
   
    printf("O triângulo de Pascal: escreva o valor que você quer: ");
    scanf("%d", &n);
    
    printf("          Seu triangulo de pascal é : \n \n \n");
    
    for (cont=0;cont<=n;cont++){
        
      for (contt=0;contt<=cont ;contt++){
      	
             if (cont==0 || contt==0){
			        
					pascal = 1;
           
		    }else{
		            
					pascal = pascal * (cont-contt +1)/contt ;
            }
            
            printf("%d ", pascal);
  }
  
            printf("\n");
}
    return 0;
}