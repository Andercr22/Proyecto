#include "Utiles.h"

int convertirInt(std::string s) {
    std::stringstream r(s);
    int v;
    r >> v;
    return v;
}

double convertirDouble(std::string s) {
    std::stringstream r(s);
    double v;
    r >> v;
    return v;
}

float convertirFloat(std::string s) {
    std::stringstream r(s);
    float v;
    r >> v;
    return v;
}


char convertirChar(std::string s) {
    std::stringstream r(s);
    char v;
    r >> v;
    return v;
}


string convertirString(int a) {
    std::stringstream ss;
    ss << a;
    return ss.str();
}