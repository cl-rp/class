#include "conio.h"
#include "windows.h"
#include "iostream"
#include "string"
using namespace std;

class ����� {
private:	// ���������� �������� � ������ ������ 

	string city;	  // �����
	string street;    // �����
	int house_number; // ����� ����

public:		// ������ ��������� �������� � ������ ������

	// ����� ��������� ������
	void set_city(string new_city) {
		city = new_city;
	}
	// ����� ��������� �����
	void set_street(string new_street) {
		street = new_street;
	}
	// ����� ��������� ������ ����
	void set_house_number(int new_house_number) {
		house_number = new_house_number;
	}
	// ����� ��� ��������� ������ 
	string get_city() {
		return city;
	}
	// ����� ��� ��������� �����
	string get_street() {
		return street;
	}
	// ����� ��� ��������� ������ ����
	int get_house_number() {
		return house_number;
	}
	// ����� ������ ������� ������ �� �����
	void print() {
		cout << "�����: " << city << " | �����: " << street << " | ����� ����: " << house_number << endl;
	}
};


int main()
{
	SetConsoleOutputCP(1251);	// ��� ����������� ����������� ������� ��������� 
	SetConsoleCP(1251);			// ��� ����������� ����� ������� ���������

	����� mass[5];	// ������ �������

	// ���������� ��� ����� ����������
	string city;	  // �����
	string street;    // �����
	int house_number; // ����� ����

    // ���� ����� ����������
	for (int i = 0; i < 5; i++) {
		cout << "�����: ";
		cin >> city;

		cout << "�����: ";
		cin >> street;

		cout << "����� ����: ";
		cin >> house_number;

		// ������������� �������� ������ � �������
		mass[i].set_city(city);
		mass[i].set_street(street);
		mass[i].set_house_number(house_number);

		cout << endl;
	}

	// ������� ���������� �� ����� c ������� ���������� ������� ��������� ����������
	for (int i = 0; i < 5; i++) {
		cout << "�����: " << mass[i].get_city()
			 << " | �����: " << mass[i].get_street()
			 << " | ����� ����: " << mass[i].get_house_number()
			 << endl;
	}

	_getch();
	return 0;
}