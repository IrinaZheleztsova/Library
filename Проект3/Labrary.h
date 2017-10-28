#pragma once
#include <iostream> 
#include <string>
#include <vector>
#include "Book.h"
using namespace std;

class Labrary{
private:
	
	vector<Book>books;
	Book a;
public:
	void PushBook();
	void GetBook();
	void SeeBook();
	void DeleteBook();
	Labrary::Labrary();
	Labrary::~Labrary();
};

