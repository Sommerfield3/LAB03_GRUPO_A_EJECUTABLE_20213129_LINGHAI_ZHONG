/*1. Hacer un programa que sin usar la funci�n pow(), pero por medio de una funci�n, calcule la potencia de un n�mero (ambos n�meros ingresados por teclado).*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
float Potencia(float num, int x){
	int pot=num;
	for (int i=0;i<(x-1);i++){
		pot=pot*num;
	}
	return pot;
}
int main(int argc, char *argv[]) {
	float num, resultado;
	int potencia;
	resultado=0;
	cout<<"Ingrese un n�mero: ";
	cin>>num;
	cout<<endl;
	cout<<"Ingrese la potencia del n�mero: ";
	cin>>potencia;
	resultado=Potencia(num,potencia);
	cout<<"El n�mero "<<num<<" elevado a la potencia "<<potencia<<" es: "<<resultado;
	return 0;
}

