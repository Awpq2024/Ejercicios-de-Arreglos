#include <iostream>
using namespace std;

int ocurrencias(char cadena[],char letra){
	int n = 0;
	int contador=0;
	
	while (cadena[n]!= '\0'){
		n++;
	}
	for (int i=0;i<n;i++){
		if (cadena[i]==letra){
			contador++;
		}
	}
	return contador;
}

int main(){
	char miarray[100];
	char letra;
	cout<<"Ingrese una oracion: ";
	cin.getline(miarray, 100);
	cout<<"Ingrese una letra: ";
	cin>>letra;
	
	cout<<"La letra "<<letra<<" se repite "<<ocurrencias(miarray,letra)<<" veces en la oracion ingresada";
	
	return 0;
}