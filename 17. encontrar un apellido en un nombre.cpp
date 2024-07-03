#include <iostream>
using namespace std;

bool buscarApellido(string nombreCompleto,string apellido) {
    int longitud1=nombreCompleto.length(); 
    int longitud2=apellido.length(); 
    
	for(int i=0;i<=longitud1-longitud2;i++){
		int j=0;
		
		while(j<longitud2 && nombreCompleto[i+j]==apellido[j]){
			j++;
		}
		if (j==longitud2 && (i+j==longitud1 || nombreCompleto[i+j]==' ')){
			return true;
		}
	}
	return false;
}

int main(){
	string nombreCompleto,apellido;

	cout<<"Ingrese un nombre con apellidos: ";
	getline(cin,nombreCompleto);
	cout<<"Ingrese un apellido: ";
	getline(cin,apellido);
	
	if (buscarApellido(nombreCompleto,apellido)){
		cout<<"El apellido "<<apellido<<" pertenece al nombre "<<nombreCompleto;
	}else{
		cout<<"El apellido "<<apellido<<" no pertenece al nombre "<<nombreCompleto;
	}
	
	return 0;
}