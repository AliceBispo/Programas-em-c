#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a,b,c;
	char letra[20] = " O";
	
	printf("Escolha um número: ");
	scanf("%d",&a);
	
	printf("Escolha outro número: ");
	scanf("%d",&b);
	
	while(b!=0){
		
		for(c=1;c<=a/b;c++){
		
		
		printf("P%cDLE \n",letra[c]);
	}
		
		
		
	c++;
	
	printf("Escolha um número: ");
	scanf("%d",&a);
	
	printf("Escolha outro número: ");
	scanf("%d",&b);
	}
	
	

	
	return 0;
}
