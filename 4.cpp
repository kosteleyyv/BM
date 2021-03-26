#include <iostream>
#include <math.h>
using namespace std;

double f(double x)
{
  double a = 2.0;
  return pow(a,tan(x));
}
 
main()
{ 
  double x, h, fl, fr, fc, f2;
 
  x = 4.0; // точка, в которой вычисляем производную
  h = 0.1; // шаг, с которым вычисляем производную
 
  // приближенно вычисляем первую производную различными способами
  fl = (f(x) - f(x - h)) / h; // левая
  fr = (f(x + h) - f(x)) / h; // правая
  fc = (f(x + h) - f(x - h)) / (2 * h); // центральная
 
  // приближенно вычисляем вторую производную
  f2 = (f(x + h) - 2 * f(x) + f(x - h)) / (h * h);//зачем?
 
 // выводим результаты на экран
 cout<<"x = "<<x<<"\n";
 cout<<"fl = "<<fl<<"\n";
 cout<<"fr = "<<fr<<"\n";
 cout<<"fc = "<<fc<<"\n";
 cout<<"f2 = "<<f2<<"\n";
 system("pause");
}
