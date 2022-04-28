/*1. Hacer un programa que sin usar la función pow(), pero por medio de una función, calcule la potencia de un número (ambos números ingresados por teclado).*/
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
	cout<<"Ingrese un número: ";
	cin>>num;
	cout<<endl;
	cout<<"Ingrese la potencia del número: ";
	cin>>potencia;
	resultado=Potencia(num,potencia);
	cout<<"El número "<<num<<" elevado a la potencia "<<potencia<<" es: "<<resultado;
	return 0;
}

