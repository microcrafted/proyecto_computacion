#include <iostream>

using namespace std;

int main() {
    int vida = 100; // este ser� el recolectable
    int opcion;     // este se usar� para interactuar con el men� principal
    int historia;   // esta se usar� para poder moverte en la historia
	int historia2;   // esto sera el segundo punto interactivo en la historia
	int historia3;   // tercer punto interactivo en la historia
	int historia4;   // cuarto punto interactivo en la historia
	int historia5;  //quinto y ultimo punto de interaccion dentro de esta historia
    do {
        cout << "Bienvenido a la historia interactiva. En esta, se te contar� una historia con diferentes caminos a elegir." << endl;
        cout << "Espero que sea de tu agrado y te diviertas!" << endl;
        cout << "Por favor, elige una opci�n con el n�mero correspondiente" << endl;
        cout << "1. Iniciar partida" << endl;
        cout << "2. Informacion de contacto" << endl;
        cout << "3. Clase y profesor" << endl;
        cout << "4. Calculadora" << endl;
        cout << "5. Salir del juego" << endl;
        cout << "Por favor, ingresa tu eleccion: ";
        cin >> opcion;

        switch (opcion) {   // aqu� pondremos el n�mero de la opci�n a elegir :O
            case 1:
                    cout << "Tu historia empieza aqu�. Eres un aventurero buscando el tan aclamado elixir de la vida en el antiguo reino de Nezahualc�yotl, y est�s en b�squeda del poderoso elixir de la vida, ya que con este se lograr� tener la inmortalidad." << endl;
                    cout << "Actualmente, tu vida es: " << vida << "% y a continuaci�n diremos las pruebas a seguir para conseguir el elixir" << endl;
                    cout << "Seg�n la leyenda hay 3 posibles formas de poder llegar a este incre�ble tesoro. La primera forma es cruzando el terror�fico bosque oscuro donde se encuentran ara�as gigantes. La segunda forma de ir es por el sendero iluminado en donde se encuentra un humo t�xico el cual te quitar� vida mientras lo pasas. La tercera y �ltima forma es ir y explorar la cueva misteriosa, la cual no se encuentra con ning�n registro de que alguien haya podido pasar por ella." << endl;
                    cout << "Entonces, �cu�l de estas opciones eligir�s?" << endl;
                    cout << "1. Bosque oscuro" << endl;
                    cout << "2. Sendero iluminado" << endl;
                    cout << "3. Cueva misteriosa" << endl;
                    cin >> historia;
                    	if(historia == 1) {
                    		
						}
                    
                    

                cout << "Volviendo al men�" << endl;
                break;

            case 2:        // dar la informaci�n donde me podr�an contactar
                cout << "Nombre: Axel Rafael Ramos Benitez" << endl;
                cout << "Correo: 25.axel.rafael@gmail.com" << endl;
                cout << "Instagram: @axel_rams" << endl;
                cout << "Volviendo al men� principal." << endl;
                break;

            case 3:       // dar la informaci�n de clase y grupo en la escuela
                cout << "Escuela: Facultad de estudios superiores Arag�n" << endl;
                cout << "Grupo: 1158"  << endl;
                cout << "Proyecto ico primer semestre" << endl;
                cout << "Volviendo al men�." << endl;
                break;

            case 4:       
					char operador;
    				double numero1, numero2;

					cout << "Ingresa un operador (+, -, *, /): ";
    				cin >> operador;

    				cout << "Ingresa dos n�meros: ";
    				cin >> numero1 >> numero2;

				    double resultado;

				    switch (operador) {
        				case '+':
            				resultado = numero1 + numero2;
            			break;
        				case '-':
            				resultado = numero1 - numero2;
            			break;
        				case '*':
            				resultado = numero1 * numero2;
            			break;
        				case '/':
           				 if (numero2 != 0) {
            				    resultado = numero1 / numero2;
           					} else {
                				cout << "Error: No se puede dividir por cero." << endl;
                			return 1;  // Salir del programa con un c�digo de error
            				}
            			break;
        					default:
        					    cout << "Operador no v�lido. Por favor, ingresa un operador v�lido (+, -, *, /)." << endl;
       					    return 1;  // Salir del programa con un c�digo de error
   					 }

   					 cout << "El resultado es: " << resultado << endl;
						  break;

            case 5:       // salir del juego
                cout << "�Gracias por jugar!" << endl;
                break;

            default: 
                cout << "Elige una opci�n v�lida" << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}

