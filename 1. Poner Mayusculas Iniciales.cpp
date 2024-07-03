#include <iostream>
using namespace std;

void PonerMayusculasIniciales(char cadena []){
	int n = 0;
	while (cadena[n]!= '\0'){
		n++;
	}
	cadena[0]=toupper(cadena[0]);
	for (int i=0;i<n;i++){
		if (cadena[i-1]==' '){
			cadena[i]=toupper (cadena[i]);
		}
	}
}

int main(){
	char miarray[100];
	cout<<"Ingrese una oracion: ";
	gets(miarray);
	PonerMayusculasIniciales(miarray);
	cout<<miarray;
	
	return 0;
}