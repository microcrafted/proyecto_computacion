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
        cout << "Por favor, ingresa tu eleccion: "<< endl;
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
                    cout << "4. Salir del juego" << endl;
                    cin >> historia;
                    
                    	if(historia == 1) { // primer punto interactivo 
							cout << "Entraste al bosque oscuro y te enfrentaste a una araña la cual la lograste derrotar pero perdiste 15% de vida. Ahora tienes: " << vida - 15 << "% de vida." << endl;
							vida = vida - 15;  
						}
                    	if (historia == 2){
                   		 	cout << "Tomaste el sendero iluminado y enfrentaste un humo tóxico. Perdiste 10% de vida. Ahora tienes: " << vida - 10 << "% de vida." << endl;
                   		 	vida = vida - 10;
						}
                    	if (historia == 3){
                    		cout << "Exploraste la cueva misteriosa. Encontraste un tesoro y ganaste 20% de vida. Ahora tienes: " << vida + 20 << "% de vida." << endl;
                    		vida = vida + 20;
						}
						if (historia == 4){
							cout << "saliendo del juego Vuelve pronto!" << endl;
							return 0;
						}
						
							cout << "Despues de lograr sobrevivir por estos caminos te encuentras a un viejo mago el cual te advierte que para poder llegar al siguiente lugar llamado Ciudad azteca tienes que usar una proteccion magica la cual la adquiriras de una pocion" << endl;
							cout << "La primer pocion era de un color HORRIBLE pero que holia bien la segunda pocion tiene un color llamativo pero huele agrio y la ultima no cuenta con ningun color ni tampoco olor Entonces cual elijes" << endl;
							cout << "1. Color horrible" << endl;
        	        	    cout << "2. La mas llamativa" << endl;
        	    	        cout << "3. La simple" << endl;
        		            cout << "4. Salir del juego" << endl;
        		            cin >> historia2;
        		    	        if(historia2 == 1) { // segundo punto interactivo 
									cout << "El color era HORRIBLE y el sabor tambien esta solo te hizo sentir mal y tardarte horas en recuperarte te quito 1 de vida tu vida actual es : " << vida -1 << "% de vida." << endl; 
									vida = vida-1;
								}
                    			if (historia2 == 2){
                   				 	cout << "Esta aunque tuviera un holor agrio te hizo sentir con mas energia por lo que te curo 9 puntos de vida, tu vida actual es: " << vida + 9 << "% de vida." << endl;
                   				 	vida = vida + 9;
								}
                    			if (historia2 == 3){
                    				cout << "Al tomar esta pocion no tuviste ningun efecto ni positivo ni negativo: " << vida << "% de vida." << endl;
                    				vida = vida;
								}
								if (historia2 == 4){
									cout << "saliendo del juego Vuelve pronto!" << endl;
									return 0;
								}
									cout << "Una vez recuperados de tomar esa pocion alfin vas a poder adentrarte a la aterradora CIUDAD AZTECA en donde te podras encontrar todo tipo de gente para poder llegar e Nezahualcóyotl" << endl;
									cout << "Ahora tendras que decidir entre ir en Metro Combi o Caminando para poder llegar y alfin beber este elixir mistico" << endl;
									cout << "1. Ir en metro" << endl;
        	        	    		cout << "2. Ir en combi" << endl;
        	    	       			cout << "3. Ir caminando" << endl;
        		            		cout << "4. Salir del juego" << endl;
        		            		cin >> historia3;
        		            			if(historia3 == 1) { // tercer punto interactivo 
											cout << "Al irte por metro te metiste cuando estaba mas lleno por lo que te aplastaron y perdiste algo de vida -5 puntos de vida : " << vida - 5 << "% de vida." << endl; 
											vida = vida - 5;
										}
                    					if (historia3 == 2){
                   				 			cout << "Al irte por la combi tardaste mas tiempo pero no te paso nada por esta vez ganaste 2 puntos de vida: " << vida + 2 << "% de vida." << endl;
                   				 			vida = vida + 2;
										}
                    					if (historia3 == 3){
                    						cout << "Decides irte caminando y te terminas perdiendo entre las calles de este caotico sitio y te cantaron la de ya te la sabes y no te la supiste sufriste daño critico por lo que terminas perdiendo toda tu vida: " << vida - 100 << "% de vida." << endl;
                    						vida = vida - 100;
                    						cout <<  "intentalo nuevamente" << endl;
                    						return 1;
										}
										if (historia3 == 4){
											cout << "saliendo del juego Vuelve pronto!" << endl;
											return 0;
										}
											cout << "Estas en la entrada del reyno de Neza ahora lo siguiente es llegar a donde se encuentra el elixir tan aclamado por todos por lo que decides preguntarle un viejo loco que dice saber donde se encuentra" << endl;
											cout << "este te dice que se encuentra en una fortaleza llamada Facultad De Estudios Superiores Plantel aragon"<< endl;
											cout << "por lo que ahora tienes varias opciones para poder llegar ahi la primera es ir por un lugar llamado rancho seco el cual se ve un poco solitario y esta lleno un almas perdidas, la otra forma de llegar es por bosque de africa el cual se ve mas tranquilo pero se escuchan llantos de la gente y por ultimo no hacer nada" << endl;
											cout << "1. Rancho Seco" << endl;
        	        	    				cout << "2. Bosque de africa" << endl;
        	    	       					cout << "3. No hacer nada" << endl;
        		            				cout << "4. Salir del juego" << endl;
        		            				cin >> historia4; 
        		            					if (historia4 == 1) { // cuarto punto interactivo 
													cout << "Al ir por rancho seco te encuentras con uan de esas almas perdidas la cual te mete a un lugar llamado SHINE en el cual te terminaron quitando 20 puntos de vida, tu vida actual es: " << vida - 20 << "% de vida." << endl; 
													vida = vida - 20;
												}
                    							if (historia4 == 2){
                   				 					cout << "En este camino de Bosques increiblemente te encuentras un tesoro de 10 puntos de vida tu vida actual es: " << vida + 10 << "% de vida." << endl;
                   				 					vida = vida + 10;
												}
                    							if (historia4 == 3){
                    								cout << "Decides no hacer nada y ahi te quedas durante 10 horas hasta que el viejo te lleva para que no te pierdas: " << vida << "% de vida." << endl;
                    								vida = vida;
												}
												if (historia4 == 4){
													cout << "saliendo del juego Vuelve pronto!" << endl;
													return 0;
												}
        		            						cout << "Alfin despues de todo logramos llegar a la fortaleza ahora tendremos que buscar en las distintas partes este elixir pero si te equivocas tendras que empezar de nuevo mucha suerte y ojala la encuentres" << endl;
													cout << "tienes la direccion general Las torres y por ultimo el teatro pero cual de estas podras encontrar este elixir si llegas a quivocarte olvidaras como es que llegaste ahi MUCHA SUERTE AVENTURERO" << endl;
													cout << "1. direccion" << endl;
													cout << "2. torres" << endl;
													cout << "3. teatro" << endl;
													cin >> historia5;
														if(historia5 == 1) { // quinta y tultimo punto interactivo 
															cout << "Entras a la direccion y te encuentras una puerta misteriosa despues de toda tu aventura te das cuenta que es una farsa no habia ningun tesoro aqui solo fue una aventura sin sentido fue como el one piece : " << vida << "% de vida." << endl; 
															vida = vida;
														}
                    									if (historia5 == 2){
                   				 							cout << "Entras y no ves nada es un cuarto oscuro entonces te das cuenta que es una farsa no habia ningun tesoro aqui solo fue una aventura sin sentido fue como el one piece: " << vida -100 << "% de vida." << endl;
                   				 							vida = vida - 100;
														}
                    									if (historia5 == 3){
                    										cout << "Entras al teatro y no encuentras nada terminas aburriendote y regresando a tu hogar: " << vida << "% de vida." << endl;
                    										vida = vida;
														}
														if (historia5 == 4){
															cout << "saliendo del juego Vuelve pronto!" << endl;
															return 0;
														}
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

