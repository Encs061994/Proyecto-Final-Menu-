// Trabajo final Algoritmos
//vamos a poner las librerías que utilizaremos y se definen las constantes a usarse
#include <stdio.h>
#include <math.h>
//Estas son las constantes que se ocuparan en las matrices
#define S 3
#define T 3
//Al poner de esta forma las funciones se tiene un mejor orden para evitar que el programa colapse
int Triang(int x);
int Cuad(int x);
int Trap(int x);
int Conv(int x);
void leer_matriz(int A[S][T], int F, int C);
void imprimir_matriz(int A[S][T],int F,int C);
void multiplicar(int A[S][T],int B[S][T],int Re[S][T],int f1,int cf,int c2);
int matriz_uno(int x);
int matriz_dos(int x);
int transpuesta(int A[3][3],int B[3][3],int espacio);
int matriz_tres(int x);
int factorial(int x);
int Salario(int x);
//En el main se pondra un menu en donde se utilizara la funcion Do-while y Switch-case
int main() {
	//Se pondran las variables a utilizar
	int selec; int val;
	do
	{
		
		printf("\n Digita que operacion deseas realizar:\n1)Triangulo.c\n2)Cuadrado.c\n3)Trapecio.c\n4)Conversiones\n5)Suma de matriz\n6)Multiplicacion de matriz\n7)Matriz Transpuesta de 3x3\n8)Factorial \n9)Salario\n10)Salir\n");
		//Se le solicita al usuario elegir la opcion deseada
		scanf("%i",&selec);
	
		switch (selec)
		{
		case 1:
			//se solicita la funcion Triang para poder obtener el area y perimetro
			val=Triang(selec);
			break;
		case 2:
			//se solicita la funcion Cuad para el area y perimetro
			val=Cuad(selec);
			break;
		case 3:
			// se va a solicitar la funcion Trap para que nos de el area y el perimetro
			val=Trap(selec);
			break;
		case 4:
			//se solicita la funcion Conv para poder hacer las converciones de celcius, farenheit y kelvin
			val=Conv(selec);
			break;
		case 5:
			//se solicita la funcion matriz_uno la cual nos dara la suma de matriz
			val=matriz_uno(selec);
			break;
		case 6:
			//se solicita la funcion matriz_dos la cual hará la multiplicación de la matriz
			val=matriz_dos(selec);
			break;	
		case 7:
			//se solicita la funcion matriz_tres la cual hará la matriz transpuesta de 3x3
			val=matriz_tres(selec);
			break;	
		case 8:
			//se solicita la funcion factorial la cual nos dara el factorial de un numero 
			val=factorial(selec);
			break;
		case 9:
			//se solicita la funcion salario la  cual nos dara el incremento con el bono y en caso de no haber bono nos dara el sueldo normal
			val=Salario(selec);
			break;	
		case 10:
			//
			printf("Hasta la proxima\n");
			break;		
		default:
			printf("Digita de nuevo, no existe la opcion\n");
			break;
		}
	}while(selec!=9);
	
	return 0;
}

//Se crea la funcion triangulo para sacar su area y perimetro
int Triang(int x) 
{
	//Declaramos las variables a utilizar tanto para datos que se ocupan como para los resultados
	int ladoA,ladoB,ladoC;int altura; float Area;float Perimetro;
	//Declaramos la variable que nos va a dar la opcion para utilizar el Switch-case y el Do-while
	char selec;
	//ponemos el Do-while 
	do
	{
		//Se  solicita que se digite la opción para lo que se desea saber y que se ponga la opcion en letra mayuscula porque si no te manda error
		printf("Digita que necesitas obtener:\n A)Area de el triangulo\n B)Perimetro de un triangulo\n C)Regresar al menu\n");
		scanf("%c",&selec);

		switch (selec)
		{
			//con este case nos va arrojar el area del triangulo
		case 'A':
			printf("Digita la base del triangulo: \n");
			scanf("%i",&ladoA);
			printf("Digita la altura del triangulo: \n");
			scanf("%i",&altura);
			Area=((ladoA*altura)/2);
			printf("El resultado es: %f\n", Area);

			break;
			//Aqui este case nos dara el perimetro del triangulo digitando lo que pide
		case 'B':
			printf("Digite el lado A del triangulo: \n");
			scanf("%i",&ladoA);
			printf("Digite el lado B del triangulo: \n");
			scanf("%i",&ladoB);
			printf("Digite el lado C del triangulo: \n");
			scanf("%i",&ladoC);
			Perimetro=ladoA+ladoB+ladoC;
			printf("El resultado es: %f\n", Perimetro);
			break;
			//Nos muestra la salida de la funcion 
		case 'C':
			printf("Hasta la proxima  :)\n");
			break;
			//En caso de que no se de una opción valida, da este mensaje de error
		default:
			printf("\n La opcion no es la correcta, vuelva a intentar\n");
			break;
		}
	}while (selec!='C');
	return 0;
}

//Se solicita la funcion del cuadrado para que nos de el area y el perimetro
int Cuad(int x)
 {
	//aqui tenemos las variables a ocupar 
	int ladoA,ladoB;float Area;float Perimetro;int selec;
	do
	{
		//Aqui vas a poner la funcion que solicites dependiendo el caso y te dara el valor 
		printf("Digita que deseas obtener:\n1)Area del Cuadrado\n2)Perimetro del cuadrado\n3)Area de un rectangulo\n4)Perimetro del rectangulo\n5)Regresar al menu\n");
		scanf("%i",&selec);
		switch (selec)
		{
			//Este caso da el area del cuadrado
		case 1:
			printf("Digita el lado del cuadrado \n");
			scanf("%i",&ladoA);
			Area=ladoA*ladoA;
			printf("El resultado del Area es: %f\n", Area);
			break;
			//Este caso da el perimetro del cuadrado
		case 2:
			printf("Digite el lado del cuadrado \n");
			scanf("%i",&ladoA);
			Perimetro=ladoA*4;
			printf("El resultado del perimetro es: %f\n", Perimetro);
			break;
			//Este caso da el area de un rectángulo
		case 3:
			printf("Digita el lado menor del rectangulo \n");
			scanf("%i",&ladoA);
			printf("Digita el lado mayor del rectangulo \n");
			scanf("%i",&ladoB);
			Area=ladoA*ladoB;
			printf("El resultado del Area es: %f\n",Area);
			break;
			//Este caso da el perimetro de un rectángulo
		case 4:
			printf("Digita el lado menor del rectangulo\n");
			scanf("%i",&ladoA);
			printf("Digita el lado mayor del rectangulo \n");
			scanf("%i",&ladoB);
			Perimetro=((ladoA*2)+(ladoB*2));
			printf("El resultado del perimetro es: %f\n",Perimetro);
			break;
			//Caso de salida
		case 5:
			printf("Hasta pronto :)\n");
			break;
			//Mensaje de error
		default:
			printf("\n Digita nuevamente, la opcion no es la correcta\n");
			break;
		}
	}while(selec!=5);
	return 0;
}

//se muestra el area y el perimetro del trapecio pero primero las variables que utilizaremos esta vez 
int Trap(int x){ 
int lado_menor,lado_Mayor,base_menor,base_Mayor,altura;float Area;float Perimetro; int selec;
	printf("Digita que deseas obtener:\n A)Area del trapecio\nB)Perimetro de un trapecio\nC)Regresar al menu\n");
		scanf("%c",&selec);
		switch (selec)
		{
			//Esta opcion da al usuario el area del trapecio
		case 'A':
			printf("Digita la base Mayor: \n");
			scanf("%i",& base_Mayor);
			printf("Dgita la base_menor: \n");
			scanf("%i",& base_menor);
			printf("Dgita la altura: \n");
			scanf("%i",& altura);
			printf("Dgita el lado_Mayor: \n");
			scanf("%i",& lado_Mayor);
			printf("Dgita el lado_menor: \n");
			scanf("%i",& lado_menor);
			Area=((base_Mayor+base_menor*altura)/2);
			printf("El area del trapecio es: %f\n", Area);

			break;
			//Esta opcion da al usuario el perimetro del trapecio  
		case 'B':
			printf("Digita el base Mayor del trapecio: \n");
			scanf("%i",&base_Mayor);
			printf("Digita el base menor del trapecio: \n");
			scanf("%i",&base_menor);
			printf("Digita el lado Mayor del trapecio: \n");
			scanf("%i",&lado_Mayor);
			printf("Digita el lado menor del trapecio: \n");
			scanf("%i",&lado_menor);
			Perimetro=((base_Mayor+base_menor+lado_Mayor+lado_menor));
			printf("El perimetro es: %f\n", Perimetro);
			break;
			//La salida de la función
		case 'C':
			printf("Regresa pronto :)\n");
			break;
			//En caso de que no se de una opción valida, da este mensaje de error
		default:
			printf("\nLa opcion no es la correcta, vuelva a intentar\n");
			break;
		}
	while (selec!='C');
	
	return 0;

}


//Se crea se aplicara la funcion de conversion c
int Conv(int x)
 {
 	//se declaran las variabales nuevamente a utilizar
	float gradosC,gradosF,gradosK;	float conversionC,conversionF,conversionK;	int selec;
	do
	{
		//Se le solicita al usuario que elija la opción con numero, de lo contrario mandará mensaje de error
		printf("Digita  que deseas obtener:\n1)Celcius a Kelvin y Farenheit\n2)Kelvin a Celcius y Farenheit\n3)Farenheit a Celcius y kelvin\n4)Regresar al menu\n");
		scanf("%i",&selec);
		switch(selec)
		{
			//Esta opcion da la conversión de grados celcius a farenheit y a grados kelvin
		case 1:
			printf("Digita los grados \n");
			scanf("%f",&gradosC);
			conversionF=(gradosC*(1.8))+32;
			conversionK=gradosC+ 273.15;
			printf("Los grados en Farenheit son: %f\n", conversionF);
			printf("Los grados en Kelvin son: %f\n", conversionK);
			break;
			//Esta opcion da la conversión de grados farenheit a celcius y grados kelvin
		case 2:
			printf("Digita los grados \n");
			scanf("%f",&gradosF);
			conversionC=(gradosF-32)*(.555);
			conversionK=((.555)*(gradosF-32))+273.15;
			printf("Los grados en Kelvin son: %f\n", conversionK);
			printf("Los grados en Celcius son: %f\n", conversionC);
			break;
			//Esta opcion da la conversión de grados kelvin a farenheit y grados celcius
		case 3:
			printf("Digita los grados \n");
			scanf("%f",&gradosK);
			conversionC=gradosK-273.15;
			conversionF=((gradosK-273.15)*(1.8))+32;
			printf("Los grados en Celcius son: %f\n", conversionC);
			printf("Los grados en Farenheit son: %f\n", conversionF);
			break;
			//se presenta el mensaje de salida 
		case 4:
			printf("Hasta Pronto :)\n");
			break;
			//Mensaje que manda en caso de error
		default:
			printf("\n La opcion no es la correcta, vuelva a intentar\n");
			break;
		}

	}while(selec!=4);
	return 0;
}

//Se crea la funcion de matriz uno que da la suma de dos matrices
int matriz_uno(int x)
{
	//Se ponen las variables a utilizar así como los arreglos bidimensionales
	int F,C,i,j;
	int matrizuno[S][T],matrizdos[S][T];
	int matrizresultado[S][T];
	//se digitan el número de Filas y de Columnas
	printf("Digita el numero de filas\n");
	scanf("%i",&F);
	printf("Digita el numero de las columnas\n");
	scanf("%i",&C);
	//Se solicita que se ingresen los datos de la primer matriz
	printf("Primer matriz\n");
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&matrizuno[i][j]);
			//fflush(stdin);
		}
	}
	//Se solicita que se ingresen los datos de la segunda matriz
	printf("Segunda matriz\n");
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&matrizdos[i][j]);
			//fflush(stdin);
		}
	}
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			matrizresultado[i][j]=matrizuno[i][j]+matrizdos[i][j];
		}
	}
	//Aqui te dara el resusltado de la suma
	printf("Matriz resultado\n");
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%i\n",matrizresultado[i][j]);
		}
		printf("\n");
	}


	return 0;
}

//La funcion leer_matriz se utilizará en las funciones matriz_dos y matriz_tres
void leer_matriz(int A[S][T], int F, int C)
{
	//Al obtener los datos de entrada tanto las filas y columnas y la matriz se procede a pedir los datos de cada elemento de la matriz
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%i][%i]\n",i,j );
			scanf("%i",&A[i][j]);
		}
	}
}
//La funcion imprimir_matriz se utilizará en las funciones matriz_dos y matriz_tres
void imprimir_matriz(int A[S][T],int F,int C)
{
	//Al obtener los datos de entrada tanto las filas y columnas y la matriz se procede a Imprimir los datos de cada elemento de la matriz
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%i\n",A[i][j]);
		}
		printf("\n");
	}
}
//La funcion mltiplicas se utilizará en la funcion matriz_dos
void multiplicar(int A[S][T],int B[S][T],int Re[S][T],int ij,int jk,int ik)
{
	int i,j,k;
	//Limpiar matriz para que al momento de hacer la operación no tenga basura que pueda interferir
	for(i=0;i<ij;i++)
	{
		for (j = 0; j < jk; j++)
		{
			Re[i][j]=0;
		}
	}
	//Se utilizan 3 for ya que al multiplicar una funcion ij por una jk, la matriz debe de recorrer estos elementos 
	for(i=0;i<ij;i++)
	{
		for (j = 0; j<jk; j++)
		{
			for (k = 0; k < ik; k++)
				{
					Re[i][k]= Re[i][k]+A[i][j]*B[j][k];
				}	
		}
	}
}
//Se crea la funcion de matriz_dos que da la suma de dos matrices
int matriz_dos(int x) 
{
	//Se declaran las variables y las matrices
	int F,C,P,i,j;
	int matrizuno[S][T],matrizdos[S][T];
	int matrizRe[S][T];
	//Se solicitan las filas y columnas de la primera matriz
	printf("Primer matriz\n");
	printf("Digita el numero de filas\n");
	scanf("%i",&F);
	printf("Digita el numero de las columnas\n");
	scanf("%i",&C);
	//Aqui se solicita que nos de la funcion "leer_matriz"
	leer_matriz(matrizuno,F,C);
	printf("Segunda matriz\n");
	printf("Para que la multiplicaciónse efectúe, las filas de la segunda matriz deben de ser igual a las columnas de la primera\n");
	printf("ingrese el numero de las columnas\n");
	//ya que para la multiplicación se efectue las columnas de la primera matriz deben de coincidir con las filas de la segunda matriz solo se pide las columnas de la segunda matriz
	scanf("%d",&P);
	//Se invoca a la funcion "leer_matriz"
	leer_matriz(matrizdos,C,P);
	//Se invoca a la funcion "multiplicar" para multiplicar las dos matrices
	multiplicar(matrizuno,matrizdos,matrizRe,F,C,P);
	printf("La matriz uno es:\n");
	//Se invoca a la funcion "imprimir_matriz"
	imprimir_matriz(matrizuno,F,C);
	printf("La matriz dos es: \n");
	//Se invoca a la funcion "imprimir_matriz"
	imprimir_matriz(matrizdos,C,P);
	printf("Matriz resultado\n");
	//Se invoca a la funcion "imprimir_matriz"
	imprimir_matriz(matrizRe,F,P);
	return 0;
}

//Se crea la funcion transpuesta para usarse en la funcion "matriz_tres" que tiene como datos de entrada dos matrices 
int transpuesta(int A[3][3],int B[3][3],int espacio)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for (j = 0; j < 3; j++)
		{
			//Se cambian los datos de las filas de la matriz A y se pasan a las columnas de la matriz B
			B[j][i]=A[i][j];
		}
	}
}
//Se crea la funcion de matriz_tres que crea la transpuesta de una matriz que ingresas
int matriz_tres(int x)
 {
 	//Se declaran las variables y las matrices
	int A[3][3],B[3][3],i,j;
	printf("Este programa da el resultado de una matriz transpuesta de 3x3\n");
	printf("Digita la matriz:\n");
	//se le pide a la funcion "leer_matriz"
    leer_matriz(A,3,3);
	//Se le pide a la funcion "transpuesta" para sacar la transpuesta de la matriz A
	transpuesta(A,B,3);
	printf("La matriz original es:\n");
	//Se digita la funcion "imprimir_matriz"
	imprimir_matriz(A,3,3);
	printf("La matriz transpuesta es:\n");
	//Se vulve a digitar la funcion "imprimir_matriz"
	imprimir_matriz(B,3,3);
	return 0;
}
//Se crea la funcion factorial que da el factorial de algún numero ingresado
int factorial(int x) 
{
	//Se crean las variables a emplearse en las funciones
	int NumFac; int ReFac=1;
	int i;
	printf("Digita el numero para sacar el factorial\n");
	scanf("%i",&NumFac);
	//Si el numero ingresado es 0, el factorial es 1
	if(NumFac==0)
	{
		printf("\n El factorial es 1");
	}else if(NumFac<0)
		{
			//Si el numero ingresado es menor a 0, Sale este mensaje de error y el programa termina
			printf("\n Este programa no da el factorial de numeros negativos\n");
		}else
		{
			for ( i = 1; i <= NumFac; i++)
			{
				ReFac=ReFac*i;
			}
			printf("\n  El resultado del factorial solicitado es de %i es: %i\n",NumFac,ReFac );
		}
	
	return 0;
}
//Aqui se presenta un calculo de sun salario 
int Salario(int x) 
{
	// variables a utilizar en esta ocasion 
	int horas; float salario,salarioDia,salarioIva,salarioIva2,salarioMensual,salarioExt;
	//Se Digita el sueldo y horas laboradas
	printf("Digita tu sueldo por hora:");
	scanf("%f",&salario);
	printf("\n Digita tus horas laboradas al dia");
	scanf("%i",&horas);
	//se va a arrojar el calculo del sueldo diario
	salarioDia=salario*horas;
	printf("\n Tu sueldo diario es: %f",salarioDia);
	//se va a arrojar el calculo del sueldo con el 16%
	salarioIva= salarioDia*1.16;
	printf("\n Tu Sueldo diario con el 16 de IVA es: %f",salarioIva);
	//Aqui se va a arrojar el calculo del sueldo sin el 12%
	salarioIva2=salarioIva*.88;
	printf("\n Tu salario diario menos el 12 de IVA es: %f",salarioIva2);
	//Aqui el sueldo se realizara por 20 dias
	salarioMensual=salarioIva2*20;
	printf("\n Tu salario mensual es: %f", salarioMensual);
	//si el sueldo del trabjador es menor a 10000 se le suma el 5%
	if(salarioMensual<10000)
	{
		salarioExt=salarioMensual*1.05;
		printf("\n Te ganaste un bono del 5 por ciento y tu sueldo total es de: %f",salarioExt);
	}else
		//si no hubo ningun bono, solo aparecera el sueldo
		printf("\n Tu sueldo es");
	return 0;
}

