#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	float xn[1000];
	float wn[1000];
    int numero,n,e,outro;
    
    int i;
    float soma;
    float x,w;
    float y;
   	int cont;
    int a;
    
  	  	do{
	
				printf("\n menu de valores de entrada 0\n informe o que deseja escolher limite rapido 1\n");
				printf("funcao rampa 2\n  funcao sigmoide 3\n saber os valores de entrada 4 \n valores do peso 5\n 8 para sair\n");
				scanf("%d",&a);
	
				switch(a){
					case 0:   
						printf("\n informe valores de entrada: \n");
            			scanf("%d",&numero);
	        				for (i=1; i<=numero; i++){
    							printf("\n informe dados de entrada %d: \n ",i);
    							scanf("%f",&xn[i]);
    	     						cont=2;
    	     						
	         									for (a = 1; a<cont; a++){
	         									printf("\n informe dados de peso:%d \n ",a);
	         										scanf("%f",&wn[a]);	
    	     										  soma = (xn[i] * wn[a]) + soma ;	 
						  }
	                    
                          	
	                  }
			break;
		case 1:
			if(soma<=0){
			 y = -1;}
			 if(soma>0)
			 
			  y = 1;
		printf("\n sua resposta na soma do limite rapido: %.0f \n",y);	 
		break;
		case 2:
			if(soma<0)
			
			 y = 0;
			if(soma >= 0 && soma <=1 )
		       y=soma;
			if(soma>1)
			y = 1;
		printf("\nsua resposta na soma do funcao rampa:%.0f \n",y);
		break;
		case 3 :
		     if(soma>=0)
			   { y=1-1/(1+soma);	}
			 if(soma<0)
			   y=-1+1/(1-soma);
		printf("\nsua resposta na soma do funcao sigmoide: %f\n",y);  
		break;
		case 4: 
		for(i=1;i<=numero;i++){
		
		 printf("\nos valores de entrada:%f \n",xn[i]);}
		 break;
		 case 5:
		 for(a=1;a<=cont;a++){
		
		 printf("\nos valores de peso:%f \n",wn[a]);}
		 break;	
		default:
			printf("\ntchau obrigado\n");
	}
}while(a != 8 );
    
    system("pause");
}
