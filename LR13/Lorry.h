#pragma once
#include "Car.h"
class Lorry :public Car
{	public:
		Lorry(void);
		~Lorry(void);
		Lorry(string, int, int, int); 
		Lorry(const Lorry&); //конструктор копирования 
		int Getgruz() { return gruz; } //модификатор 
		void SetGruz(int);//селектор
		Lorry& operator=(const Lorry&);//операция присваивания 
		friend istream& operator>>(istream & in, Lorry & l);//операция ввода 
		friend ostream& operator<<(ostream & out, const Lorry & l); //операция вывода 
	protected:
		int gruz; // атрибут грузоподъемность
};

