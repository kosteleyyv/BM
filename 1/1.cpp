#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
return sin(x)+sin(2.0*x);
}

double df(double x)
{
return cos(x)+2.0*cos(2.0*x);
}

double ddf(double x)
{
return (-sin(x)-4.0*sin(2.0*x));
}

double find1(double x0, double x1, double eps)
{
double left = x0, right = x1, x, fl, fr, f;
int iter = 0;
cout << "x0= " << x0 << " x1= " << x1 << " ";
do {
x = (left + right) / 2;
f = func(x);
if (f < 0) right = x;
else left = x;
iter++;
} while (fabs(f) > eps && iter<20000);
cout << iter << " iterations" << endl;
return x;
}

double find2(double x0, double x1, double eps)
{
double rez = x1, f0, f;
int iter = 0;
cout << "x0= " << x0 << " x1= " << x1 << " ";
do {
f = sin(rez)+sin(2.0*rez);
f0 = sin(x0)+sin(2.0*x0);
rez = rez - f / (f - f0)*(rez - x0);
iter++;
} while (fabs(f) > eps && iter<20000);
cout << iter << " iterations" << endl;
return rez;
}

double find3(double x, double eps)
{
double f, df1; int iter = 0;
cout << "x0= " << x << " ";
do {
f = func(x);
df1 = df(x);
x = x - f / df1;
iter++;
} while (fabs(f) > eps && iter<20000);
cout << iter << " iterations" << endl;
return x;
}

int main()
{
// cout << find2(1.0, 2.5, 0.000001);
//cin.get(); return 0;
cout << find3(2, 0.000001);
cin.get(); return 0;
}