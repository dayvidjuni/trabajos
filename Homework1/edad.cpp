/*12.	Escriba un programa que te permita determinar la cantidad de años, meses y días de una persona en razón a su fecha de nacimiento.*/

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    
    time_t t = time(0);
    tm* now = localtime(&t);

    
    int year, month, day;//se me hace raro poner "ano" jajajajajja asi que en ingles
    cout << "Ingresa tu fecha de nacimiento (year month day): ";
    cin >> year >> month >> day;

    
    int actualYear = now->tm_year + 1900;
    int actualMonth = now->tm_mon + 1;
    int actualDay = now->tm_mday;

    int edadyear = actualYear - year;
    int edadMonth = actualMonth - month;
    int edadDay = actualDay - day;

    if (edadMonth < 0) {
        edadyear--;
        edadMonth += 12;
    }

    if (edadDay < 0) {
        if (actualMonth == 1 || actualMonth == 3 || actualMonth == 5 || actualMonth == 7 ||
            actualMonth == 8 || actualMonth == 10 || actualMonth == 12) {
            edadDay += 31;
        } else if (actualMonth == 4 || actualMonth == 6 || actualMonth == 9 || actualMonth == 11) {
            edadDay += 30;
        } 
        edadMonth--;
    }
    cout << "Tienes " << edadyear << " anios , "/*jajajajjajaj*/ << edadMonth << " meses y " << edadDay << " dias." << endl;
    system("pause");
    return 0;
}