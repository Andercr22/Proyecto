/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
#ifndef RESERVACION_H
#define	RESERVACION_H
class Reservacion {
private:
	int Adultos;
	int Ninos;
	int Ndias;
	float Monto;
	bool Estancia;

public:
	Reservacion();
	Reservacion(int, int, int, float, bool);
	string ImprimeReservacion();











};
#endif /* RESERVACION_H */