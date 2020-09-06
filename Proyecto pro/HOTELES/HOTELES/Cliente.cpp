/* File:
 * Author: Luis Ignacio López Castro y Anderson Mora Aguero
 * Created on 26 de agosto de 2020, 7:35 PM
 */
#include"Cliente.h"
Cliente::Cliente(string c, string x, char y, int z, float n) {
    nom = c;
    id = x;
    ForPago = y;
    cell = z;
    Ncuenta = n;
}
Cliente::~Cliente() {
}
string Cliente::imprimeCliente() {
    stringstream s;
    s << "Nombre del cliente: " << nom << endl;
    s << "Id del cliente: " << id << endl;
    s << "Forma de pago del cliente: " << ForPago << endl;
    s << "Telefono del cliente: " << cell << endl;
    s << "Numero de cuenta del cliente: " << Ncuenta << endl;
    return s.str();
}