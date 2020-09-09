/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#ifndef RESERVACION_H
#define    RESERVACION_H
#include"Cliente.h"
using namespace std;
class Reservacion {
private:
	Cliente* reservacionClie;
	string NumeroDeReser;
	int Adultos;
	int Ninos;
	int Ndias;
	float Monto;
	bool todoIN;
	string DiaEn;
	string DiaSalida;
	int horadEntr;
	int horaSali;

public:
	Reservacion();
	Reservacion(string,int, int, int, float, bool,string,string, int, int,Cliente*);
	string ImprimeReservacion();











};
#endif / RESERVACION_H */