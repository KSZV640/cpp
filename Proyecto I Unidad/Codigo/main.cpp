#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int opcion;
    cout<<"\n\t\t********************\n";
	cout<<"\t\t\t   MENU DE JUEGOS  \n\n";
	cout<<"\n\t\t********************\n";

    cout<<"\t\t\t Selecione un juego\n";
    
    cout<<"1 - Nave Estelar" <<endl <<endl;
    cout<<"2 - Serpiente" <<endl <<endl;
    cout<<"Ingrese un numero del menu para seleccionar un juego:";
    cin>>opcion;

    switch(opcion)
{
    case 1:
        starShip();
        break;
    case 2: 
        snake();
        break;
}

    return 0;
}
