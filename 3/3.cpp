#include <iostream>
#include <math.h>
using namespace std;
 
// функция, интеграл
double f(double x)
{
  return 1/(2+sqrt(x+1));
}
 
int sq1()
{
  int i; // счётчик
  double Integral; // здесь будет интеграл
  double a = 3.0, b = 8.0; // задаём отрезок интегрирования
  double h = 0.1;// задаём шаг интегрирования
 
  double n; // задаём число разбиений n
 
  n = (b - a) / h;
  // вычисляем интеграл по формуле левых прямугольников
  Integral = 0.0;
  for(i = 0; i <= n-1; i++)
	Integral = Integral + h * f(a + h * i);
  cout << "I1 = " << Integral << "\n";
}

int sq2()
{
  int i;
  double Integral;
  double a = 3.0, b = 8.0;
  double h = 0.1;
 
  double n;
 
  n = (b - a) / h;
  // вычисляем интеграл по формуле правых прямугольников
  Integral = 0.0;
  for(i = 1; i <= n; i++)
	Integral = Integral + h * f(a + h * i);
  cout << "I1 = " << Integral << "\n";
}

int trap()
{
  int i; 
  double Integral;
  double a = 3.0, b = 8.0;
  double h = 0.1;
 
  double n;
 
  n = (b - a) / h;
  Integral = h * (f(a) + f(b)) / 2.0;
  for(i = 1; i <= n-1; i++)
  Integral = Integral + h * f(a + h * i);
  cout << "I2 = " << Integral << "\n";
  return Integral;
}

int main ()
{
    trap();
    return(0);
}
