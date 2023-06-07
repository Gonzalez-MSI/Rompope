#include <stdio.h>
#include "lib/colors.h"
#define DASH "-----------------------------------------------------------------------------------------------------------------"
#define Rightarrow " --> "

void Mensaje();

int main(){

	int a, b, c;
	float d = 0, e = 1, f = 2;
	a = 14;
	b = 3;
	c = 2;

	// ----------------------------------------------------------------------------------------//
	// Notas: 																			                                           //
	//	1. Recordar que al dividir enteros, se desprecia la parte decimal.  		       	       //
	//	2. El operador right shift (>>) es lo mismo que dividir un numero entre 2^n .          //
	//	   Ejemplo: Si se tiene a >> b, el numero 'a' sera divido por 2^b, o sea, a/2^b   	   //
	//	   									   								-			                                           //
	//	3. El operador left shift (<<) es lo mismo que mupltiplicar un numero por 2^n .   	   //
	//	   Ejemplo: Si se tiene a << b, el numero 'a' sera multiplicado por 2^b, o sea, a*2^b  //
	// ----------------------------------------------------------------------------------------//

	//Ignorar ---------------------------------------------------------------------------------------------
	puts(DASH);
	printf(BHBLU "d = a >> b/c" Rightarrow "d = 14 / (2)^{3/2}" Rightarrow "d = 14/2" Rightarrow " " reset);
	//Ignorar ---------------------------------------------------------------------------------------------

	// ! Analizar ! //
	d = a >> b/c;
	printf("d = %f\n\n", d);
	


	//Ignorar ---------------------------------------------------------------------------------------------
	printf(BHBLU"[e += a ? ++d: d++]" Rightarrow "[e = e + a ? ++d: d++]" Rightarrow "[e  = 1 + ++d]" Rightarrow "[e = 1 + 7]" Rightarrow " "reset);
	//Ignorar ---------------------------------------------------------------------------------------------

	// ! Analizar ! //
	e += a ? ++d: d++;
	printf("e = %f\n\n", e);

	// Ignorar ---------------------------------------------------------------------------------------------
	Mensaje();
	printf(BHBLU "f = a * b + d" Rightarrow "f = 14 * 3 + 8" Rightarrow "f = 42 + 8" Rightarrow "f = 50\n" reset);
	// Ignorar ---------------------------------------------------------------------------------------------

	// ! Analizar ! //
	f = a * b + d;

	//Ignorar ---------------------------------------------------------------------------------------------
	puts(DASH);
	//Ignorar ---------------------------------------------------------------------------------------------

	// ! Analizar ! //
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %f\n", d);
	printf("e = %f\n", e);
	printf("f = %f\n", f);

	return 0;
}


void Mensaje(){

	puts(DASH);
	puts(BHGRN "Nota: la operacion ++d (Pre-incremento) aplica un incremento de 1, ");
	puts("sin embargo, no es asignado en el momento");
	puts("y el valor con incremento solo sera utilizado en la proxima operacion.\n ");
	puts(BHMAG "Valor de d en el momento del pre-incremento (d++): " reset "7" BHMAG " | Valor de d para operaciones posteriores a (d++): " reset "8");
	puts(DASH);
}
