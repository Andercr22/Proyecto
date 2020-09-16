/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */

#ifndef HABITACION_H
#define	HABITACION_H
#include "Reservacion.h"
#include "Cliente.h"
static const float ValorAdultoTodoIn = 300.00;
static const float ValorNinoTodoIn = 200.00;
static const float ValorNocheSim1 = 150.00;
static const float ValorNocheSim2 = 250.00;
static const float ValorNocheSim3 = 350.00;
static const float ValorNocheSim4 = 400.00;
class Habitacion {
private:
	string Identificador;
	string clase;
	char Estado;
	int camas;
	Cliente* HabiClie;
	Reservacion* HabiReser;
	string Tipo;
public:
	Habitacion();
	Habitacion(string,string,char,int);
	void setHabiClie(Cliente*);
	void setHabiReser(Reservacion*);
	Cliente* getHabiClie();
	Reservacion* getHabiReser();
	void setEstado(char);
	char getEstado();
	string getclase();
	int getpacama();
	float valorClase();
	string getIdentificador();	
	//recordar que hayq ue poner los set y get que se vallan a ocupar mas adelante no se saben todavia 
	string ImprimeHabitacionConReserva();
	~Habitacion();
	string ImprimeHabitacion();
	string PagoTodoIncluido();
	string ImprimeMontoPagar();
	string HabitacionTodoIncluido();
	string HabitacionSimple();
	string costoSinInclu();
	bool descuentoNocturn();
	string ImprimeMontoSinIn();
	float recaudacioncontodo();
	float recaudacionsinin();
	string ImprimeIDResevacion();
	void VaciarHabitacion();
};

#endif /* HABITACION_H */