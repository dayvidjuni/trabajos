/*
   APELLIDOS Y NOMBRES : SUAQUITA CCANCCAPA DAYVID JUNIOR                    UNIDAD II
   SEMESTRE: I                                
   ESTA ES LA PRIMERA VERSION DEL MENU
*/
#include <iostream>
#include <math.h>
#include <string.h>

 float AreaCirculo(int numero){
    
    float radio,area;
    double pi= M_PI;

    std::cout<<"por favor ingrese el radio del circulo: ";
    std::cin>>radio;    

    area=pi*pow(radio,2);
    
    std::cout<<"el area del circulo es: "<<area<<"\n";

    system("pause");
    return 0;
 }
 float AreaTriangulo(int numero){

    int base,altura,area;

    std::cout<<"por favor ingrese la base del triangulo: ";
    std::cin>>base;
    
    std::cout<<"por favor ingrese la altura del triangulo: ";
    std::cin>>altura;

    area=(base*altura)/2;
    
    std::cout<<"el area del triangulo es: "<<area<<"\n";

    system("pause");
    return 0;
 }
 float AreaCuadrado(int numero){

    int lado,area;

    std::cout<<"por favor ingrese el lado del cuadrado: ";
    std::cin>>lado;

    area=lado*lado;
    
    std::cout<<"el area del cuadrado es: "<<area<<"\n";

    system("pause");
    return 0;
 }
 float AreaRectangulo(int numero){

    int base,altura,area;

    std::cout<<"por favor ingrese la base del rectangulo: ";
    std::cin>>base;
    
    std::cout<<"por favor ingrese la altura del rectangulo: ";
    std::cin>>altura;

    area=(base*altura);
    
    std::cout<<"el area del rectangulo es: "<<area<<"\n";

    system("pause");
    return 0;
 }
 float AreaParalelogramo(int numero){

    int base,altura,area;

    std::cout<<"por favor ingrese la base del paralelogramo: ";
    std::cin>>base;
    
    std::cout<<"por favor ingrese la altura del paralelogramo: ";
    std::cin>>altura;

    area=(base*altura);
    
    std::cout<<"el area del paralelogramo es: "<<area<<"\n";

    system("pause");
    return 0;
 }

 float VolumenCilindro(int numero){

    float radio,volumen,altura;
    double pi= M_PI;

    std::cout<<"por favor ingrese el radio del cilindro: ";
    std::cin>>radio;    
       
    std::cout<<"por favor ingrese la altura del cilindro: ";
    std::cin>>altura;    
    
    volumen=pi*pow(radio,2)*altura;
    
    std::cout<<"el volumen del cilindro es: "<<volumen<<"\n";

    system("pause");
    return 0;
 }
 float VolumenCono(int numero){

    float radio,volumen,altura;
    double pi=M_PI;

    std::cout<<"por favor ingrese el radio del cono: ";
    std::cin>>radio;    
       
    std::cout<<"por favor ingrese la altura del cono: ";
    std::cin>>altura;    
    
    volumen=(pi*pow(radio,2)*altura)/3;
    
    std::cout<<"el volumen del cono es: "<<volumen<<"\n";

    system("pause");
    return 0;
 }
 float VolumenCubo(int numero){

    float lado,volumen;

    std::cout<<"ingrese la medida de un lado del cubo: ";
    std::cin>>lado;

    volumen=pow(lado,3);
    
    std::cout<<"el volumen del cubo es: "<<volumen<<"\n";

    system("pause");
    return 0;
 }
 float VolumenEsfera(int numero){
    
    float radio,volumen;
    double pi=M_PI;

    std::cout<<"ingrese el valor del radio de la esfera: ";
    std::cin>>radio;

    volumen=(4*pi*pow(radio,3))/3;
    
    std::cout<<"el volumen de la esfera es: "<<volumen<<"\n";

    system("pause");
    return 0;
 }
 float VolumenPiramide(int numero){

    float ladoBase,altura,volumen;

    std::cout<<"ingrese la medida de un lado de la base de la piramide: ";
    std::cin>>ladoBase;

    volumen=(pow(ladoBase,2)*altura)/3;
    
    std::cout<<"el volumen de la piramide es: "<<volumen<<"\n";

    system("pause");
    return 0;
 }

 float PerimetroCirculo(int numero){

    float radio,perimetro;
    double pi=M_PI;

    std::cout<<"por favor ingrese el radio del circulo: ";
    std::cin>>radio;

    perimetro=2*radio*pi;
    
    std::cout<<"el perimetro del circulo es: "<<perimetro<<"\n";

    system("pause");
    return 0;
 }
 float PerimetroTriangulo(int numero){

    int lado,perimetro;

    std::cout<<"por favor ingrese el lado del triangulo: ";
    std::cin>>lado;

    perimetro=lado*3;
    
    std::cout<<"el perimetro del triangulo es: "<<perimetro<<"\n";

    system("pause");
    return 0;
 }
 float PerimetroCuadrado(int numero){

    int lado,perimetro;

    std::cout<<"por favor ingrese el lado del cuadrado: ";
    std::cin>>lado;

    perimetro=lado*4;
    
    std::cout<<"el perimetro del cuadrado es: "<<perimetro<<"\n";

    system("pause");
    return 0;
 }
 float PerimetroRectangulo(int numero){

    float longitud, ancho;

    std::cout << "Ingrese la longitud del rectángulo: ";
    std::cin >> longitud;

    std::cout << "Ingrese el ancho del rectángulo: ";
    std::cin >> ancho;

    float perimetro = 2 * (longitud + ancho);

    std::cout << "El perímetro del rectángulo es: " << perimetro << std::endl;

    return 0;
 }
 float PerimetroOctaedro(int numero){

    int arista,suma;

    std::cout<<"por favor ingrese el valor de la arista del octaedro: ";
    std::cin>>arista;

    suma=arista*12;
    
    std::cout<<"el perimetro del octaedro es: "<<suma<<"\n";

    system("pause");
    return 0;
 }

 int menuAreas(int numero){
    
    switch (numero)
    {
    case 1: AreaCirculo(numero); return 0;
    case 2: AreaTriangulo(numero); return 0;
    case 3: AreaCuadrado(numero); return 0;
    case 4: AreaRectangulo(numero); return 0;
    case 5: AreaParalelogramo(numero); return 0;
    case 0: return 0;
    }
    
 }
 int menuVolumen(int numero){
    
    switch (numero)
    {
        
    case 1:/*cilindro*/VolumenCilindro(numero); return 0;
    case 2:/*cono*/VolumenCono(numero); return 0;
    case 3:/*cubo*/VolumenCubo(numero); return 0;
    case 4:/*esfera*/VolumenEsfera(numero); return 0;
    case 5:/*piramide*/VolumenPiramide(numero); return 0;
    case 0:/*salir*/ return 0;
    }
    
 }
 int menuPerimetro(int numero){

    switch (numero)
    {
    case 1:/*circulo*/PerimetroCirculo(numero); return 0;
    case 2:/*triangulo*/PerimetroTriangulo(numero);  return 0;
    case 3:/*cuadrado*/PerimetroCuadrado(numero); return 0;
    case 4:/*rectangulo*/PerimetroRectangulo(numero); return 0;
    case 5:/*octaedro*/PerimetroOctaedro(numero); return 0;
    case 0:/*salir*/ return 0;
    }
    
 }
 int main (){

    int principal;

    regreso:

    std::cout<<"Bienvenido usuario a (mspds).\n";
    std::cout<<"Ingrese el valor numerico indicado para poder acceder correctamente: \n";
    std::cout<<"1.-Areas\n";
    std::cout<<"2.-Perimetros\n";
    std::cout<<"3.-Volumenes\n";
    std::cout<<"0.-SALIR\n";

    std::cin>>principal;

    if (principal<0 || principal>=4)
    {
        std::cout<<"por que la gente no puede seguir tan sencillas explicaciones\n";
        std::cout<<"Intentalo de nuevo:\n\n";
        goto regreso;
    }
    
    switch (principal)
    {
    case 1:
        int numero;
        std::cout<<"Ingrese Un valor numerico: \n";
        std::cout<<"1.-Area Circulo\n";
        std::cout<<"2.-Area Triangulo\n";
        std::cout<<"3.-Area Cuadrado\n";
        std::cout<<"4.-Area Rectangulo\n";
        std::cout<<"5.-Area Paralelogramo\n";
        std::cout<<"0.-SALIR\n";
        std::cin>>numero;

        if (numero<0 || numero>=6)
        {
        std::cout<<"por que la gente no puede seguir tan sencillas explicaciones\n";
        std::cout<<"Intentalo de nuevo:\n\n";
        goto regreso;
        }
        menuAreas(numero);
        goto regreso;


    case 2:

        int numero2;
        std::cout<<"Ingrese Un valor numerico: \n";
        std::cout<<"1.-Perimetro Circulo\n";
        std::cout<<"2.-Perimetro Triangulo\n";
        std::cout<<"3.-Perimetro Cuadrado\n";
        std::cout<<"4.-perimetro Rectangulo\n";
        std::cout<<"5.-Perimetro Octaedro\n";
        std::cout<<"0.-SALIR\n";
        std::cin>>numero;

        if (numero2<0 || numero2>=6)
        {
        std::cout<<"por que la gente no puede seguir tan sencillas explicaciones\n";
        std::cout<<"Intentalo de nuevo:\n\n";
        goto regreso;
        }
        menuPerimetro(numero);
        goto regreso;
    case 3:

        int numero1;
        std::cout<<"Ingrese Un valor numerico: \n";
        std::cout<<"1.-Volumen Cilindro\n";
        std::cout<<"2.-Volumen Cono\n";
        std::cout<<"3.-Volumen Cubo\n";
        std::cout<<"4.-Volumen Esfera\n";
        std::cout<<"5.-Volumen Piramide\n";
        std::cout<<"0.-SALIR\n";
        std::cin>>numero1;

        if (numero1<0 || numero1>=6)
        {
        std::cout<<"por que la gente no puede seguir tan sencillas explicaciones\n";
        std::cout<<"Intentalo de nuevo:\n\n";

        goto regreso;
        }
        menuVolumen(numero);
        goto regreso;
    case 0:

        std::cout<<"Hasta luego usuario (^_^)\n";
        system("pause");
        return 0;

    }
    system("pause");
    return 0;
    }