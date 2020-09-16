/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#include "Hotel.h"
Hotel::Hotel() {
	for(int i=0;i<x;i++){
		for (int j = 0; j < x; j++) {
			matriz[i][j] = NULL;
		}
	}
}
void Hotel::añadeHabitacion(Habitacion* H, int a, int b) {
	matriz[a][b] = H;
}
Hotel::~Hotel() {
	//NO SE QUE HACER XD
}

string Hotel::ImprimeHotel() {
	stringstream s;
	for (int i = 0; i < x; i++) {
		s << endl;
		for (int j = 0; j < y; j++) {
			s << "[ "<<matriz[i][j]->ImprimeHabitacion() << " ]" ;
		}
	}
	return s.str();
}
string Hotel::ImprimeHabitacionesPorTipo(string z) {
	stringstream s;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getclase() == z)
				s << "[" << matriz[i][j]->ImprimeHabitacion() << "]" << endl;
		}
	}
	return s.str();
}
string Hotel::ImprimeHabitacionesXcamas(int z) {
	stringstream s;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getpacama() == z)
				s << "[" << matriz[i][j]->ImprimeHabitacion() << "]" << endl;
		}
	}
	return s.str();
}

string Hotel::ImprimeHabitacion(string h) {
	stringstream s;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getIdentificador() == h)
				s << matriz[i][j]->ImprimeHabitacionConReserva() << endl;
		}
	}
	return s.str();
}

bool Hotel::Comprobar(string ide) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getIdentificador() == ide) {
				char est = matriz[i][j]->getEstado();
				if (est == 'L')
					return true;
			}			
		}
	}
	return false;
}

bool Hotel::ComprobarCamas(string c, int p) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getIdentificador() == c && matriz[i][j]->getpacama() >= p) {
				return true;
			}

		}
	}
	return false;
}

void Hotel::setHabitacion(Reservacion* r, string iden) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getIdentificador() == iden)
				matriz[i][j]->setHabiReser(r);
		}
	}

}

string Hotel::MontoTotal(string mon) {
	stringstream s;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getIdentificador() == mon) {
				if (matriz[i][j]->getHabiReser()->gettodoIN() == true)
					s << matriz[i][j]->PagoTodoIncluido() << endl;

				else {
					s << matriz[i][j]->ImprimeMontoSinIn() << endl;
					//matriz[i][j]->setEstado('O');
				}
			}
		}
	}
	return s.str();
}
char Hotel::EncuentraEstado(string id) {
	char est = ' ';
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getIdentificador() == id) {
				est = matriz[i][j]->getEstado();
				return est;
			}

		}
	}

}


void Hotel::ConfirmarMantenimiento(string id) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getIdentificador() == id)
				matriz[i][j]->setEstado('M');
				
		}
	}
}

void Hotel::setEstadoHabi(char z, string b) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getIdentificador() == b)
				matriz[i][j]->setEstado(z);
		}
	}
}

string Hotel::muestraTotales() {
	stringstream s;
	float contSIN = 0;
	float contTODO = 0;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getHabiReser() != NULL) {
				if (matriz[i][j]->getHabiReser()->gettodoIN() == true)
					contTODO = contTODO + matriz[i][j]->recaudacioncontodo();
				else
					contSIN = contSIN + matriz[i][j]->getHabiReser()->getCosto();
			}
		}
	}
	s << "Recaudacion todo incluido: " << contTODO << endl;
	s << "Recaducion sin todo incluido" << contSIN << endl;
	return s.str();
}

string Hotel::MostrarReservaciones(string lib) {
	stringstream s;
	s << "El cliente posee las siguientes reservaciones: ";
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getHabiReser() != NULL) {
				if (matriz[i][j]->getHabiReser()->getCliente()->getID() == lib || matriz[i][j]->getIdentificador() == lib)
					s << "#" << matriz[i][j]->ImprimeIDResevacion() << ".";
				else
					s << "ID o numero de habitacion no encontrado digite otro" << endl;
			}
		}
	}
	return s.str();
}

void Hotel::Liberar(string l) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getHabiReser() != NULL) {
				if (matriz[i][j]->getHabiReser()->getNumeroDeReser() == l) {
					matriz[i][j]->VaciarHabitacion();
					matriz[i][j]->setEstado('L');
				}
			}
		}
	}
}

string Hotel::ImprimeReservacionEspecifica(string l) {
	stringstream s;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matriz[i][j]->getHabiReser() != NULL) {
				if (matriz[i][j]->getHabiReser()->getNumeroDeReser() == l) {
					s << matriz[i][j]->getHabiReser()->ImprimeReservacion();
					if (matriz[i][j]->getHabiReser()->gettodoIN() == true)
						s << matriz[i][j]->PagoTodoIncluido() << endl;

					else
						s << matriz[i][j]->ImprimeMontoSinIn() << endl;
				}
			}
		}
	}
	return s.str();
}