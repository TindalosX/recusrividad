#include <iostream>

using namespace std;

//Prototipo de función recursiva potencia con exponente entero positivo.
int  potencia(int numero, int num_potencia);

//Prototipo de función recursiva potencia con exponente entero negativo.
double expoNegativo(double numeroB, double expNeg);

int main()
{
	cout<<"Resultado potencia positiva: " << potencia(3, 3)<<endl;
	cout<<endl;
	
	cout<< "Resultado potencia negativa"<<1/ expoNegativo(2, -2);
	
	return 0;
}

int potencia(int numero, int num_potencia)
{
	if(num_potencia == 1)
		return numero;
	else
		return numero * potencia(numero, num_potencia - 1);
}


double expoNegativo(double numeroB, double expNeg)
{
	double potenciaR;
	if (expNeg >= 0)
		return 1;
	else
	{
		potenciaR= (expoNegativo(numeroB, expNeg + 1) * numeroB);
		//resul = 1/ potenciaR;
		return potenciaR;
	}
}
