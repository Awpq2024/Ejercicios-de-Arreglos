#include <iostream>
using namespace std;

bool verificarPalindromo(string arreglo) {
    string auxiliar;
    
    for (int i=0;arreglo[i]!='\0';i++){
    	if (arreglo[i]!=' '){
    		auxiliar+=tolower(arreglo[i]);
    	}
	}
	for(int izquierda=0,derecha=auxiliar.length()-1 ; izquierda<derecha; izquierda++,derecha--){
		if (auxiliar[izquierda]!=auxiliar[derecha]){
			return false;
		}
	}
	return true;
}

int main(){
	string cadena;
	cout<<"Ingrese una frase: ";
	getline(cin,cadena);
	
	if (verificarPalindromo(cadena)){
		cout<<"La frase es un palindromo";
	}else{
		cout<<"La frase no es un palindromo";
	}
	
	return 0;
}