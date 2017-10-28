#include "Book.h"


Book::Book()
{
}
	void Book::SetTitle(std::string BookTitle)
	{
		title = BookTitle;
	}
	string Book::GetTitle()
	{
		return(title);
	}
	void Book::SetName(std::string BookName)
	{
		name = BookName;
	}
	string Book::GetName()
	{
		return(name);
	}
	void Book::SetYear(int BookYear)
	{
		year = BookYear;
	}
	int Book::GetYear()
	{
		return(year);
	}


Book::~Book()
{
}
