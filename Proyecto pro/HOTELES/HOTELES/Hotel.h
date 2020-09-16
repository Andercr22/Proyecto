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
	bool Comprobar(string);
	bool ComprobarCamas(string,int);
	void setHabitacion(Reservacion*, string);
	string MontoTotal(string);
	char EncuentraEstado(string);
	void ConfirmarMantenimiento(string);
	int CantidadNinos(int);
	int CantidadAdultos(int);
	int TotalNinos(int, int);
	void setEstadoHabi(char, string);
	string muestraTotales();
	string MostrarReservaciones(string);
	void Liberar(string);
	string ImprimeReservacionEspecifica(string);
};
#endif /*HOTEL*/
