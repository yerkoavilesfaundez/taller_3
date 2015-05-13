#include <stdio.h>
int main(){
	int  num_1=2, num_2=8, num_3=17,num_4, num_5, total;
 	printf("los valores designados para el primer digito,\n segundo y tercero son los siguientes\n respectivamente : %d, %d, %d\n",num_1, num_2, num_3);
 	if (num_1==1){
 		salida1:
 			printf("el numero ingresado no es valido\ningresa el numero nuevamente\n");
 	}		
 	printf("ingrese el valor del cuarto digito, entre 20 y 30\n");
 	scanf("%d",&num_4);
 	if((num_4<20)||(num_4>30)) goto salida1;
 	if(num_1==1){
		salida2:
 			printf("el numero ingresado no es valido\ningresa el numero nuevamente\n");
 	}
 	printf("ingrese el valor del quinto digito, entre 0 y 5\n");
 	scanf("%d",&num_5);
 	if((num_5<0)||(num_5>5)) goto salida2;
 	while(num_5!=9){
 		num_5++;
 	}
 	while (num_4!=11){
 		num_4--;
 	}	
 	total=(num_1*num_2+num_1*num_3+num_2-num_3-num_5)/(num_4-num_5);
 	printf("la suma total de la expresion es: %d",total);
 	return 0;
} 	