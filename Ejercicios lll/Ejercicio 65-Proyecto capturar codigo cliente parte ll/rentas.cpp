#include <iostream>
#include "clientes.h"

using namespace std;

string arregloRentas[100];
int ultimaLinea = 0;

void rentar() {
	system("cls");
	
	string codigoCliente = "";
	string nombreCliente = "";
	
	char continuar = 'n';
	
	while(true) {
	     cout << "Ingrese el codigo del cliente: ";
	     cin >> codigoCliente;
 
	     nombreCliente = buscarCliente(codigoCliente);
	
	     if (nombreCliente != ""){
		     cout <<endl;
		     cout << nombreCliente <<endl;
		     break;
         } else {
         	cout << "No se encontro el cliente, desea continuar? s/n" <<endl;
         	cin >> continuar;
         	
         	if (continuar == 'n' || continuar == 'N' ){
         		return;
			 }
		 }
	}
	
}
