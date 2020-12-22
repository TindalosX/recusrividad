#include <iostream>

using namespace std;

//Prototipo de función recursiva potencia con exponente entero positivo.
int  potencia(int numero, int num_potencia);

//Prototipo de función recursiva potencia con exponente entero negativo.
double expoNegativo(double numeroB, double expNeg);


double expoNegativo2(int numeroB, int expNeg)

int main()
{
	//Lamado a la función potencia.
	cout<<"Resultado potencia positiva: " << potencia(3, 3)<<endl;
	cout<<endl;
	
	//Lamado a la función expoNeg2.
	cout<< "Resultado potencia negativa"<< 1/ expoNegativo2(2, -2);
	
	return 0;
}

//Función potencia entera positiva.
int potencia(int numero, int num_potencia)
{
	if(num_potencia == 1)
		return numero;
	else
		return numero * potencia(numero, num_potencia - 1);
}

//Función con error(es).
/*double expoNegativo(double numeroB, double expNeg)
{
	if(expNeg > 0)
		exit(1);
	if(expNeg < 0)
		return 1 / ((expoNegativo(numeroB, expNeg + 1) * numeroB));
	else
		return 1;

}*/

//Funcion expoNegativo2 
double expoNegativo2(int numeroB, int expNeg)
{
	if(expNeg > 0)
		exit(1);
	if(expNeg < 0)
		return (expoNegativo(numeroB, expNeg + 1) * numeroB);
	else
		return 1;

}
