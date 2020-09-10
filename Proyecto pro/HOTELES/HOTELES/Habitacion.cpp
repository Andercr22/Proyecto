/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#include "Habitacion.h"
Habitacion::Habitacion() {
	Identificador = "";
	clase = "";
	Estado = ' ';
	camas = 0;
	HabiClie = NULL;
	HabiReser = NULL;	
}

Habitacion::Habitacion(string I,string z, char E,int x) {
	Identificador = I;
	clase = z;
	Estado = E;
	camas = x;	
	HabiClie = NULL;
	HabiReser = NULL;	
}
void Habitacion::setEstado(char x) {
	Estado = x;
}
void Habitacion::setHabiClie(Cliente* c) {
	HabiClie = c;
}
void Habitacion::setHabiReser(Reservacion* r) {
	HabiReser = r;
}
char Habitacion::getEstado() {
	return Estado;
}
Cliente* Habitacion::getHabiClie() {
	return HabiClie;
}
Reservacion* Habitacion::getHabiReser() {
	return HabiReser;
}
string Habitacion::getclase() {
	return clase;
}
int Habitacion::getpacama() {
	return camas;
}
string Habitacion::getIdentificador() {
	return Identificador;
}

string Habitacion::ImprimeHabitacionConReserva() {
	stringstream s;
	s << "Tipo de habitacion: " << clase << endl;
	s << "Cantidad de camas: " << camas << endl;
	s << "Estado: " << Estado << endl;
	s << costoSinInclu() << endl;
	s << "Costo de la habitacion con todo incluido: $300 x adulto,$200 x niño." << endl;
	if (HabiClie != NULL) {
		s << "La reservacion actual seria: " << endl << HabiReser->ImprimeReservacion();
		if (HabiReser->gettodoIN())
			s << PagoTodoIncluido() << endl;
		else
			s << ImprimeMontoSinIn() << endl;		
	}
	else
		s << "Habitacion sin reservacion" << endl;
	return s.str();
}
string Habitacion::ImprimeHabitacion() {
	stringstream s;
	s << Identificador << "(" << Estado << ")";
	return s.str();
}

float Habitacion::valorClase() {
	double x = 0;
	if (clase == "PC"  || clase == "pc")
		x = 0.30;
	else {
		if (clase == "SC"  || clase == "sc")
			x = 0.20;
	}
	return x;
}

string Habitacion::costoSinInclu() {
	stringstream s;
	float x = valorClase();
	if (x != 0)
		s << "Costo de la habitacion sin todo incluido: $" << ValorNocheSim1 + (ValorNocheSim1 * x) << "x 1 $" << ValorNocheSim2 + (ValorNocheSim2 * x) << "x 2 $" << ValorNocheSim3 + (ValorNocheSim3 * x) << "x 3 $" << ValorNocheSim4 + (ValorNocheSim4 * x) << "x +3" << endl;
	else
		s << "Costo de la habitacion sin todo incluido: $" << ValorNocheSim1 << "x 1 $" << ValorNocheSim2 << "x 2 $" << ValorNocheSim3 << "x 3 $" << ValorNocheSim4 << "x +3" << endl;
	return s.str();
}

string Habitacion::PagoTodoIncluido() {
	float precioAdulto = HabiReser->getAdultos() * 300; float precioNino = HabiReser->getNinos() * 200; float precioDiario = 0.0; float subtotal = 0.0;
	stringstream s;		
	s << "Precio diario adultos ($300 x" << HabiReser->getAdultos() << " adultos) ---------------$" << precioAdulto << endl;		 
	s << "Precio diario niños ( $200 x" << HabiReser->getNinos() << " niños) ------------------$" << precioNino << endl;
	if (valorClase() != 0) {
		precioDiario = (precioAdulto + precioNino) + ((precioAdulto + precioNino) * valorClase());
		s << "Precio Diario------------------------------------------------$" << precioDiario << endl;
	}
	s << "Cantidad De dias-------------------------------------------------: " << HabiReser->getNdias() << endl;
	subtotal = HabiReser->getNdias() * precioDiario;
	s << "Subtotal---------------------------------------------------------: " << subtotal << endl;
	s << "Descuento por entrada nocturna (0%)------------------------------$0" << endl;
	s << "Total a Pagar----------------------------------------------------$" << subtotal << endl;
	return s.str();
}
bool Habitacion::descuentoNocturn() {
	if (HabiReser->getHoraEntra() >= 18 && HabiReser->getHoraEntra() <= 19)
		return true;
}
string Habitacion::ImprimeMontoSinIn() {
	stringstream s;
	float x = valorClase();
	int z = 0;
	float a = 0;
	float b = 0;
	float c = 0;
	z = HabiReser->getAdultos() + HabiReser->getNinos();
	if (z == 1)
		a = ValorNocheSim1;
	else
		if (z == 2)
			a = ValorNocheSim2;
		else
			if (z == 3)
				a = ValorNocheSim3;
			else
				if (z > 3)
					a = ValorNocheSim4;
	if (x != 0)
		a = a + (a * x);
	s << "Precio x dia ..............................$" << a << endl;
	s << "Cantidad de dias...........................  " << HabiReser->getNdias() << endl;
	b = HabiReser->getNdias() * a;
	s << "Subtotal....................................$" << b << endl;
	if (descuentoNocturn() == true && z == 1) {
		s << "Descuento x entrada nocturna(25%)..........$" << b * 0.25 << endl;
		c = b * 0.25;
	}
	else
		if (descuentoNocturn() == true && z == 2) {
			s << "Descuento x entrada nocturna(20%)..........$" << b * 0.20 << endl;
			c = b * 0.20;
		}
		else
			if (descuentoNocturn() == true && z == 3) {
				s << "Descuento x entrada nocturna(15%)..........$" << b * 0.15 << endl;
				c = b * 0.15;
			}
			else
				if (descuentoNocturn() == true && z > 3) {
					s << "Descuento x entrada nocturna(10%)..........$" << b * 0.10 << endl;
					c = b * 0.10;
				}
				else
					s << "Descuento x entrada nocturna(0%)..........$0" << endl;
	s << "Total a pagar...................................$" << c + b << endl;
	return s.str();
}
Habitacion::~Habitacion() {
	//preguntar como liberar memoria asosiativa
}
