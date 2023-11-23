#include <iostream>

using namespace std;

int main() {
    int vida = 100; // este será el recolectable
    int opcion;     // este se usará para interactuar con el menú principal
    int historia;   // esta se usará para poder moverte en la historia
	int historia2;   // esto sera el segundo punto interactivo en la historia
	int historia3;   // tercer punto interactivo en la historia
	int historia4;   // cuarto punto interactivo en la historia
	int historia5;  //quinto y ultimo punto de interaccion dentro de esta historia
    do {
        cout << "Bienvenido a la historia interactiva. En esta, se te contará una historia con diferentes caminos a elegir." << endl;
        cout << "Espero que sea de tu agrado y te diviertas!" << endl;
        cout << "Por favor, elige una opción con el número correspondiente" << endl;
        cout << "1. Iniciar partida" << endl;
        cout << "2. Informacion de contacto" << endl;
        cout << "3. Clase y profesor" << endl;
        cout << "4. Calculadora" << endl;
        cout << "5. Salir del juego" << endl;
        cout << "Por favor, ingresa tu eleccion: ";
        cin >> opcion;

        switch (opcion) {   // aquí pondremos el número de la opción a elegir :O
            case 1:
                    cout << "Tu historia empieza aquí. Eres un aventurero buscando el tan aclamado elixir de la vida en el antiguo reino de Nezahualcóyotl, y estás en búsqueda del poderoso elixir de la vida, ya que con este se logrará tener la inmortalidad." << endl;
                    cout << "Actualmente, tu vida es: " << vida << "% y a continuación diremos las pruebas a seguir para conseguir el elixir" << endl;
                    cout << "Según la leyenda hay 3 posibles formas de poder llegar a este increíble tesoro. La primera forma es cruzando el terrorífico bosque oscuro donde se encuentran arañas gigantes. La segunda forma de ir es por el sendero iluminado en donde se encuentra un humo tóxico el cual te quitará vida mientras lo pasas. La tercera y última forma es ir y explorar la cueva misteriosa, la cual no se encuentra con ningún registro de que alguien haya podido pasar por ella." << endl;
                    cout << "Entonces, ¿cuál de estas opciones eligirás?" << endl;
                    cout << "1. Bosque oscuro" << endl;
                    cout << "2. Sendero iluminado" << endl;
                    cout << "3. Cueva misteriosa" << endl;
                    cin >> historia;
                    	if(historia == 1) {
                    		
						}
                    
                    

                cout << "Volviendo al menú" << endl;
                break;

            case 2:        // dar la información donde me podrían contactar
                cout << "Nombre: Axel Rafael Ramos Benitez" << endl;
                cout << "Correo: 25.axel.rafael@gmail.com" << endl;
                cout << "Instagram: @axel_rams" << endl;
                cout << "Volviendo al menú principal." << endl;
                break;

            case 3:       // dar la información de clase y grupo en la escuela
                cout << "Escuela: Facultad de estudios superiores Aragón" << endl;
                cout << "Grupo: 1158"  << endl;
                cout << "Proyecto ico primer semestre" << endl;
                cout << "Volviendo al menú." << endl;
                break;

            case 4:       
					char operador;
    				double numero1, numero2;

					cout << "Ingresa un operador (+, -, *, /): ";
    				cin >> operador;

    				cout << "Ingresa dos números: ";
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
                			return 1;  // Salir del programa con un código de error
            				}
            			break;
        					default:
        					    cout << "Operador no válido. Por favor, ingresa un operador válido (+, -, *, /)." << endl;
       					    return 1;  // Salir del programa con un código de error
   					 }

   					 cout << "El resultado es: " << resultado << endl;
						  break;

            case 5:       // salir del juego
                cout << "¡Gracias por jugar!" << endl;
                break;

            default: 
                cout << "Elige una opción válida" << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}

