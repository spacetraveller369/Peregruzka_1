#include <iostream>
#include <windows.h>
#include "Computer.h"
#include "Plant.h"
#include "Cockroach.h"

using namespace std;


int main() {

	setlocale(0, "");

	Computer computer; //c-tors
	Computer computer1("Dell", 20000, 2, "USA", "black", true);
	Computer computer2("HP", 10000, 1, "USA", "wjite", true);
	Computer computer3("Dell"); //preobr

	Computer original; //c-tor copy
	original.SetKind("Dell");
	original.SetPrice(20000);
	original.SetAge(2);
	original.SetOrigin("USA");
	original.SetColor("black");
	original.SetIsWork(true);

	Computer copy_computer = original;
	copy_computer.DisplayInfo();
	
	//pods4et
	cout << Computer::GetCount() << "\n";
	Computer computer4;
	cout << Computer::GetCount() << "\n";
	Computer computer5;
	cout << Computer::GetCount() << "\n";
	Computer computer6;

	//peregruzki
	Computer computer7;
	Computer computer8;

	cout << "Сколько лет Вашему компьютеру?";
	cin >> computer7;
	cout << "Повторите: Сколько лет Вашему компьютеру?";
	cin >> computer8;
	Computer computer_result = computer7 + computer8;
	cout << "Общая сумма лет:": << computer_result << "\n\n";
	cin >> computer8;

	if (computer7 > computer8) {
		cout << computer7 << "старше чем" << computer8 << "\n";
	}
	else if (computer7 < computer8) {
		cout << computer7 << "младше чем" << computer8 << "\n";
	}
	else if (computer7 == computer8) {
		cout << computer7 << "и" << computer8 << "сделані в одно и то же время\n";
	}
	else if (computer7 != computer8) {
		cout << computer7 << "и" << computer8 << "сделані в разное время\n";
	} 


	Plant plant; //c-tors
	Plant plant1 ("Алоэ", 1, 1000, "Ukraine", "green", true);
	Plant plant2("Роза", 5, 500, "USA", "pink", true);
	Plant plant3("Алоэ"); //preobr

	Plant original; //c-tor copy
	original.SetKind("Алоэ");
	original.SetPrice(1);
	original.SetAge(1000);
	original.SetOrigin("Ukraine");
	original.SetColor("green");
	original.SetAliveStatus(true);

	Plant copy_plant = original;
	copy_plant.DisplayInfo();

	//pods4et
	cout << Plant::GetCount() << "\n";
	Plant plant4;
	cout << Plant::GetCount() << "\n";
	Plant plant5;
	cout << Plant::GetCount() << "\n";
	Plant plant6;

	//peregruzki
	Plant plant7;
	Plant plant8;

	cout << "Сколько стоит этот цветок?";
	cin >> plant7;
	cout << "Повторите: Сколько стоит этот цветок?";
	cin >> plant8;
	Plant plant_result = plant7 + plant8;
	cout << "Общая стоимость:" << plant_result << "\n\n";
	cin >> plant8;

	if (plant7 > plant8) {
		cout << plant7 << "дороже чем" << plant8 << "\n";
	}
	else if (plant7 < plant8) {
		cout << plant7 << "дешевле чем" << plant8 << "\n";
	}
	else if (plant7 == plant8) {
		cout << plant7 << "и" << plant8 << "равные по цене\n";
	}
	else if (plant7 != plant8) {
		cout << plant7 << "и" << plant8 << "не равные по цене\n";
	}


	Cockroach cockroach; //c-tors
	Cockroach cockroach1("Рыжик", 10, "red", true);
	Cockroach cockroach2("Витюша", "black", true);
	Cockroach cockroach3("Рыжик"); //preobr

	Cockroach original; //c-tor copy
	original.SetName("Рыжик");
	original.SetSize(10);
	original.SetColor("red");
	original.SetAwful(true);
	
	Cockroach copy_cockroach = original;
	copy_cockroach.DisplayInfo();

	//pods4et
	cout << Cockroach::GetCount() << "\n";
	Cockroach cockroach4;
	cout << Cockroach::GetCount() << "\n";
	Cockroach cockroach5;
	cout << Cockroach::GetCount() << "\n";
	Cockroach cockroach6;

	//peregruzki
	Cockroach cockroach7;
	Cockroach cockroach8;

	cout << "Какой размер этого таракана?";
	cin >> cockroach7;
	cout << "Повторите: Какой размер этого таракана?";
	cin >> cockroach8;
	Cockroach cockroach_result = cockroach7 + cockroach8;
	cout << "Сумма сантиметров:" << cockroach_result << "\n\n";
	cin >> cockroach8;

	if (cockroach7 > cockroach8) {
		cout << cockroach7 << "больше чем" << cockroach8 << "\n";
	}
	else if (cockroach7 < cockroach8) {
		cout << cockroach7 << "меньшк чем" << cockroach8 << "\n";
	}
	else if (cockroach7 == cockroach8) {
		cout << cockroach7 << "и" << cockroach8 << "равные по размеру\n";
	}
	else if (cockroach7 != cockroach8) {
		cout << cockroach7 << "и" << cockroach8 << "не равные по размеру\n";
	}
}