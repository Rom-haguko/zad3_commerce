//  s=k*(1+(p/100))**n
#include <iostream>
#include <cmath>;
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите стартовый капитал: ";
	int k;
	cin >> k;
	cout << "Введите ежемесячные проценты: ";
	int p;
	cin >> p;
	cout << "Стоимость собственного магазина: ";
	int s;
	cin >> s;
	double n = log(s/k) / log(1 + (p / 100));
	n= ceil(n); //округляет число до вверх ближайшего целого числа (месяцы)
	cout << "колиечство лет(годов): " << ceil(n/ 12) << endl;





}
