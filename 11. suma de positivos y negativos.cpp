#include <iostream>
using namespace std;

void sumaPositivosNegativos(int vector[],int n,int &sumaPositivos,int &sumaNegativos){
	sumaPositivos=0;
	sumaNegativos=0;
	for(int i=0;i<n;i++){
		if(vector[i]>0){
			sumaPositivos+=vector[i];
		}else if(vector[i]<0){
			sumaNegativos+=vector[i];
		}
	}
}
void llenarArregloNumerico(int vector[],int n){
	for(int i=0;i<n;++i){
		cout<<"Ingrese el numero "<<i+1<<": ";
		cin>>vector[i];
	}
	
}

int main(){
	int n;
	int sumaPositivos, sumaNegativos;
	cout<<"Ingrese la cantidad de numeros para el vector: ";
	cin>>n;
	int vector[n];
	llenarArregloNumerico(vector,n);
    sumaPositivosNegativos(vector,n,sumaPositivos,sumaNegativos);
    
    cout<<"\nLa suma de los numeros positivos es: "<<sumaPositivos;
	cout<<"\nLa suma de los numeros negativos es: "<<sumaNegativos;
	return 0;
}