#include <iostream>
using namespace std;

bool capicua(string arreglo){
	int longitud=arreglo.length();
	
	for(int i=0;i<longitud/2;++i){
		if(arreglo[i]!=arreglo[longitud-i-1]){
			return false;
		}
	}
	return true;
}
int main(){
	string arregloNumerico;
	cout<<"Ingrese un numero de 10 cifras: ";
	cin>>arregloNumerico;
	while(arregloNumerico.length()!=10){
		cout<<"El numero no tiene 10 cifras, ingrese uno de 10 cifras: ";
		cin>>arregloNumerico;
	}
	if(capicua(arregloNumerico)){
		cout<<"El numero "<<arregloNumerico<<" es capicua";
	}else{
		cout<<"El numero "<<arregloNumerico<<" no es capicua";
	}

	return 0;
}