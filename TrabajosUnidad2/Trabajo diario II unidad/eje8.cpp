#include <iostream>
#include <bitset>
#include <cstring>

std::string BinarioAHexadecimal(std::string numero) {
    if (numero == "0000") {return "0";}
    else if (numero == "0001") {return "1";}
    else if (numero == "0010") {return "2";}
    else if (numero == "0011") {return "3";}
    else if (numero == "0100") {return "4";}
    else if (numero == "0101") {return "5";}
    else if (numero == "0110") {return "6";}
    else if (numero == "0111") {return "7";}
    else if (numero == "1000") {return "8";}
    else if (numero == "1001") {return "9";}
    else if (numero == "1010") {return "A";}
    else if (numero == "1011") {return "B";}
    else if (numero == "1100") {return "C";}
    else if (numero == "1101") {return "D";}
    else if (numero == "1110") {return "E";}
    else if (numero == "1111") {return "F";}
    return "";
}

int main() {
    std::string com;

    while (true) {
 
        std::cin >> com;

        if (com.length() == 16) {
            break;
        }

        std::cout << "Entrada invalida. Debe ser un numero binario de 16 bits.\n";
    }

    std::string p1 = com.substr(0, 4);
    std::string p2 = com.substr(4, 4);
    std::string p3 = com.substr(8, 4);
    std::string p4 = com.substr(12, 4);

    std::string hexadecimal = BinarioAHexadecimal(p1) + BinarioAHexadecimal(p2) + BinarioAHexadecimal(p3) + BinarioAHexadecimal(p4);

    std::cout << hexadecimal;

    system("pause");
    return 0;
}