#include<iostream>
#include<string>
using namespace std;
int main()
{
	int books = 5;
	int fine = 1;
	int price = 0;
	int days;
	string choice;
	while (1)
	{
		cout << "Menu" << endl;
		cout << "1.Borrow" << endl;
		cout << "2. Return" << endl;
		cout << "3. Quit" << endl;
		cout << "Select One:" << endl;
		cin >> choice;
		if (choice == "1")
		{
			if (books > 0)
			{
				books--;
				cout << "Book Borrowed" << endl;
			}
			else
			{
				cout << "No book available" << endl;

			}
		}
		else if (choice == "2")
		{
			if (books < 7)
			{
				books++;
				cout << "Enter the NO. of Days:" << endl;
				cin >> days;
				fine = days * fine;
				cout << "Book Returned" << endl;
			}
			else
			{
				cout << "Can't Return Library is full" << endl;

			}

		}
		else if (choice == "3" || choice == "Q")
		{
			cout << "Total fine: $" << fine << endl;

			cout << "Thankyou" << endl;
			exit;
		}
		else
		{
			cout << "Invalid Choice\n";
		}
	}
	system("pause");
	return 0;
}