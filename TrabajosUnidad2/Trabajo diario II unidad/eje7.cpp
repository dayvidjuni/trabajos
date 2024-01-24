#include <iostream>

int main(){

    char letra;

    std::cin>>letra;

    switch (letra)
    {
    
    case 'a':
        std::cout<<"A\n";
            break; 
    case 'e':
        std::cout<<"E\n";
        break;
    case 'i':
        std::cout<<"I\n";
        break;
    case 'o':
        std::cout<<"O\n";
        break;
    case 'u':
        std::cout<<"U\n";
        break;

    case 'A': std::cout<<"a\n"; break;
    case 'E': std::cout<<"e\n"; break;
    case 'I': std::cout<<"i\n"; break;
    case 'O': std::cout<<"o\n"; break;
    case 'U': std::cout<<"u\n"; break;
    }

    system("pause");
    return 0;
}