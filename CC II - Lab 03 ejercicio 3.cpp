/*3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de una persona y por medio de una función calcule su edad en años, meses y días.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
int IngresarDato(int &a, string b){
	cout<<b;
	cin>>a;
	cout<<endl;
	return a;
}
void CalcularEdad(int AA, int MA, int DA, int AN, int MN,int DN, int meses1[], int meses2[]){
	int EdadA, EdadM,EdadD;
	EdadA=AA-AN;
	if (MA<MN){
		
	}/*INCOMPLETO*/
}
int main(int argc, char *argv[]) {
	int meses1[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int meses2[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int Aactual, Mactual, Dactual;
	int Anacimiento, Mnacimiento, Dnacimiento;
	int i,j;
	i=0;
	j=0;
	/*cout<<"Ingrese el año de actual: ";
	cin>>Aactual;
	cout<<endl;*/
	Aactual=IngresarDato(Aactual,"Ingrese el año actual: ");
	if (Aactual%4==0){
		meses1[1]=29;
	}
	while (i<1){
		Mactual=IngresarDato(Mactual,"Ingrese el mes actual: ");
		if (Mactual<=12 && Mactual>0){
			i++;
		}
		else{
			cout<<"Ingrese un valor válido para el mes.";
		}
	}
	i=0;
	while (i<1){
		Dactual=IngresarDato(Dactual,"Ingrese el día actual: ");
		if (Dactual<=meses1[Mactual-1] && Dactual>0){
			i++;
		}
		else{
			cout<<"Ingrese un valor válido para el día.";
		}
	}
	i=0;
	while (i<1){
		Anacimiento=IngresarDato(Anacimiento,"Ingrese el año de nacimiento de la persona: ");
		Mnacimiento=IngresarDato(Mnacimiento,"Ingrese el mes en el que nació la persona: ");
		Dnacimiento=IngresarDato(Dnacimiento,"Ingrese el día en el que nació la persona: ");
		if (Anacimiento%4==0){
			meses2[1]=29;
		}
		while (j<1){
			Mnacimiento=IngresarDato(Mnacimiento,"Ingrese el mes en el que nació la persona: ");
			if (Mnacimiento<=12 && Mnacimiento>0){
				j++;
			}
			else{
				cout<<"Ingrese un valor válido para el mes de nacimiento."<<endl;
			}
		}
		j=0;
		while (j<1){
			Dnacimiento=IngresarDato(Dnacimiento,"Ingrese el día en el que nació la persona: ");
			if (Dnacimiento<=meses2[Mnacimiento-1] && Dnacimiento>0){
				j++;
			}
			else{
				cout<<"Ingrese un valor válido para el día de nacimiento."<<endl;
			}
		}
		if (Aactual<=Anacimiento){
			if (Aactual<Anacimiento){
				i++;
			}
			else if (Aactual==Anacimiento){
				if(Mactual<=Mnacimiento){
					if (Mactual<Mnacimiento){
						i++;
					}
					else if (Mactual==Mnacimiento){
						if (Dactual<=Dnacimiento){
							if (Dactual<Dnacimiento){
								i++;
							}
							else if (Dactual==Dnacimiento){
								i++;
							}
							else{
								cout<<"Ingrese valores válidos: El año actual no puede ser menor que el año de nacimiento)."<<endl;
							}
						}
						else{
							cout<<"Ingrese valores válidos: El año actual no puede ser menor que el año de nacimiento)."<<endl;
						}
					}
					else{
						cout<<"Ingrese valores válidos: El año actual no puede ser menor que el año de nacimiento)."<<endl;
					}
				}
				else{
					cout<<"Ingrese valores válidos: El año actual no puede ser menor que el año de nacimiento)."<<endl;
				}
			}
			else{
				cout<<"Ingrese valores válidos: El año actual no puede ser menor que el año de nacimiento)."<<endl;
			}
		}
		else{
			cout<<"Ingrese valores válidos: El año actual no puede ser menor que el año de nacimiento)."<<endl;
		}
	}
	
	return 0;
}

