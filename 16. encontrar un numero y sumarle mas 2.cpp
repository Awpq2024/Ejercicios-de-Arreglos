#include <iostream>
using namespace std;

void seleccionarDigitos(string cadena,string &digitos){
	for(char c:cadena){
		if(isdigit(c)){
			digitos+=c;
		}
	}
}

int main(){
	string cadena,digitos;
	int n;
	
	cout<<"Ingrese una linea de texto que contenga numeros:";
	getline(cin,cadena);
	
	seleccionarDigitos(cadena,digitos);
	
	n=stoi(digitos);
	n+=2;
	
	cout<<"El numero encontrado sumado mas dos es: "<<n;
	
	return 0;
}