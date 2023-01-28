#pragma once
#include <iostream>//���������� ��� ������ �� ������������ ��������
#include <fstream> //���������� ��� ������ �� ��������� ��������
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(string, int);
	Person(const Person&);
	Person operator =(const Person&);
	friend ostream& operator <<(ostream& out, const Person& p);
	friend istream& operator>>(istream& in, Person& p);

	friend fstream& operator>>(fstream& fin, Person& p);
	friend fstream& operator <<(fstream& fout, const Person& p);
public:
	~Person();
private:
	string name;
	int age;
};
