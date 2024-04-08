/*4. Implementar un mecanismo que permita agregar en una lista los juegos favoritos de
cada jugador.*/

#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

    class Videojuego{
        //Atributos:
        string Nombre;
        int CantidadJugadores;
        string Categorías; 
        string Desarrollador;
        double AñoLanzamiento;
        string Plataforma;

        videojuego(){};

        //Declaracion de funciones 
        string agregarAFavoritos();
        void usuarioPuntea();
        string mostrarPorPuntuacion();

        Videojuego Objeto1;

    };

        int desicionUsuario;
        int desicionUsuario1, desicionUsuario2;
        string desicionFavorito;
    string agregarAFavoritos(){

            list<string> listaFavoritos = {};
            cout << "Bienvenido, por favor escoje el numero del personaje que deseas utilizar " << endl;
            cout << "1. Jugador uno" << endl;
            cout << "2. Jugador dos" << endl;
            cin >> desicionUsuario;

            if(desicionUsuario == 1){
                cout << "Usted a escogido el jugador uno correcatamente\n " << endl;
                cout << "Si desea agregar algun juego a su lista de favoritos, digite 1.\n " << endl;
                cout << "Si desea salir, digite 2.\n " << endl;
                cin >> desicionUsuario1;

                if (desicionUsuario1 == 1){

                    list<string> listaVideojuego = {"Videojuego1", "Videojuego2", "Videojuego3"};
                    cout << "De la siguiente lista, escoje tu videojuego favorito" << endl;
                    cout << "1. Videojuego1" << endl;
                    cout << "2. Videojuego2" << endl;
                    cout << "3. Videojuego3" << endl;
                    cin >> desicionFavorito;

                    listaFavoritos.push_back(desicionFavorito);

                    cout << "Tu nueva lista de favoritos es: " << listaFavoritos << endl;

                }

            }
                if(desicionUsuario == 2){
                cout << "Usted a escogido el jugador dos correcatamente\n " << endl;
                cout << "Si desea agregar algun juego a su lista de favoritos, digite 1.\n " << endl;
                cout << "Si desea salir, digite 2.\n " << endl;
                cin >> desicionUsuario2;

                if (desicionUsuario2 == 1){

                    list<string> listaVideojuego = {"Videojuego1", "Videojuego2", "Videojuego3"};
                    cout << "De la siguiente lista, escoje tu videojuego favorito" << endl;
                    cout << "1. Videojuego1" << endl;
                    cout << "2. Videojuego2" << endl;
                    cout << "3. Videojuego3" << endl;
                    cin >> desicionFavorito;

                    listaFavoritos.push_back(desicionFavorito);

                    cout << "Tu nueva lista de favoritos es: "<< endl;
                    cout <<   listaFavoritos << endl;
                    
                }
                
            }
        }
        string calificacionUsuario;
        int juegoPuntuar;

        void usuarioPuntea(){
            cout << "A continuacion vas a puntear nuestros juegos\n" << endl;

            list<string> listaVideojuego = {"Videojuego1", "Videojuego2", "Videojuego3"};

            cout << "Por favor escoje el numero de videojuego que deseas puntuar " << endl;
            cout << "1. Videojuego1" << endl;
            cout << "2. Videojuego2" << endl;
            cout << "3. Videojuego3" << endl;
            cin >> juegoPuntuar;

            if(juegoPuntuar == 1){
                cout << "Usted esta a punto de puntuar el juego 1" << endl;
                cout << "Por favor digite del 1 al 3, siendo uno, malo y siendo 3 el mejor, la calificacion que le daria al juego 1" << endl;
                cin >> calificacionUsuario;

                list<string> listaMenosGustados={};

                if(calificacionUsuario == 1){
                    listaMenosGustados.push_back(calificacionUsuario);

                    cout << "Tu nueva de juegos menos gustados es: " << listaMenosGustados << endl;

                    cout <<"El juego numero 1 se agrego en la lista de los menos gustados" << endl;
                }
                list<string> listaNormales ={};

                if(calificacionUsuario == 2){
                    listaNormales.push_back(calificacionUsuario);

                    cout << "Tu nueva de juegos  normales es: " << listaMenosGustados << endl;

                    cout <<"El juego numero 1 se agrego en la lista de los normales" << endl;
                }
                list<string> listaMasFavoritos = {};

                if(calificacionUsuario ==3){
                    listaMasFavoritos.push_back(calificacionUsuario);

                    cout << "Tu nueva de juegos mas gustados es: " << listaMenosGustados << endl;

                    cout <<"El juego numero 1 se agrego en la lista de los mas gustados" << endl;
                }
            }
                if(juegoPuntuar == 2){
                cout << "Usted esta a punto de puntuar el juego 2" << endl;
                cout << "Por favor digite del 1 al 3, siendo uno, malo y siendo 3 el mejor, la calificacion que le daria al juego 2" << endl;
                cin >> calificacionUsuario;

                list<string> listaMenosGustados={};

                if(calificacionUsuario == 1){
                    listaMenosGustados.push_back(calificacionUsuario);

                    cout << "Tu nueva de juegos menos gustados es: " << listaMenosGustados << endl;

                    cout <<"El juego numero 1 se agrego en la lista de los menos gustados" << endl;
                }
                list<string> listaNormales ={};

                if(calificacionUsuario == 2){
                    listaNormales.push_back(calificacionUsuario);

                    cout << "Tu nueva de juegos  normales es: " << listaMenosGustados << endl;

                    cout <<"El juego numero 1 se agrego en la lista de los normales" << endl;
                }
                list<string> listaMasFavoritos = {};

                if(calificacionUsuario ==3){
                    listaMasFavoritos.push_back(calificacionUsuario);

                    cout << "Tu nueva de juegos mas gustados es: " << listaMenosGustados << endl;

                    cout <<"El juego numero 1 se agrego en la lista de los mas gustados" << endl;
                }


            }
                if(juegoPuntuar == 1){
                cout << "Usted esta a punto de puntuar el juego 3" << endl;
                cout << "Por favor digite del 1 al 3, siendo uno, malo y siendo 3 el mejor, la calificacion que le daria al juego 3" << endl;
                cin >> calificacionUsuario;

                list<string> listaMenosGustados={};

                    if(calificacionUsuario == 1){
                    listaMenosGustados.push_back(calificacionUsuario);

                    cout << "Tu nueva de juegos menos gustados es: " << listaMenosGustados << endl;

                    cout <<"El juego numero 1 se agrego en la lista de los menos gustados" << endl;
                }
                list<string> listaNormales ={};

                if(calificacionUsuario == 2){
                    listaNormales.push_back(calificacionUsuario);

                    cout << "Tu nueva de juegos  normales es: " << listaMenosGustados << endl;

                    cout <<"El juego numero 1 se agrego en la lista de los normales" << endl;
                }
                list<string> listaMasFavoritos = {};

                if(calificacionUsuario ==3){
                    listaMasFavoritos.push_back(calificacionUsuario);

                    cout << "Tu nueva de juegos mas gustados es: " << listaMenosGustados << endl;

                    cout <<"El juego numero 1 se agrego en la lista de los mas gustados" << endl;
                }
            }
        }       
                string mostrarPorPuntuacion(){
                    list<string> listaMasFavoritos = {};
                    list<string> listaNormales ={};
                    list<string> listaMenosGustados={};
                    
                    cout << "A continuacion se mostraran los videojuegos con su respectiva puntuacion" << endl;

                    cout << "Los videojugeos mas gustados son: " << listaMasFavoritos << endl;

                    cout << "Los videojuegos de gusto normal son:" << listaNormales << endl;

                    cout << "Los videojugeos menos gustados son: " << listaMenosGustados << endl;

                }









