#include <iostream>
using namespace std;

int mistrcmp(char str1[],char str2[]){
	int longitud1=0;
	int longitud2=0;
	
	while (str1[longitud1]!='\0'){
		longitud1++;
	}
	while (str2[longitud2]!='\0'){
		longitud2++;
	}
	
	for(int i=0;i<longitud1||i<longitud2;i++){
		if(str1[i]>str2[i]){
			return 1;
		}else if(str1[i]<str2[i]){
			return -1;
		}
	}
	if(longitud1==longitud2){
		return 0;
	}else if(longitud1<longitud2){
		return -1;
	}else{
		return 1;
	}
}

int main(){
	char str1[50];
	cout<<"Ingrese la primera oracion: ";
	gets(str1);
	
	char str2[50];
	cout<<"Ingrese la segunda oracion: ";
	gets(str2);
	
	
	cout<<"str1: "<<str1<<endl;
	cout<<"str2: "<<str2<<endl;

	cout<<"\nSe llama a la funcion mistrcmp(str1,str2)"<<endl<<endl;
	if(mistrcmp(str1,str2)==0){
		cout<<"La funcion retorna 0, por lo tanto las cadenas son iguales";
	}else if(mistrcmp(str1,str2)==1){
		cout<<"La funcion retorna 1, por lo tanto str1 > str2";
	}else{
		cout<<"La funcion retorna -1, por lo tanto str2 > str1";
	}
	return 0;
}

