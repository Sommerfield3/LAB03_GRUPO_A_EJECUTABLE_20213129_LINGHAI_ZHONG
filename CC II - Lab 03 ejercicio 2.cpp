/*2. Hacer un programa que lea por teclado un a�o, calcule y muestre si es bisiesto. Para realizar el c�lculo utiliza una funci�n llamada bisiesto. La funci�n bisiesto recibe el a�o le�do por teclado, comprueba si es o no bisiesto.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
bool bisiesto(int year){/*Funci�n que COMPRUEBA si el a�o ingresado es bisiesto.*/
	if (year%4==0){
		return true;
	}
	else{
		return false;
	}
}
void imprimirA(int year, bool verdfal){
	if (verdfal==1){
		cout<<"El a�o "<<year<<" es bisiesto.";
	}
	else{
		cout<<"El a�o "<<year<<" no es bisiesto.";
	}
}
int main(int argc, char *argv[]) {
	int year;
	bool verdfal;
	cout<<"Ingrese el a�o a procesar: ";
	cin>>year;
	verdfal=bisiesto(year);
	imprimirA(year,verdfal);
	return 0;
}

