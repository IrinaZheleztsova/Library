#include <iostream> 
#include <string>
#include <vector>
#include "Book.h"
#include "Labrary.h"

using namespace std;

	int main()
	{
		Labrary labrary;
		int k = 0;
		while (k != 5)
		{
			std::cout << "\nEnter:\n 1-push a book\n 2-see the book\n 3-delete a book\n 4-see the library\n";
			std::cin >> k;
			if (k == 1)
			{
				labrary.PushBook();
			}
			else
			{
				if (k == 2)
				{
					labrary.GetBook();
				}
				else
				{
					if (k == 3)
					{
						labrary.DeleteBook();
					}
					else
					{
						if (k == 4)
						{
							labrary.SeeBook();
						}
						else
						{
							break;
						}

					}
				}
			}
		}
	};