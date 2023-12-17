/*12.	Escriba un programa que te permita determinar la cantidad de años, meses y días de una persona en razón a su fecha de nacimiento.*/

#include <iostream>
#include <ctime>

int main() {
    // Obtener la fecha de nacimiento del usuario
    std::cout << "Ingrese la fecha de nacimiento en el formato DD MM AAAA: ";
    int dia, mes, anio;
    std::cin >> dia >> mes >> anio;

    // Obtener la fecha actual
    std::time_t tiempoActual = std::time(nullptr);
    tm* tiempoStruct = std::localtime(&tiempoActual);

    // Configurar la fecha de nacimiento en la estructura de tiempo
    tiempoStruct->tm_year = anio - 1900;
    tiempoStruct->tm_mon = mes - 1;
    tiempoStruct->tm_mday = dia;

    // Convertir las fechas a segundos desde la época
    std::time_t tiempoNacimiento = std::mktime(tiempoStruct);

    // Calcular la diferencia en segundos entre la fecha actual y la fecha de nacimiento
    std::time_t diferenciaSegundos = tiempoActual - tiempoNacimiento;

    // Calcular años, meses y días a partir de la diferencia en segundos
    int anios = diferenciaSegundos / (60 * 60 * 24 * 365);
    int meses = (diferenciaSegundos % (60 * 60 * 24 * 365)) / (60 * 60 * 24 * 30);
    int dias = (diferenciaSegundos % (60 * 60 * 24 * 30)) / (60 * 60 * 24);

    // Mostrar resultados
    std::cout << "Edad: " << anios << " años, " << meses << " meses, " << dias << " días." << std::endl;

    system("pause");
    return 0;
}