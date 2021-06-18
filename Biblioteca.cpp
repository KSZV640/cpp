#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[6][4];


void cargarLibros() {
    // Arreglo con categoria y descripcion
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)"                   ;libros[0][2] = "Julio Cortaza"     ;libros[0][3] = "Hernan Diaz";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos"                     ;libros[1][2] = "Ramon Amaya"       ;libros[1][3] = "Gerald River";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos"                        ;libros[2][2] = "Ronal River"       ;libros[2][3] = "Julio Cortaza";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion"                        ;libros[3][2] = "Gerald Jay"        ;libros[3][3] = "Ramon Amaya";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos"                           ;libros[4][2] = "Stiven Ruiz"        ;libros[4][3] = "Ronal River";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos"                          ;libros[5][2] = "Hernan Cortes"      ;libros[5][3] = "Stiven Ruiz";
	                                                                                       
}



int main(int argc, char const *argv[])
{
    cargarLibros();
    
    int t_bus=0;
    
        cout << "Ingrese opcion 1 si quiere buscar por libros "<<endl;
    	cout << "Ingrese la opcion 2 si quiere buscar por autor "<<endl;
    
        cin >> t_bus;
    
    	if (t_bus==1){
    	
    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese el nombre del autor que buscas: ";
        cin >> buscar;

        // busqueda de autor
        for (int i = 0; i < 6; i++)
        {
            string libro = libros[i][2];
            string libroEnminuscula = libro;
            // transformamos a minuscula los string buscar y libro
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroEnminuscula.find(buscar) != string::npos) {
                cout << "autor encontrado: " << libro << endl;

                cout << "Tambien te sugerimos estos autores: " << endl;

                int sugerencia1 = rand() % 5 + 1;
                int sugerencia2 = rand() % 5 + 1;
                int sugerencia3 = rand() % 5 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][2] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][2] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][2] << endl;

                salir = true;
                break;
            }
        }
        

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el autor que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
}

	else if (t_bus==2){
	

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro que busca: ";
        cin >> buscar;

        // busqueda libro
        for (int i = 0; i < 6; i++)
        {
            string libro = libros[i][1];
            string libroEnminuscula = libro;
            // transformamos a minuscula los string buscar y libro
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroEnminuscula.find(buscar) != string::npos) {
                cout << "Libro encontrado: " << libro << endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 5 + 1;
                int sugerencia2 = rand() % 5 + 1;
                int sugerencia3 = rand() % 5 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
        }
        

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    
}
    return 0;
}
    
