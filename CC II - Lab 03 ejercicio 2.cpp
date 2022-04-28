/*2. Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el año leído por teclado, comprueba si es o no bisiesto.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
bool bisiesto(int year){/*Función que COMPRUEBA si el año ingresado es bisiesto.*/
	if (year%4==0){
		return true;
	}
	else{
		return false;
	}
}
void imprimirA(int year, bool verdfal){
	if (verdfal==1){
		cout<<"El año "<<year<<" es bisiesto.";
	}
	else{
		cout<<"El año "<<year<<" no es bisiesto.";
	}
}
int main(int argc, char *argv[]) {
	int year;
	bool verdfal;
	cout<<"Ingrese el año a procesar: ";
	cin>>year;
	verdfal=bisiesto(year);
	imprimirA(year,verdfal);
	return 0;
}

