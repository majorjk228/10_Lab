#include "Person.h"
#include <windows.h> 
using namespace std;

Person::Person()
{
	name = ""; age = 0;
}
Person::Person(string N, int A)
{
	name = N; age = A;
}
Person::Person(const Person& p)
{
	name = p.name; age = p.age;
}
Person Person::operator =(const Person& p)
{
	if (&p == this) return *this;
	name = p.name; age = p.age;
	return*this;
}
Person::~Person()
{
}
ostream& operator<<(ostream& out, const Person& p)
{
	out << "Имя: " << p.name << " Возраст: " << p.age << "\n";
	return out;
}
istream& operator>>(istream& in, Person& p)
{
	cout << "Введите имя: "; in >> p.name;
	cout << "Введите возраст: "; in >> p.age;
	return in;
}

//дружественные функции для работы с файловыми потоками
fstream& operator>>(fstream& fin, Person& p)
{
	fin >> p.name;
	fin >> p.age;
	return fin;
}
fstream& operator<<(fstream& fout, const Person& p)
{
	fout << p.name << "\n" << p.age << "\n";
	return fout;
} 