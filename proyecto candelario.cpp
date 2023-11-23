#include <iostream>

using namespace std;

int main() {
    int vida = 100; // Este será el recolectable
    int opcion;     // Se usará para interactuar con el menú principal
    int historia;   // Se usará para moverte en la historia
    int historia2;  // Segundo punto interactivo en la historia
    int historia3;  // Tercer punto interactivo en la historia
    int historia4;  // Cuarto punto interactivo en la historia
    int historia5;  // Quinto y último punto de interacción dentro de esta historia

    do {
        cout << "Bienvenido a la historia interactiva. En esta, se te contará una historia con diferentes caminos a elegir." << endl;
        cout << "Espero que sea de tu agrado y te diviertas." << endl;
        cout << "Por favor, elige una opción con el número correspondiente." << endl;
        cout << "1. Iniciar partida" << endl;
        cout << "2. Información de contacto" << endl;
        cout << "3. Clase y profesor" << endl;
        cout << "4. Calculadora" << endl;
        cout << "5. Salir del juego" << endl;
        cout << "Por favor, ingresa tu elección: " << endl;
        cin >> opcion;

        switch (opcion) {   // Aquí pondremos el número de la opción a elegir :O
            case 1:
                cout << "Tu historia empieza aquí. Eres un aventurero buscando el tan aclamado elixir de la vida en el antiguo reino de Nezahualcóyotl y estás en búsqueda del poderoso elixir de la vida, ya que con este se logrará tener la inmortalidad." << endl;
                cout << "Actualmente, tu vida es: " << vida << "% y a continuación diremos las pruebas a seguir para conseguir el elixir." << endl;
                cout << "Según la leyenda hay 3 posibles formas de poder llegar a este increíble tesoro. La primera forma es cruzando el terrorífico bosque oscuro donde se encuentran arañas gigantes. La segunda forma de ir es por el sendero iluminado en donde se encuentra un humo tóxico el cual te quitará vida mientras lo pasas. La tercera y última forma es ir y explorar la cueva misteriosa, la cual no se encuentra con ningún registro de que alguien haya podido pasar por ella." << endl;
                cout << "Entonces, ¿cuál de estas opciones eligirás?" << endl;
                cout << "1. Bosque oscuro" << endl;
                cout << "2. Sendero iluminado" << endl;
                cout << "3. Cueva misteriosa" << endl;
                cout << "4. Salir del juego" << endl;
                cin >> historia;

                if (historia == 1) { // Primer punto interactivo 
                    cout << "Entraste al bosque oscuro y te enfrentaste a una araña la cual lograste derrotar pero perdiste 15% de vida. Ahora tienes: " << vida - 15 << "% de vida." << endl;
                    vida = vida - 15;
                }
                if (historia == 2) {
                    cout << "Tomaste el sendero iluminado y enfrentaste un humo tóxico. Perdiste 10% de vida. Ahora tienes: " << vida - 10 << "% de vida." << endl;
                    vida = vida - 10;
                }
                if (historia == 3) {
                    cout << "Exploraste la cueva misteriosa. Encontraste un tesoro y ganaste 20% de vida. Ahora tienes: " << vida + 20 << "% de vida." << endl;
                    vida = vida + 20;
                }
                if (historia == 4) {
                    cout << "Saliendo del juego. ¡Vuelve pronto!" << endl;
                    return 0;
                }

                cout << "Después de lograr sobrevivir por estos caminos te encuentras a un viejo mago el cual te advierte que para poder llegar al siguiente lugar llamado Ciudad Azteca tienes que usar una protección mágica la cual la adquirirás de una poción." << endl;
                cout << "La primera poción era de un color HORRIBLE pero que olía bien. La segunda poción tiene un color llamativo pero huele agrio y la última no cuenta con ningún color ni tampoco olor. ¿Entonces cuál eliges?" << endl;
                cout << "1. Color horrible" << endl;
                cout << "2. La más llamativa" << endl;
                cout << "3. La simple" << endl;
                cout << "4. Salir del juego" << endl;
                cin >> historia2;

                if (historia2 == 1) { // Segundo punto interactivo 
                    cout << "El color era HORRIBLE y el sabor también estaba mal. Solo te hizo sentir mal y tardarte horas en recuperarte. Te quitó 1 de vida, tu vida actual es: " << vida - 1 << "% de vida." << endl;
                    vida = vida - 1;
                }
                if (historia2 == 2) {
                    cout << "Aunque tuviera un olor agrio, te hizo sentir con más energía, por lo que te curó 9 puntos de vida. Tu vida actual es: " << vida + 9 << "% de vida." << endl;
                    vida = vida + 9;
                }
                if (historia2 == 3) {
                    cout << "Al tomar esta poción no tuviste ningún efecto ni positivo ni negativo. Tu vida actual es: " << vida << "% de vida." << endl;
                    vida = vida;
                }
                if (historia2 == 4) {
                    cout << "Saliendo del juego. ¡Vuelve pronto!" << endl;
                    return 0;
                }

                cout << "Una vez recuperados de tomar esa poción, al fin vas a poder adentrarte a la aterradora CIUDAD AZTECA, donde te podrás encontrar con todo tipo de gente para poder llegar a Nezahualcóyotl." << endl;
                cout << "Ahora tendrás que decidir entre ir en Metro, Combi o Caminando para poder llegar y al fin beber este elixir místico." << endl;
                cout << "1. Ir en metro" << endl;
                cout << "2. Ir en combi" << endl;
                cout << "3. Ir caminando" << endl;
                cout << "4. Salir del juego" << endl;
                cin >> historia3;

                if (historia3 == 1) { // Tercer punto interactivo 
                    cout << "Al irte por metro, te metiste cuando estaba más lleno, por lo que te aplastaron y perdiste algo de vida (-5 puntos de vida): " << vida - 5 << "% de vida." << endl;
                    vida = vida - 5;
                }
                if (historia3 == 2) {
                    cout << "Al irte por la combi, tardaste más tiempo pero no te pasó nada. Por esta vez ganaste 2 puntos de vida: " << vida + 2 << "% de vida." << endl;
                    vida = vida + 2;
                }
                if (historia3 == 3) {
                    cout << "Decides irte caminando y te terminas perdiendo entre las calles de este caótico sitio y te cantaron la de ya te la sabes y no te la supiste. Sufres daño crítico, por lo que terminas perdiendo toda tu vida: " << vida - 100 << "% de vida." << endl;
                    vida = vida - 100;
                    cout << "Inténtalo nuevamente" << endl;
                    return 1;
                }
                if (historia3 == 4) {
                    cout << "Saliendo del juego. ¡Vuelve pronto!" << endl;
                    return 0;
                }

                cout << "Estás en la entrada del reino de Neza. Ahora lo siguiente es llegar a donde se encuentra el elixir tan aclamado por todos, por lo que decides preguntarle a un viejo loco que dice saber dónde se encuentra." << endl;
                cout << "Este te dice que se encuentra en una fortaleza llamada Facultad De Estudios Superiores Plantel Aragón." << endl;
                cout << "Por lo que ahora tienes varias opciones para poder llegar allí. La primera es ir por un lugar llamado Rancho Seco, el cual se ve un poco solitario y está lleno de almas perdidas. La otra forma de llegar es por Bosque de África, el cual se ve más tranquilo pero se escuchan llantos de la gente. Por último, no hacer nada." << endl;
                cout << "1. Rancho Seco" << endl;
                cout << "2. Bosque de África" << endl;
                cout << "3. No hacer nada" << endl;
                cout << "4. Salir del juego" << endl;
                cin >> historia4;

                if (historia4 == 1) { // Cuarto punto interactivo 
                    cout << "Al ir por Rancho Seco, te encuentras con una de esas almas perdidas que te lleva a un lugar llamado SHINE en el cual te quitaron 20 puntos de vida. Tu vida actual es: " << vida - 20 << "% de vida." << endl;
                    vida = vida - 20;
                }
                if (historia4 == 2) {
                    cout << "En este camino de Bosques, increíblemente te encuentras con un tesoro de 10 puntos de vida. Tu vida actual es: " << vida + 10 << "% de vida." << endl;
                    vida = vida + 10;
                }
                if (historia4 == 3) {
                    cout << "Decides no hacer nada y ahí te quedas durante 10 horas hasta que el viejo te lleva para que no te pierdas. Tu vida actual es: " << vida << "% de vida." << endl;
                    vida = vida;
                }
                if (historia4 == 4) {
                    cout << "Saliendo del juego. ¡Vuelve pronto!" << endl;
                    return 0;
                }

                cout << "Al fin, después de todo, logramos llegar a la fortaleza. Ahora tendremos que buscar en las distintas partes este elixir, pero si te equivocas, tendrás que empezar de nuevo. ¡Mucha suerte y ojalá lo encuentres!" << endl;
                cout << "Tienes la dirección general, las torres y por último, el teatro. Pero, ¿cuál de estas podrá encontrar este elixir? Si llegas a equivocarte, olvidarás cómo llegaste aquí. ¡MUCHA SUERTE AVENTURERO!" << endl;
                cout << "1. Dirección" << endl;
                cout << "2. Torres" << endl;
                cout << "3. Teatro" << endl;
                cin >> historia5;

                if (historia5 == 1) { // Quinto y último punto interactivo 
                    cout << "Entras a la dirección y te encuentras una puerta misteriosa. Después de toda tu aventura, te das cuenta de que es una farsa. No había ningún tesoro aquí, solo fue una aventura sin sentido, como el One Piece. Tu vida actual es: " << vida << "% de vida." << endl;
                    vida = vida;
                }
                if (historia5 == 2) {
                    cout << "Entras y no ves nada, es un cuarto oscuro. Entonces te das cuenta de que es una farsa. No había ningún tesoro aquí, solo fue una aventura sin sentido, como el One Piece. Tu vida actual es: " << vida - 100 << "% de vida." << endl;
                    vida = vida - 100;
                }
                if (historia5 == 3) {
                    cout << "Entras al teatro y no encuentras nada. Terminas aburriéndote y regresando a tu hogar. Tu vida actual es: " << vida << "% de vida." << endl;
                    vida = vida;
                }
                if (historia5 == 4) {
                    cout << "Saliendo del juego. ¡Vuelve pronto!" << endl;
                    return 0;
                }
                
                cout << "fin de la historia si gustas puedes volver a jugar o interactuar con el menu" << endl;
                break;

            case 2:        // Dar la información donde me podrían contactar
                cout << "Nombre: Axel Rafael Ramos Benitez" << endl;
                cout << "Correo: 25.axel.rafael@gmail.com" << endl;
                cout << "Instagram: @axel_rams" << endl;
                cout << "Volviendo al menú principal." << endl;
                break;

            case 3:       // Dar la información de clase y grupo en la escuela
                cout << "Escuela: Facultad de Estudios Superiores Aragón" << endl;
                cout << "Grupo: 1158"  << endl;
                cout << "Proyecto ICO primer semestre" << endl;
                cout << "Volviendo al menú." << endl;
                break;
            case 4:      // calculadora para rellenar espacios la verdad no sabia que mas poner srry ;(  
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

