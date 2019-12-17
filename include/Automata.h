#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

struct Drink {
	std::string name;
	int price;
};

class Automata {
	enum STATES { OFF, WAIT, ACCEPT, CHECK, COOK } state = OFF; // ��������� ��������
	static std::string state_description[];
	std::string the_chosen_one;
	int cash = 0; // ��� �������� ������� �����;
	std::vector<Drink> menu; // ���� ��������
	bool check(std::string the_chosen_one); // �������� ������� ����������� �����
	std::string finish(); // ���������� ������������ ������������
public:
	Automata(std::vector<Drink> storage);
	void on(); // ��������� ��������
	void off();	// ���������� ��������
	std::string coin(int cash); // ��������� ����� �� ���� �������������
	std::string printMenu();	// ����������� ���� � ��������� � ������ ��� ������������
	std::string printState(); // ����������� �������� ��������� ��� ������������
	std::string choice(std::string the_chosen_one); // ����� ������� �������������
	std::string cancel(); // ������ ������ ������������ �������������
	std::string cook(); // �������� �������� ������������� �������
};

#endif