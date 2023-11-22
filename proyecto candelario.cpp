#include <iostream>

using namespace std;

int main() {

    int vida = 100;
    int opcion;
    
    do {
	

    	cout << "Bienvenido a la historia interactiva. En esta, se te contará una historia con diferentes caminos a elegir." << endl;
		cout << "Espero que sea de tu agrado y te diviertas!" << endl;
		cout << "favor de elegir una opcion con el numero correspondiente" << endl;
		cout << "1.-Iniciar partida" << endl;
		cout << "2.-Informacion de contacto" << endl;
		cout << "3.-Clase y profesor" << endl;
		cout << "4.-Salir del juego" << endl;
	
		cout << "Porfavor ingresa tu eleccion: ";
		cin >> opcion;
	
		switch (opcion) {   // aqui pondremos el numero de la opcion a elejir :b 
			case 1:
				cout << "tu historia empieza aqui" << endl;
				
				cout << "volviendo al menu" << endl;
			break;
		
			case 2:        // dar la informacion donde me podrian contactar 
				cout << "Mi nombre es Axel Rafael Ramos Benitez Mi correo de contacto es 25.axel.rafael@gmail.com cualquier duda o aclaracion se puede dar ahi salgo en intagram como @axel_rams" << endl;
				cout << "volviendo al menu" << endl;
			break;
		
			case 3:       //dar la informacion de clase y grupo en la escuela
				cout << "Escuela: Facultad de estudios superiores Aragon" << endl;
				cout << "Grupo: 1158"  << endl;
				cout << "Proyecto ico primer semestre"<< endl;
				cout << "volviendo al menu" << endl;
			break;
			
			case 4:       //salir del juego
				cout << "!Gracias por jugar" << endl;
		
			break;
		
		
		default: 
			cout << "Elije una opcion valida" << endl;
		}
	} while (opcion!=4);
	
	return 0;
}

