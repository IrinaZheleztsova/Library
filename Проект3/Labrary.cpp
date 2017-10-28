#include "Labrary.h"


Labrary::Labrary()
{
}
void Labrary::PushBook()
{
	std::string BookTitle;
	std::string BookName;
	int BookYear;
	std::cout << "Enter:\n title\n author\n year\n";
	std::cin >> BookTitle >> BookName >> BookYear;
	a.SetTitle(BookTitle);
	a.SetName(BookName);
	a.SetYear(BookYear);
	books.push_back(a);
}

void Labrary::GetBook()
{
	std::string BookTitle;
	std::cout << "say the title\n";
	std::cin >> BookTitle;
	int n = books.size();
	for (int i = 0; i < n; i++)
	{
		if (books[i].GetTitle() == BookTitle)
		{
			std::cout << "\nTitel-" << books[i].GetTitle() << "  Author-" << books[i].GetName() << "  Year-" << books[i].GetYear() << "\n";
		}
	}
}

void Labrary::SeeBook()
{

	int n = books.size();
	for (int i = 0; i < n; i++)
	{

		std::cout << "\nTitel-" << books[i].GetTitle() << "  Author-" << books[i].GetName() << "  Year-" << books[i].GetYear() << "\n";

	}
}
void Labrary::DeleteBook()
{
	std::string BookTitle;
	int index;
	std::cout << "Enter book title\n";
	std::cin >> BookTitle;
	int n = books.size();
	
	for (int i = 0; i < books.size(); i++)
	{	
		if (books[i].GetTitle() == BookTitle)
		{
			index = i;	
			books.erase(books.begin() + index);
			i--;
		}	
	}
}





Labrary::~Labrary()
{
}
