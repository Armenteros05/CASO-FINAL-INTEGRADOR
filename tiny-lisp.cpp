#include Operaciones.h
#include <iostream>
using namespace std;
int main() {
    //vamos a permitir que el usuario introduzca los operadores que quiera
    char operacion;
    cout<<"Ingrese la operacion que quiere realizar:(+,-,,/,%,min,max):";
    cin>>operacion;
    if(operacion=='+'){
        //añadimos el operador de suma
        cout << "Ahora vamos a hacer una suma ";
        cout << endl;
        cout << endl;
        int a;
        int b;
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el segundo numero: ";
        cin >> b;
        int suma;
        suma= a+b;
        cout << "La suma es: " << suma << endl;
        cout << endl;

        cout << "Cree un simbolo para definir el operador suma: ";
        char suma1;
        cin >> suma1;
        cout << "El operador suma es: " << suma1 << endl;
    }
    else if(operacion=='-'){
        //añadimos el operador resta
        cout << "Ahora vamos a hacer una resta ";
        int c;
        int d;
        cout << endl;
        cout << endl;
        cout << "Ingrese el primer numero: ";
        cin >> c;
        cout << "Ingrese el segundo numero: ";
        cin >> d;
        int resta;
        resta= c-d;
        cout << "La resta es: " << resta << endl;
    }
    else if(operacion=='*'){
//añadimos el operador multiplicacion
        cout << "Ahora vamos a hacer una multiplicacion ";
        int e;
        int f;
        cout << endl;
        cout << endl;
        cout << "Ingrese el primer numero: ";
        cin >> e;
        cout << "Ingrese el segundo numero: ";
        cin >> f;
        int multiplicacion;
        multiplicacion= e*f;
        cout << "La multiplicacion es: " << multiplicacion << endl;
    }
    else if(operacion=='/'){
//añadimos el operador division
        cout << "Ahora vamos a hacer una division ";
        int g;
        int h;
        cout << endl;
        cout << endl;
        cout << "Ingrese el primer numero: ";
        cin >> g;
        cout << "Ingrese el segundo numero: ";
        cin >> h;
        int division;
        division= g/h;
        cout << "La division es: " << division << endl;
    }
    else if(operacion=='%'){
//añadimos el operador modulo
        cout << "Ahora vamos a hacer un modulo ";
        int i;
        int j;
        cout << endl;
        cout << endl;
        cout << "Ingrese el primer numero: ";
        cin >> i;
        cout << "Ingrese el segundo numero: ";
        cin >> j;
        int modulo;
        modulo= i%j;
        cout << "El modulo es: " << modulo << endl;
    }
    else if(operacion== 'min.'){
//vamos a introducir el operador min
        cout << "Ahora vamos a hacer un minimo ";
        int m;
        int n;
        cout << endl;
        cout << endl;
        cout << "Ingrese el primer numero: ";
        cin >> m;
        cout << "Ingrese el segundo numero: ";
        cin >> n;
        int minimo;
        minimo= min(m,n);
        cout << "El minimo es: " << minimo << endl;
    }
    else if(operacion=='max.'){
        cout << "Ahora vamos a hacer un maximo ";
        int o;
        int p;
        cout << endl;
        cout << endl;
        cout << "Ingrese el primer numero: ";
        cin >> o;
        cout << "Ingrese el segundo numero: ";
        cin >> p;
        int maximo;
        maximo= max(o,p);
        cout << "El maximo es: " << maximo << endl;

    }
    return operacion;

}