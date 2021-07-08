#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    float a, b, c, d;
    cout << "Teniendo en cuenta la forma y=ax^2+bx+c: " << endl;
    cout << "Ingrese a: " << endl;
    cin >> a;
    cout << "Ingrese b: " << endl;
    cin >> b;
    cout << "Ingrese c: " << endl;
    cin >> c;
    if (a!=0)
    { d=pow(b, 2)-4*a*c;
    if (d>0)
      cout << "x1: " << (-b+sqrt(pow(b, 2)-4*a*c))/(2*a) << " x2: " << (-b-sqrt(pow(b, 2)-4*a*c))/(2*a) << endl;
    if (d==0)
      cout << "Raíz doble: x1, x2: " << (-b+sqrt(pow(b, 2)-4*a*c))/(2*a) << endl;
    if (d<0)
      cout << "No hay raíces reales" << endl;
    }else
    cout << "La función no es cuadrática" << endl;


    cout << "El programa ha finalizado" << endl;
return 0;
}
