/*
** Пользователь 	вводит с клавиатуры количество контактов 	в аське и среднее количество минут, которое тратится в день на общение с 	каждым человеком их списка.Посчитать, сколько времени человек занимается 	непосредственно работой с учетом 	8 - часового рабочего дня и получасового 	перерыва на обед.
*/

#include "iostream"
using namespace std;

int main()
{
	double cnt, mcn, rd = 8, ob = 0.5;
	cout << "Enter the number of contacts in ICQ" << endl;
	cin >> cnt; // количество контактов
	cout << "Enter the average number of minutes per contact with one contact" << endl;
	cin >> mcn; // количество минут потраченных на каждого контактёра
	cout << "real=" << rd - ob - cnt * mcn / 60;
	return 0;
}
