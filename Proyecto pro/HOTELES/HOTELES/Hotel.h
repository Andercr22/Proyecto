/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#ifndef HOTEL_H
#define HOTEL_H
#include"Habitacion.h"
const int x = 5;
const int y = 8;
class Hotel {
private:
	Habitacion* matriz[x][y];
public:
	Hotel();
	void añadeHabitacion(Habitacion*, int, int);
	~Hotel();//ni idea como hacerlo 
	string ImprimeHotel();
	string ImprimeHabitacionesPorTipo(string);
	string ImprimeHabitacionesXcamas(int);
	string ImprimeHabitacion(string);
	string ImprimeHabitacionConRESTRICION(string);
	void liberarHabitacion(string);
	string ImprimeHabitacionConNreserva(string);
	string ImprimeCantidadNinosAdultos();
	int calculaAdul();
	int calculaNi();
	void ponerHabitacionMantenimiento();
	float calculaTodoIn();
	float calculaSinIn();
	string ImprimeCaculas();
};
#endif /*HOTEL*/
