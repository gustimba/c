#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	float x1;
	float x2;
	float w1;
	float w2;
	float y;
	float soma;
	int a;

	
	printf("informe x1");
	scanf("%f",&x1);
	printf("informe x2");
	scanf("%f",&x2);
	printf("informe peso w1");
	scanf("%f",&w1);
	printf("informe peso w2");
	scanf("%f",&w2);
	
	soma = (x1*w1)+(x2*w2);
	do{
	
	printf("informe o que deseja escolher limite rapido 1\n, funcao rampa 2\n, funcao sigmoide 3\n 8 para sair");
	scanf("%d",&a);
	
	
	
	
	switch(a){
		case 1:
			if(soma<=0){
			 y = -1;}
			 if(soma>0)
			 
			  y = 1;
		printf("sua resposta na soma do limite rapido: %f \n",y);	 
		break;
		case 2:
			if(soma<0)
			
			 y = 0;
			if(soma >= 0 && soma <=1 )
		       y=soma;
			if(soma>1)
			y = 1;
		printf("sua resposta na soma do funcao rampa:%f \n",y);
		break;
		case 3 :
		     if(soma>=0)
			   { y=1-1/(1+soma);	}
			 if(soma<0)
			   y=-1+1/(1-soma);
		printf("sua resposta na soma do funcao sigmoide: %f\n",y);  
		break;
		default:
			printf("tchau obrigado\n");
	}
}while(a != 8 );
	
	system("pause");

}
