#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void elevador();
void menu();
void menu_2();
void limite();

int main(){

	system("color f4");menu();
    return 0;
}

void menu(){
		int piso,actual=1,entrada=0,salir, puerta, salida=0; 
		
	do{
		system("cls"); fflush(stdin);
		printf("\n\t\t Bienvenido al ascensor ");
		printf("\n\t\tDescripcion de los pisos\n");
		printf("\nPiso actual [%i] ",actual);printf("\t\tCantidad de personas[%i] ",entrada);
		printf("\nPiso 3º:Salon de juntas       º");printf("\tPiso 6º: Cancha de futbol sala\n"); 
		printf("\nPiso 2º:Registro del edificio º");printf("\tPiso 5º: Salon de recreacion\n "); 
		printf("\nPiso 1º:Planta baja: Recepcionº");printf("\tPiso 4º: Comedor comunitario\n");
		printf("\nDigite su piso: ");scanf("%i",&piso);
		printf("\nDigite cuantas personas entraron: ");scanf("%i",&entrada);
		printf("\nDigite cuantas personas salieron: ");scanf("%i",&salida);
		
	if(entrada>12){limite(entrada,actual);}
	else{printf("\n\nPara cerrar la puerta digite 1-\"Si\" 2-\"No\": ");scanf("%i",&puerta);
	if(puerta>2){do{system("cls");printf("\nDisculpe pero algo esta obstruyendo la puerta ");
				printf("\n\nPara cerrar la puerta digite 1-\"Si\" 2-\"No\": ");scanf("%i",&puerta);}while(puerta>2);}
	if(puerta==1){printf("\nSi desea salir del programa \nDigite 1-\"Si\" 2-\"No\": ");scanf("%i",&salir);
	if(salir==1){system("cls"); printf("\nGracias por usar el Ascensor");}   
	else{elevador(piso, actual, entrada, puerta, salir, salida);}}
	else{menu_2(actual,entrada,piso,puerta,salir, salida);}}}while(salir>1);
		
}
 void menu_2(int actual, int entrada, int piso, int puerta, int salir, int salida){
 			int entrada_2;
	 do{
		system("cls"); fflush(stdin);
		printf("\n\t\t Bienvenido al ascensor ");
		printf("\n\t\tDescripcion de los pisos\n");
		printf("\nPiso actual [%i] ",actual);printf("\t\tCantidad de personas[%i] ",entrada);
		printf("\nPiso 3º:Salon de juntas       º");printf("\tPiso 6º: Cancha de futbol sala\n"); 
		printf("\nPiso 2º:Registro del edificio º");printf("\tPiso 5º: Salon de recreacion\n "); 
		printf("\nPiso 1º:Planta baja: Recepcionº");printf("\tPiso 4º: Comedor comunitario\n");
		printf("\nDigite su piso: ");scanf("%i",&piso);
		printf("\nDigite cuantas personas entraron: ");scanf("%i",&entrada_2);
		printf("\nDigite cuantas personas salieron: ");scanf("%i",&salida);entrada=(entrada+entrada_2)-salida;
		
	if(entrada>12){limite(entrada,actual);
	}else{printf("\n\nPara cerrar la puerta digite 1-\"Si\" 2-\"No\": ");scanf("%i",&puerta);
	if(puerta>2){ do{system("cls");printf("\nDisculpe pero algo esta obstruyendo la puerta ");
		printf("\n\nPara cerrar la puerta digite 1-\"Si\" 2-\"No\": ");scanf("%i",&puerta); }while(puerta>2);}
	if(puerta==1){printf("\nSi desea salir del programa \nDigite 1-\"Si\" 2-\"No\":   "); scanf("%i",&salir);
	if(salir==1){printf("\nGracias por usar el Asecensor");
	}else{elevador(piso, actual, entrada, puerta, salir, salida);}
	}else{menu_2(actual,entrada,piso,puerta,salir, salida);}
	}}while(salir>1);
 }
void limite(int entrada,int actual){
	int salida; int piso;
		do{
			printf("\nDisculpe pero el ascensor tiene un limite de 12 personas");
			printf("\nDigite cuantas personas salieron: ");scanf("%i",&salida);
			entrada= entrada-salida;
			}while(entrada>12);
			printf("\nDigite su piso: ");scanf("%i",&piso);
			elevador(piso,actual, entrada);
			
}

void elevador(int piso, int actual,int entrada, int puerta, int salir, int salida){
	int i; i=0;  int entrada_2;
		
		if(piso>6){ system("cls"); printf("\nDisculpe pero ese piso no esta disponible");printf("\a");sleep(2); 
	 do{
		system("cls"); fflush(stdin);
		printf("\n\t\t Bienvenido al ascensor ");
		printf("\n\t\tDescripcion de los pisos\n");
		printf("\nPiso actual [%i] ",actual);printf("\t\tCantidad de personas[%i] ",entrada);
		printf("\nPiso 3º:Salon de juntas       º");printf("\tPiso 6º: Cancha de futbol sala\n"); 
		printf("\nPiso 2º:Registro del edificio º");printf("\tPiso 5º: Salon de creacion\n "); 
		printf("\nPiso 1º:Planta baja: Recepcionº");printf("\tPiso 4º: Comedor comunitario\n");
		printf("\nDigite su piso: ");scanf("%i",&piso);
		printf("\nDigite cuantas personas entraron: ");scanf("%i",&entrada_2);
		printf("\nDigite cuantas personas salieron: ");scanf("%i",&salida);entrada=(entrada+entrada_2)-salida;
		
	if(entrada>12){limite(entrada,actual);
	}else{printf("\n\nPara cerrar la puerta digite 1-\"Si\" 2-\"No\": ");scanf("%i",&puerta);
	if(puerta>2){ do{system("cls");printf("\nDisculpe pero algo esta obstruyendo la puerta ");
		printf("\n\nPara cerrar la puerta digite 1-\"Si\" 2-\"No\": ");scanf("%i",&puerta); }while(puerta>2);}
	if(puerta==1){printf("\nSi desea salir del programa \nDigite 1-\"Si\" 2-\"No\":   "); scanf("%i",&salir);
	if(salir==1){printf("\nGracias por usar el Asecensor");exit(0);
	}else{elevador(piso, actual, entrada, puerta, salir, salida);}
	}else if(puerta==2){menu_2(actual,entrada,piso,puerta,salir, salida);}
	}}while(salir==1);
		
		}else{if((piso<1)||(piso>6)){system("cls");printf("\a");printf("\a");sleep(2);system("cls");}
            
	fflush(stdin);
	if(piso==actual){system("cls");printf("Error de piso \n");printf("\a\a");sleep(1);system("cls");
	do{
		system("cls"); fflush(stdin);
		printf("\n\t\t Bienvenido al ascensor ");
		printf("\n\t\tDescripcion de los pisos\n");
		printf("\nPiso actual [%i] ",actual);printf("\t\tCantidad de personas[%i] ",entrada);
		printf("\nPiso 3º:Salon de juntas       º");printf("\tPiso 6º: Cancha de futbol sala\n"); 
		printf("\nPiso 2º:Registro del edificio º");printf("\tPiso 5º: Salon de creacion\n "); 
		printf("\nPiso 1º:Planta baja: Recepcionº");printf("\tPiso 4º: Comedor comunitario\n");
		printf("\nDigite su piso: ");scanf("%i",&piso);
		printf("\nDigite cuantas personas entraron: ");scanf("%i",&entrada_2);
		printf("\nDigite cuantas personas salieron: ");scanf("%i",&salida);entrada=(entrada+entrada_2)-salida;
		
	if(entrada>12){limite(entrada,actual);
	}else{printf("\n\nPara cerrar la puerta digite 1-\"Si\" 2-\"No\": ");scanf("%i",&puerta);
	if(puerta>2){ do{system("cls");printf("\nDisculpe pero algo esta obstruyendo la puerta ");
		printf("\n\nPara cerrar la puerta digite 1-\"Si\" 2-\"No\": ");scanf("%i",&puerta); }while(puerta>2);}
	if(puerta==1){printf("\nSi desea salir del programa \nDigite 1-\"Si\" 2-\"No\":   "); scanf("%i",&salir);
	if(salir==1){printf("\nGracias por usar el Asecensor");exit(0);
	}else{elevador(piso, actual, entrada, puerta, salir, salida);}
	}else if(puerta==2){menu_2(actual,entrada,piso,puerta,salir, salida);}
	}}while(salir==1);}}
	
    if (piso>actual){system("cls");for(i=actual;i<=piso;i++){printf("Voy Subiendo");printf("\nPiso: [%i] ",i);
					printf("\a");sleep(2);system("cls");}actual=i-1;sleep(1);system("cls");}
					
	if (piso<actual){system("cls");for(i=actual;i>=piso;i--){printf("Voy Bajando");printf("\nPiso: [%i] ",i);printf("\a");sleep(2);system("cls");}
            		actual=i+1;sleep(1);system("cls");}
            		
       if(((i+1)==piso)||((i-1)==piso)){printf("A llegado a su destino ");sleep(2);system("cls");}
	   do{
		system("cls"); fflush(stdin);
		printf("\n\t\t Bienvenido al ascensor ");
		printf("\n\t\tDescripcion de los pisos\n");
		printf("\nPiso actual [%i] ",actual);printf("\t\tCantidad de personas[%i] ",entrada);
		printf("\nPiso 3º:Salon de juntas       º");printf("\tPiso 6º: Cancha de futbol sala\n"); 
		printf("\nPiso 2º:Registro del edificio º");printf("\tPiso 5º: Salon de creacion\n "); 
		printf("\nPiso 1º:Planta baja: Recepcionº");printf("\tPiso 4º: Comedor comunitario\n");
		printf("\nDigite su piso: ");scanf("%i",&piso);
		printf("\nDigite cuantas personas entraron: ");scanf("%i",&entrada_2);
		printf("\nDigite cuantas personas salieron: ");scanf("%i",&salida);entrada=(entrada+entrada_2)-salida;
		
	if(entrada>12){limite(entrada,actual);
	}else{printf("\n\nPara cerrar la puerta digite 1-\"Si\" 2-\"No\": ");scanf("%i",&puerta);
	if(puerta>2){ do{system("cls");printf("\nDisculpe pero algo esta obstruyendo la puerta ");
		printf("\n\nPara cerrar la puerta digite 1-\"Si\" 2-\"No\": ");scanf("%i",&puerta); }while(puerta>2);}
	if(puerta==1){printf("\nSi desea salir del programa \nDigite 1-\"Si\" 2-\"No\":   "); scanf("%i",&salir);
	if(salir==1){printf("\nGracias por usar el Asecensor");exit(0);
	}else{elevador(piso, actual, entrada, puerta, salir, salida);}
	}else if(puerta==2){menu_2(actual,entrada,piso,puerta,salir, salida);}
	}}while(salir==1);
  
}


