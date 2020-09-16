/* File:
 * Author: Luis Ignacio L�pez Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#include "Interfaz.h"
void Interfaz::menu() {
	int opc1, opc2, opc4, opc5, tel, cantpersonas, cantninos, cantadultos, diaentra, mesentra, anoentra, diasale, messale, anosale, horasale, horaentra, minutosale, minutoentra, ndias;
	float cuenta;
	int cont = 1000;
	int contnino = 0; int  conadulto = 0;
	string nombre, opc3, idhabitacion, id, tipopago, numreserva,confirmar, idreservacion,liberar;
	bool incluido;
	//PRUEBA DE OBJETOS
	Cliente* C1 = new Cliente("Anderson", "200", "tarjeta de debito", 1010, 0202);
	Habitacion* H1 = new Habitacion("A1", "PC", 'L', 1);
	Habitacion* H2 = new Habitacion("A2", "SC", 'O', 2);
	Habitacion* H3 = new Habitacion("A3", "SC", 'L', 5);
	Habitacion* H4 = new Habitacion("A4", "PC", 'L', 4);
	Habitacion* H5 = new Habitacion("A5", "SC", 'O', 5);
	Habitacion* H6 = new Habitacion("A6", "TC", 'M', 1);
	Habitacion* H7 = new Habitacion("A7", "PC", 'L', 2);
	Habitacion* H8 = new Habitacion("A8", "SC", 'O', 3);
	Habitacion* H9 = new Habitacion("B1", "TC", 'M', 4);
	Habitacion* H10 = new Habitacion("B2", "PC", 'L', 5);
	Habitacion* H11 = new Habitacion("B3", "SC", 'O', 1);
	Habitacion* H12 = new Habitacion("B4", "TC", 'M', 2);
	Habitacion* H13 = new Habitacion("B5", "PC", 'L', 3);
	Habitacion* H14 = new Habitacion("B6", "SC", 'O', 4);
	Habitacion* H15 = new Habitacion("B7", "TC", 'M', 5);
	Habitacion* H16 = new Habitacion("B8", "PC", 'L', 1);
	Habitacion* H17 = new Habitacion("C1", "SC", 'O', 2);
	Habitacion* H18 = new Habitacion("C2", "TC", 'M', 3);
	Habitacion* H19 = new Habitacion("C3", "PC", 'L', 4);
	Habitacion* H20 = new Habitacion("C4", "SC", 'O', 5);
	Habitacion* H21 = new Habitacion("C5", "TC", 'M', 1);
	Habitacion* H22 = new Habitacion("C6", "PC", 'L', 2);
	Habitacion* H23 = new Habitacion("C7", "SC", 'O', 3);
	Habitacion* H24 = new Habitacion("C8", "TC", 'M', 4);
	Habitacion* H25 = new Habitacion("D1", "PC", 'L', 5);
	Habitacion* H26 = new Habitacion("D2", "SC", 'O', 1);
	Habitacion* H27 = new Habitacion("D3", "TC", 'M', 2);
	Habitacion* H28 = new Habitacion("D4", "PC", 'L', 3);
	Habitacion* H29 = new Habitacion("D5", "SC", 'O', 4);
	Habitacion* H30 = new Habitacion("D6", "TC", 'M', 5);
	Habitacion* H31 = new Habitacion("D7", "PC", 'L', 1);
	Habitacion* H32 = new Habitacion("D8", "SC", 'O', 2);
	Habitacion* H33 = new Habitacion("E1", "TC", 'M', 3);
	Habitacion* H34 = new Habitacion("E2", "PC", 'L', 4);
	Habitacion* H35 = new Habitacion("E3", "SC", 'O', 5);
	Habitacion* H36 = new Habitacion("E4", "TC", 'M', 1);
	Habitacion* H37 = new Habitacion("E5", "PC", 'L', 2);
	Habitacion* H38 = new Habitacion("E6", "SC", 'O', 3);
	Habitacion* H39 = new Habitacion("E7", "TC", 'M', 4);
	Habitacion* H40 = new Habitacion("E8", "PC", 'L', 5);

	Hotel* H = new Hotel(); H->a�adeHabitacion(H1, 0, 0); H->a�adeHabitacion(H2, 0, 1); H->a�adeHabitacion(H3, 0, 2); H->a�adeHabitacion(H4, 0, 3); H->a�adeHabitacion(H5, 0, 4); H->a�adeHabitacion(H6, 0, 5); H->a�adeHabitacion(H7, 0, 6); H->a�adeHabitacion(H8, 0, 7);
	H->a�adeHabitacion(H9, 1, 0); H->a�adeHabitacion(H10, 1, 1); H->a�adeHabitacion(H11, 1, 2); H->a�adeHabitacion(H12, 1, 3); H->a�adeHabitacion(H13, 1, 4); H->a�adeHabitacion(H14, 1, 5); H->a�adeHabitacion(H15, 1, 6); H->a�adeHabitacion(H16, 1, 7);
	H->a�adeHabitacion(H17, 2, 0); H->a�adeHabitacion(H18, 2, 1); H->a�adeHabitacion(H19, 2, 2); H->a�adeHabitacion(H20, 2, 3); H->a�adeHabitacion(H21, 2, 4); H->a�adeHabitacion(H22, 2, 5); H->a�adeHabitacion(H23, 2, 6); H->a�adeHabitacion(H24, 2, 7);
	H->a�adeHabitacion(H25, 3, 0); H->a�adeHabitacion(H26, 3, 1); H->a�adeHabitacion(H27, 3, 2); H->a�adeHabitacion(H28, 3, 3); H->a�adeHabitacion(H29, 3, 4); H->a�adeHabitacion(H30, 3, 5); H->a�adeHabitacion(H31, 3, 6); H->a�adeHabitacion(H32, 3, 7);
	H->a�adeHabitacion(H33, 4, 0); H->a�adeHabitacion(H34, 4, 1); H->a�adeHabitacion(H35, 4, 2); H->a�adeHabitacion(H36, 4, 3); H->a�adeHabitacion(H37, 4, 4); H->a�adeHabitacion(H38, 4, 5); H->a�adeHabitacion(H39, 4, 6); H->a�adeHabitacion(H40, 4, 7);

	

	do {		
		
		cout << "================================================================" << endl;
		cout << "                 Bienvenido al Hotel City Express" << endl;;
		cout << "==============================MENU==============================" << endl << endl;
		cout << "	1.Habitaciones  libres, ocupadas y en mantenimiento" << endl;
		cout << "	2.Detalle por habitaci�n" << endl;
		cout << "	3.Realizar Reservaci�n" << endl;
		cout << "	4.Liberar Habitacion " << endl;
		cout << "	5.Reservaciones  por cliente" << endl;
		cout << "	6.Cantidad de adultos  y  ni�os  con reservacion" << endl;
		cout << "	7.Poner habitaci�n  en mantenimiento" << endl;
		cout << "	8.Cu�nto dinero recaud� hoy el hotel" << endl;
		cout << "	9.Salir" << endl << endl;
		cout << "================================================================" << endl;
		cout << "Por favor ingrese una opcion valida: " << endl;
		if (cin >> opc1) {
			system("cls");
			switch (opc1) {
			case 1://1 - Habitaciones libres, ocupadas y en mantenimiento
				cout << "Seleccione una de las siguientes opciones de busqueda:" << endl;
				cout << "================================================================" << endl;
				cout << "	1 - Listado de todas las habitaciones del hotel" << endl;
				cout << "	2 - Busqueda por tipo (primera clase, segunda clase, tercera clase)" << endl;
				cout << "	3 - Busqueda por cantidad de camas" << endl << endl;
				cout << "================================================================" << endl;
				cout << "Digite la opcion: " << endl;
				cin >> opc2;				
				if (opc2 == 1) {
					cout << "Listado de todas las habitaciones del hotel" << endl;
					cout << "MOSTRAR LISTA DE HABITACIONES" << endl;
					cout << H->ImprimeHotel();
					system("pause");
				}
				if (opc2 == 2) {
					cout << "Busqueda por Tipo " << endl;
					cout << "Digite el tipo de habitacion deseada, Primera Clase (PC), Segunda Clase(SC), Tercera Clase (TC): " << endl;
					cin >> opc3;
					cout << H->ImprimeHabitacionesPorTipo(opc3);
					cout << "MOSTRAR EL METODO DE BUSQUEDA POR TIPO DE HABITACION" << endl;
				}
				if (opc2 == 3) {
					cout << "Busqueda de habitaciones por cantidad de camas" << endl;
					cout << "Digite la cantidad de camas: " << endl;
					cin >> opc4;
					cout << "Estado habitaciones con" << opc4 << "camas: " << endl;
					cout << H->ImprimeHabitacionesXcamas(opc4);
					cout << "MOSTRAR EL METODO DE BUSQUEDA DE HABITACIONES POR CANTIDAD DE CAMAS" << endl;
				}
				break;
			case 2://2-Detalle de habitacion 				
				cout << "Digite el ID de la habitacion: " << endl;
				cin >> idhabitacion;				
				cout << "MOSTRAR DETALLES DE HABITACION" << endl;
				cout << H->ImprimeHabitacion(idhabitacion);
				cout << "Agregar IF... SI POSEE RESERVACION MOSTRAR LO SIGUIENTE:" << endl;
				cout << "MOSTRAR DETALLES DE LA RESERVACION" << endl;
				cout << "MOSTRAR DETALLES DE HABITACION" << endl;
				cout << "MOSTRAR DETALLES DEL MONTO A PAGAR" << endl;
				break;
			case 3://3- Realizar Reservacion 
				cout << "Digite el ID de la habitacion: " << endl;
				cin >> idhabitacion;
				cout << "**LLAMAR AL METODO QUE VERIFIQUE SI ESTA OCUPADA O NO LA HABITACION" << endl;
				if (H->Comprobar(idhabitacion) == false)
					cout << "Habitacion Ocupada, Ingresa Otra" << endl;
				else {
					cout << "**Agregar IF... SI  NO POSEE RESERVACION MOSTRAR LO SIGUIENTE:" << endl;
					cout << "**MOSTRAR DETALLES DE HABITACION" << endl;
					cout << H->ImprimeHabitacion(idhabitacion);
					cout << "================================================================" << endl;
					cout << "Reservacion" << endl;
					cout << "	Digite nombre del cliente: " << endl;
					cin >> nombre;
					cout << "	Digite ID: " << endl;
					cin >> id;
					cout << "	Digite Tipo de pago (1-Efectivo, 2-Tarjeta de D�bito, 3-Tarjeta de Cr�dito: " << endl;
					cin >> tipopago;
					cout << "	Digite Telefono:  " << endl;
					cin >> tel;
					cout << "	Digite Cuenta: " << endl;
					cin >> cuenta;
					Cliente* C = new Cliente(nombre, id, tipopago, tel, cuenta);
					cout << "	Digite si es todo incluido (s/n): " << endl;				
					cin >> confirmar;
					if (confirmar == "s" || confirmar == "S")
						incluido = true;
					else
						incluido = false;
					cout << "	Digite cantidad de personas: " << endl;
					cin >> cantpersonas;
					cout << "*VERIFICAR SI LA CANTIDAD DE PERSONAS INGRESADA ES MENOR O IGUAL AL QUE LA HABITACION PERMITE SI NO ES ASI INFORMAR AL CLIENTE, VOLVER A INGRESAR EL NUMERO CORRECTAMENTE O REGRESAR A ELEGIR UNA HABITACION QUE CUMPLA CON LA CAPACIDAD DEL CLIENTE" << endl;

					if (H->ComprobarCamas(idhabitacion, cantpersonas) == false) {
						cout << "Cantidad de Persona no cabe en la Habitacion, Digite un numero de personas valido: " << endl;//Poner un ciclo
						cin >> cantpersonas;
						}
					else {
						cout << "	Digite cantidad de ni�os: " << endl;
						cin >> cantninos;
						contnino += cantninos;
						cout << "	Digite cantidad de adultos: " << endl;
						cin >> cantadultos;
						conadulto += cantadultos;
						cout << "Digite la cantida de dias que estara en el Hotel" << endl;
						cin >> ndias;
						cout << "	Digite fecha de entrada (ej: 06/07/20): " << endl;
						cout << "Ingrese dia: " << endl; cin >> diaentra; cout << "Ingrese mes: " << endl; cin >> mesentra; cout << "Ingrese a�o: " << endl; cin >> anoentra;

						cout << "	Digite fecha de salida(ej: 06/07/20): " << endl;
						cout << "Ingrese dia: " << endl; cin >> diasale; cout << "Ingrese mes: " << endl; cin >> messale; cout << "Ingrese a�o: " << endl; cin >> anosale;

						cout << "	Ingresar Hora de entrada en formato militar por favor (ej: 24H): " << endl;
						cout << "Ingrese Hora: " << endl; cin >> horaentra; 
						cout << "*VERIFICAR SI SE CUMPLE LA HORA PARA APLICAR DESCUENTO O NO" << endl;

						cout << "Ingresar Hora de salida en formato militar por favor (ej: 24H): " << endl;
						cout << "Ingrese Hora: " << endl; cin >> horasale; 
						cout << "================================================================" << endl;
						numreserva = convertirString(cont);
						Reservacion* R = new Reservacion(numreserva,cantadultos,cantninos,ndias,incluido,diaentra,mesentra,anoentra,diasale,messale,anosale,horaentra,horasale,C);					
						cont++;

						H->setHabitacion(R,idhabitacion);
						H->setEstadoHabi('O', idhabitacion);
						cout << "**MOSTRAR MONTO A PAGAR**" << endl;
						cout << H->MontoTotal(idhabitacion) << endl;
					}
					cout << "================================================================" << endl;
				}
				break;
			case 4://4-Liberar habitacion 													
				cout << "Digite el ID del cliente o la Habitacion: " << endl;
				cin >> id;
				cout << "El cliente posee las siguientes reservaciones: " << endl;
				cout << "**MOSTRAR LAS RESERVACIONES DEL CLIENTE" << endl;
				cout << H->MostrarReservaciones(id) << endl;
				cout << "Digite el numero de la reservacion que desee liberar: " << endl;
				cin >> liberar;
				cout << "*LLAMAR AL METODO PARA LIBERAR HABITACION" << endl;
				H->Liberar(liberar);			
				cout << "Listo!! La habitacion ha sigo liberada" << endl;
				break;
			case 5: //5-Reservaciones por cliente
				cout << "Digite el ID del cliente: " << endl;
				cin >> id;
				cout << "El cliente posee las siguientes reservaciones: " << endl;
				cout << "**MOSTRAR LAS RESERVACIONES DEL CLIENTE" << endl;
				cout << H->MostrarReservaciones(id) << endl;
				cout << "Digita el ID de la reservacion deseada: " << endl;
				cin >> idreservacion;
				cout << "*MOSTRAR DETALLES DE LA RESERVACION POR ID" << endl;
				cout << H->ImprimeReservacionEspecifica(idreservacion);
				cout << "*MOSTRAR DETALLES DEL MONTO A PAGAR" << endl;

				cout << "================================================================" << endl;
				break;
			case 6://6.Cantidad de adultos  y  ni�os con reservacion 
				cout << "================================================================" << endl;
				cout << "Cantidad de ni�os: " << contnino << endl;
				cout << "	**LLAMAR METODO DE BUSQUEDA DE NI�OS EN LA MATRIZ " << endl;
				cout << "Cantidad de adultos: " << conadulto <<  endl;
				cout << "	**LLAMAR METODO DE BUSQUEDA DE ADULTOS EN LA MATRIZ " << endl;
				cout << "================================================================" << endl;
				break;
			case 7://7-	Poner habitaci�n  en mantenimiento  
				cout << "Digite el ID de la habitacion que desea poner en mantenimiento: " << endl;
				cin >> idhabitacion;
				cout << "Estado actual de la habitacion: " << H->EncuentraEstado(idhabitacion) << endl;
				cout << "Desea poner la habitacion en mantenimiento s / n ? " << endl;
				cin >> confirmar;
				if (confirmar == "s") {
					H->ConfirmarMantenimiento(idhabitacion);
					cout << "Listo!!! La habitacion " << idhabitacion << " ha quedado en mantenimiento" << endl;
				}
				else
					cout << "GRACIAS" << endl;
				break;
			case 8:
				cout << "Cu�nto dinero recaud� hoy el hotel: :D" << endl;
				cout << H->muestraTotales() << endl;
				break;

			default:
				break;
			}


















		}


	}while (opc1 != 9);
}
