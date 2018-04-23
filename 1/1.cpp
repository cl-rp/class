#include "conio.h"
#include "windows.h"
#include "iostream"
#include "string"
using namespace std;

class Адрес {
private:	// внутренние свойства и методы класса 

	string city;	  // город
	string street;    // улица
	int house_number; // номер дома

public:		// внешне доступные свойства и методы класса

	// метод установки города
	void set_city(string new_city) {
		city = new_city;
	}
	// метод установки улицы
	void set_street(string new_street) {
		street = new_street;
	}
	// метод установки номера дома
	void set_house_number(int new_house_number) {
		house_number = new_house_number;
	}
	// метод для получения города 
	string get_city() {
		return city;
	}
	// метод для получения улицы
	string get_street() {
		return street;
	}
	// метод для получения номера дома
	int get_house_number() {
		return house_number;
	}
	// метод вывода свойств класса на экран
	void print() {
		cout << "город: " << city << " | улица: " << street << " | номер дома: " << house_number << endl;
	}
};


int main()
{
	SetConsoleOutputCP(1251);	// для корректного отображения русской кодировки 
	SetConsoleCP(1251);			// для корректного ввода русской кодировки

	Адрес mass[5];	// массив классов

	// переменные для ввода информации
	string city;	  // город
	string street;    // улица
	int house_number; // номер дома

    // цикл ввода информации
	for (int i = 0; i < 5; i++) {
		cout << "город: ";
		cin >> city;

		cout << "улица: ";
		cin >> street;

		cout << "номер дома: ";
		cin >> house_number;

		// устанавливаем свойства класса в массиве
		mass[i].set_city(city);
		mass[i].set_street(street);
		mass[i].set_house_number(house_number);

		cout << endl;
	}

	// выводим информацию на экран c помощью встроенных методов получения информации
	for (int i = 0; i < 5; i++) {
		cout << "город: " << mass[i].get_city()
			 << " | улица: " << mass[i].get_street()
			 << " | номер дома: " << mass[i].get_house_number()
			 << endl;
	}

	_getch();
	return 0;
}