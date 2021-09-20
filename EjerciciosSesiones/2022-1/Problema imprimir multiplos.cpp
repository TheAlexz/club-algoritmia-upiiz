//#include <iostream>
//#include <math.h>
#include <bits/stdc++.h>

using namespace std;

//usar double en vez de float para numeros decimales por más precisión

int main(){

    int n=0, k=0;

    //n es el numero de elementos que leeremos
    //k es el numero que compararemos sus multiplos

    cin >> n >> k;

    //ciclos

    int cont = 1;

    int numerotemporal = 0;

    while( cont <= n ) { //leer n veces, funciona con n--
        //leer un numero

        cin >> numerotemporal;

        /*
        //Division   resultado   residuo
        3/2             1           1         
        4/2             2           0
        5/2             2           1
        6/2             3           0
        */

        if( numerotemporal % 2 == 0 ){ //Es multiplo
            cout << numerotemporal << " ";
        }
        else{
            cout << "X ";
        }
        /*
        else if ( numerotemporal % 2 != 0 ) { //No es multiplo
        }
        */

        cont = cont + 1;
        //es lo mismo que poner cont++;
    }


    return 0;
}
