#pragma once
#include <iostream> 
#include <string>
using namespace std;
class Book {
public:
	void SetTitle(std::string BookTitle);
	string GetTitle();
	void SetName(std::string BookName);
	string GetName();
	void SetYear(int BookYear);
	int GetYear();
	Book::Book();
	Book::~Book();
private:
	std::string title;
	//�������� �����
	std::string name;
	// ��� ������
	int year;
	//��� �������
	

};

