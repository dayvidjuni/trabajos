#include <iostream>
#include <math.h>
#include <string.h>

float AreaHexagono(int numero){

   float lado, apotema, areaHexagono;

    std::cout << "Ingrese la longitud del lado del hexagono: ";
    std::cin >> lado;

    std::cout << "Ingrese la longitud de la apotema del hexagono: ";
    std::cin >> apotema;

    areaHexagono = (6 * lado * apotema) / 2.0;

    std::cout << "El area del hexagono es: " << areaHexagono << "\n";

    system("pause");
   
}
float AreaPentagono(int numero){

    float lado, apotema, areaPentagono;

    std::cout << "Ingrese la longitud del lado del pentagono: ";
    std::cin >> lado;

    std::cout << "Ingrese la longitud de la apotema del pentagono: ";
    std::cin >> apotema;

    areaPentagono = (5 * lado * apotema) / 2.0;

    std::cout << "El area del pentagono es: " << areaPentagono << "\n";

    system("pause");
    return 0;

}
float AreaTrapecio(int numero){

   float baseMayor, baseMenor, altura, areaTrapecio;

    std::cout << "Ingrese la longitud de la base mayor del trapecio: ";
    std::cin >> baseMayor;

    std::cout << "Ingrese la longitud de la base menor del trapecio: ";
    std::cin >> baseMenor;

    std::cout << "Ingrese la altura del trapecio: ";
    std::cin >> altura;

    areaTrapecio = ((baseMayor + baseMenor) * altura) / 2.0;

    std::cout << "El area del trapecio es: " << areaTrapecio << "\n";

    system("pause");
    return 0;
}


 float AreaRomboide(int numero){
   
   float base, altura, areaRomboide;
    std::cout << "Ingrese la longitud de la base del romboide: ";
    std::cin >> base;

    std::cout << "Ingrese la altura del romboide: ";
    std::cin >> altura;

    areaRomboide = base * altura;

    std::cout << "El area del romboide es: " << areaRomboide << "\n";

    system("pause");
    return 0;
 }

 float AreaRombo(int numero){

    float diagonalMayor, diagonalMenor, area;

    std::cout << "Ingrese la longitud de la diagonal mayor: ";
    std::cin >> diagonalMayor;

    std::cout << "Ingrese la longitud de la diagonal menor: ";
    std::cin >> diagonalMenor;

    area = (diagonalMayor * diagonalMenor) / 2.0;

    std::cout << "El area del rombo es: " << area << "\n";
    return 0;
 }
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

 float volumenPrismarectangular(int numero){
   float longitud, ancho, altura;

    std::cout << "Ingrese la longitud del prisma rectangular: ";
    std::cin >> longitud;

    std::cout << "Ingrese el ancho del prisma rectangular: ";
    std::cin >> ancho;

    std::cout << "Ingrese la altura del prisma rectangular: ";
    std::cin >> altura;

    float volumenPrismaRectangular = longitud * ancho * altura;

    std::cout << "El volumen del prisma rectangular es: " << volumenPrismaRectangular << "\n";

    system("pause");
    return 0;
 }

 float volumenOctaedro(int numero){
   float longitudArista;

    std::cout << "Ingrese la longitud de una arista del octaedro: ";
    std::cin >> longitudArista;

    float volumenOctaedro = (1.0 / 3.0) * std::sqrt(2.0) * std::pow(longitudArista, 3);

    std::cout << "El volumen del octaedro es: " << volumenOctaedro << "\n";

    system("pause");
    return 0;
 }
 float volumentetraedro(int numero){
   float longitudArista;

    std::cout << "Ingrese la longitud de una arista del tetraedro: ";
    std::cin >> longitudArista;

    float volumenTetraedro = (1.0 / 6.0) * std::sqrt(2.0) * std::pow(longitudArista, 3);

    std::cout << "El volumen del tetraedro es: " << volumenTetraedro << "\n";

    system("pause");
    return 0;
 }
 float volumenprismatriangular(int numero){
   float longitudBase, alturaTriangulo, alturaPrisma;

    std::cout << "Ingrese la longitud de la base del triangulo: ";
    std::cin >> longitudBase;

    std::cout << "Ingrese la altura del triangulo: ";
    std::cin >> alturaTriangulo;

    std::cout << "Ingrese la altura del prisma: ";
    std::cin >> alturaPrisma;

    float volumenPrismaTriangular = 0.5 * longitudBase * alturaTriangulo * alturaPrisma;

    std::cout << "El volumen del prisma triangular es: " << volumenPrismaTriangular << "\n";

    system("pause");
    return 0;
 }
 float volumenPiramidetriangular(int numero){
   float base, altura;

    std::cout << "Ingrese la longitud de la base del triangulo: ";
    std::cin >> base;

    std::cout << "Ingrese la altura del triangulo: ";
    std::cin >> altura;

    float areaTriangulo = 0.5 * base * altura;

    std::cout << "El área del triangulo es: " << areaTriangulo << "\n";

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

    std::cout << "Ingrese la longitud del rectangulo: ";
    std::cin >> longitud;

    std::cout << "Ingrese el ancho del rectangulo: ";
    std::cin >> ancho;

    float perimetro = 2 * (longitud + ancho);

    std::cout << "El perimetro del rectangulo es: " << perimetro << std::endl;

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
 float PerimetroRombo(int numero){
   float lado;

    std::cout << "Ingrese la longitud del lado del rombo: ";
    std::cin >> lado;

    float perimetroRombo = 4 * lado;

    std::cout << "El perimetro del rombo es: " << perimetroRombo << "\n";

    system("pause");
    return 0;
 }
 float PerimetroRomboide(int numero){
   float lado1, lado2;

    std::cout << "Ingrese la longitud del primer lado del romboide: ";
    std::cin >> lado1;

    std::cout << "Ingrese la longitud del segundo lado del romboide: ";
    std::cin >> lado2;

    float perimetroRomboide = 2 * (lado1 + lado2);

    std::cout << "El perimetro del romboide es: " << perimetroRomboide << "\n";

    system("pause");
    return 0;
 }

float PerimetroTrapecio(int numero){
   float lado1, lado2, baseMayor, baseMenor;

    std::cout << "Ingrese la longitud del primer lado del trapecio: ";
    std::cin >> lado1;

    std::cout << "Ingrese la longitud del segundo lado del trapecio: ";
    std::cin >> lado2;

    std::cout << "Ingrese la longitud de la base mayor del trapecio: ";
    std::cin >> baseMayor;

    std::cout << "Ingrese la longitud de la base menor del trapecio: ";
    std::cin >> baseMenor;

    float perimetroTrapecio = lado1 + lado2 + baseMayor + baseMenor;

    std::cout << "El perimetro del trapecio es: " << perimetroTrapecio << "\n";

    system("pause");
    return 0;
}

float perimetroPentagono(int numero){
   float lado;

    std::cout << "Ingrese la longitud del lado del pentagono: ";
    std::cin >> lado;

    float perimetroPentagono = 5 * lado;

    std::cout << "El perimetro del pentagono es: " << perimetroPentagono << "\n";

    system("pause");
    return 0;
}
float perimetroHexagono(int numero){
   float lado;

    std::cout << "Ingrese la longitud del lado del hexagono: ";
    std::cin >> lado;

    float perimetroHexagono = 6 * lado;

    std::cout << "El perimetro del hexagono es: " << perimetroHexagono << "\n";

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
    case 6: AreaRombo(numero); return 0;/*rombo*/
    case 7: AreaRomboide(numero); return 0;/*romboide*/
    case 8: AreaTrapecio(numero); return 0;/*trapecio*/
    case 9: AreaPentagono(numero); return 0;/*pentagono*/
    case 10: AreaHexagono(numero); return 0;/*hexagono*/
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
    case 6:/*Prisma rectangular*/volumenPrismarectangular(numero); return 0;
    case 7:/*octaedro*/volumenOctaedro(numero); return 0;
    case 8:/*tetraedro*/volumentetraedro(numero); return 0;
    case 9:/*prisma triangular*/volumenprismatriangular(numero); return 0;
    case 10:/*piramide triangular*/volumenPiramidetriangular(numero); return 0;
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
    case 6:/*Rombo*/PerimetroRombo(numero); return 0;
    case 7:/*romboide*/PerimetroRomboide(numero); return 0;
    case 8:/*trapecio*/PerimetroTrapecio(numero); return 0;
    case 9:/*Pentagono regular*/perimetroPentagono(numero); return 0;
    case 10:/*hexagono regular*/perimetroHexagono(numero); return 0;
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
        std::cout<<"6.-Area Rombo\n";
        std::cout<<"7.-Area Romboide\n";
        std::cout<<"8.-Area trapecio\n";
        std::cout<<"9.-Area Pentagono\n";
        std::cout<<"10.-Area hexagono\n";
        std::cout<<"0.-SALIR\n";
        std::cin>>numero;

        if (numero<0 || numero>=11)
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
        std::cout<<"6.-Perimetro Rombo\n";
        std::cout<<"7.-Perimetro Romboide\n";
        std::cout<<"8.-Perimetro Trapecio\n";
        std::cout<<"9.-Perimetro Pentagono regular\n";
        std::cout<<"10.-Perimetro Hexagono regular\n";
        std::cout<<"0.-SALIR\n";
        std::cin>>numero;

        if (numero2<0 || numero2>=11)
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
        std::cout<<"6.-Volumen Prisma rectangular\n";
        std::cout<<"7.-Volumen Octaedro\n";
        std::cout<<"8.-Volumen Tetraedro\n";
        std::cout<<"9.-Volumen Prisma triangular\n";
        std::cout<<"10.-Volumen Piramide triangular\n";
        std::cout<<"0.-SALIR\n";
        std::cin>>numero1;

        if (numero1<0 || numero1>=11)
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