/*4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
int ContarPrimos(int x, int y){
	int contador=0;
	for (int i=(x+1);i<y;i++){
		int z=0;
		for (int j=1;j<=i;j++){
			if (i%j==0){
				z++;
			}
		}
		if (z==2){
			contador++;
		}
	}
	return contador;
}
void Primos(int x, int y, int *lista){
	int q=0;
	for (int i=(x+1);i<y;i++){
		int z=0;
		for (int j=1;j<=i;j++){
			if (i%j==0){
				z++;
			}
		}
		if (z==2){
			lista[q]=i;
			q++;
		}
	}
}
int main(int argc, char *argv[]) {
	int A,i;
	i=0;
	while (i<1){
		cout<<"Ingrese el valor de A (debe ser mayor que 1): ";
		cin>>A;
		if (A>1){
			i++;
		}
		else{
			cout<<"Ingrese un número válido."<<endl;
		}
	}
	int contador=ContarPrimos(1,A);
	if (contador>0){
		int *array = new int[contador];
		Primos(1,A,array);
		cout<<"La lista de números primos es: ";
		for (int i=0;i<contador;i++){
			if (i==(contador-1)){
				cout<<array[i];
			}
			else{
				cout<<array[i]<<", ";
			}
		}
	}
	else{
		cout<<"No hay números primos comprendidos entre ambos números"<<endl;
	}
	return 0;
}

