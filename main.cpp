// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
while(!mi_cola.empty())//se comieza el ciclo que se repetira mientras la cola no este vacia
{
if(mi_cola.front()%2 !=0)//se evalua cada elemento de la cola
{
return false;//si el elemento evaluado es impar retorna false
}
mi_cola.pop();//elimina el primer elemento de la cola que ya fue comparado
}
    return true;//retorna true si todos los elementos son pares
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    do{//se crea la condicion do
    if (mi_lista.front() %2 !=0)//se evalua cada elemento de la lista para saber si es par o impar
    {
    return false;//si el elemento es impar retorna false
    }

    mi_lista.pop_front();//se elimina el primer elemento de la lista que ya fue evaluado
    }
    while(!mi_lista.empty()) ;//se defina el ciclo que va terminar hasta que la lista quede vacia
    return true;//si todos los elementos de la lista son pares devuelve true
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
   while(!mi_cola.empty()) //comienza el ciclo que se repetira hasta que la cola este vacia
{
if(mi_cola.front()==str) //se comparan todos los elementos de la cola con str
{
return true; //si se encuentra el elemento str dentro de la cola retorna true
}
mi_cola.pop(); //se elimina el primer elemento de la cola
}
return false; //si no se encuentra el elemento str en la cola retorna false
}


//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
     while(!mi_lista.empty()) //comienza el ciclo que se repetira hasta que la lista este vacia
{
if(mi_lista.front()== str) // se compara cada elemento de la lista con str
{
return true; //si se encuentra el elemento str dentro de la lista retorna true
}
mi_lista.pop_front(); //se elimina el primer elemento de la lista
}
return false; //si no se encuentra el elemento str en la lista retorna false
}


//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int suma =0; //se crea la variable suma y se inicializa en cero
while(!mi_cola.empty()) //comienza el ciclo que se repite hasta que la lista quede vacia
{
suma += mi_cola.front(); //se va realizando la suma de los elementos de la cola
mi_cola.pop(); //se elimina el primer elemento de la cola
}
return suma; //retorna la suma
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{
int suma=0;//se declara la variable suma y inicializa en cero
string letras;//se declara una variable letras
while(!mi_lista.empty())//comienza el ciclo que se repite mientras la lista no este vacia
{
letras=mi_lista.front();//la variable letras toma el valor de cada elemento de la lista
suma += letras.length();//la variable suma recibe el tamano de cada cadena que fue alamacenada en la variable letras
mi_lista.pop_front();//se elimina el primer elemento de la lista
}
return suma;//returna la suma obtenida
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
    list<char> auxiliar = mi_lista; //creamos una variable aux para guardar los caracteres de la lista
auxiliar.sort(); //se ordenan alfbeticamente los elementos de la variable aux
do //comenzamos a hacer la comparacion
{
if(mi_lista.front() != auxiliar.front()) //se compara cada elemento de la lista con los elementos de la variable aux
{
return false; //si son diferentes quiere decir que los elementos de la lista estan desordenados y retorna false
}
mi_lista.pop_front(); //se elimina el primer elemento de la lista
auxiliar.pop_front(); //se elimina el primer elemento de la variable aux
}
while(!mi_lista.empty()); //definimos que el ciclo se va repetir hasta que la lista quede vacia
return true; //retorna true si la lista esta ordenada
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
