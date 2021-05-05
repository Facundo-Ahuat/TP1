#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    float a, b, c, x1, x2, d;
    cout << "Teniendo en cuenta la funcion y = ax^2+bx + c" << endl;
    cout << "Ingrese a: " << endl;
    cin >> a;
    cout << "Ingrese b: " << endl;
    cin >> b;
    cout << "Ingrese  c: " << endl;
    cin >> c;
    x1= (-b+sqrt(pow(b, 2)-4*a*c))/(2*a);
    x2= (-b-sqrt(pow(b, 2)-4*a*c))/(2*a);
    d=(pow(b, 2)-4*a*c);
    if (a!=0)
    {
    if (d==0)
        cout << "x1, x2: " << x1 << " (raiz doble)" << endl;
    if (d>0)
        cout << "x1: " << x1 << endl << "x2: " << x2 << endl;
    if (d<0)
        cout << "No hay raices reales" << endl;
    }
    else
    {cout << "La funcion no es cuadratica" << endl;}
    cout << "El programa ha finalizado" << endl;



    return 0;
}

