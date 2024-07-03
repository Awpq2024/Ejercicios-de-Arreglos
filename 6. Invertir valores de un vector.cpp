#include <iostream>
using namespace std;

void calcularSumas(int vector[],int n,int &sumaPar,int &sumaImpar){
	sumaPar=0;
	sumaImpar=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			sumaPar+=vector[i];
		}else{
			sumaImpar+=vector[i];
		}
	}
}

int main(){
	int vector[100];
	int n,sumaPar,sumaImpar;
	cout<<"Ingrese una cantidad positiva de elementos menores o iguales a 100 para el vector: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero "<<i+1<<": ";
		cin>>vector[i];
	}
	
	calcularSumas(vector,n,sumaPar,sumaImpar);
	
	cout<<"La suma de los elementos de indice par es: "<<sumaPar<<endl;
	cout<<"La suma de los elementos de indice impar es: "<<sumaImpar<<endl;
}