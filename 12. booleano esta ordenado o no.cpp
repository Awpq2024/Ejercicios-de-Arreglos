#include <iostream>
using namespace std;

bool esOrdenado(int arreglo[],int n){
	for(int i=0;i<n-1;i++){
		if(arreglo[i]>arreglo[i+1]){
			return false;
		}
	}
	return true;
}

void llenarArregloNumerico(int vector[],int n){
	for(int i=0;i<n;++i){
		cout<<"Ingrese el numero "<<i+1<<": ";
		cin>>vector[i];
	}
	
}

int main(){
	int n;
	cout<<"Ingrese la cantidad de numeros para el arreglo: ";
	cin>>n;
	int arreglo[n];
	llenarArregloNumerico(arreglo,n);
	
	if (esOrdenado(arreglo,n)){
		cout<<"El arreglo esta ordenado";
	}else{
		cout<<"El arreglo no esta ordenado";
	}
	return 0;
}