#include <iostream>
using namespace std;

int* crearArreglo(int n){
	int* arreglo= new int[n];
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero "<<i+1<<": ";
		cin>>arreglo[i];
	}
	return arreglo;	
}
void DatosDelMayorYmenor(int arreglo[],int n,int &mayor,int &menor,int &repeticionesMayor,int &repeticionesMenor){
	mayor=arreglo[0];
	menor=arreglo[0];
	repeticionesMayor=1;
	repeticionesMenor=1;
	
	for(int i=1;i<n;i++){
		if(arreglo[i]>mayor){
			mayor=arreglo[i];
			repeticionesMayor=1;
		}else if(arreglo[i]<menor){
			menor=arreglo[i];
			repeticionesMenor=1;
		}else if(arreglo[i]==mayor){
			repeticionesMayor++;
		}else if(arreglo[i]==menor){
			repeticionesMenor++;
		}
	}
}

int main(){
	int n;
	int mayor,menor,repeticionesMayor,repeticionesMenor;
	cout<<"Ingrese la cantidad de numeros a ingresar: ";
	cin>>n;

	int* arregloNumerico=crearArreglo(n);
	
	DatosDelMayorYmenor(arregloNumerico,n,mayor,menor,repeticionesMayor,repeticionesMenor);
	cout<<"El numero mayor es "<<mayor<<" y se repitio "<<repeticionesMayor<<" veces"<<endl;
	cout<<"El numero menor es "<<menor<<" y se repitio "<<repeticionesMenor<<" veces"<<endl;
	
	return 0;
}