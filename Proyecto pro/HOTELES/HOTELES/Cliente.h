/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */	
#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Cliente {
private:
	// talvez hay que azociar a reservacion creo que no
	string nom;
	string id;
	string ForPago; 
	int cell;
	float Ncuenta;
public:
	Cliente(string,string,string,int,float);
	~Cliente();
	//no sabesmos cuales get y set se ocuparan
	string imprimeCliente();
};

#endif/*CLIENTE_H*/
