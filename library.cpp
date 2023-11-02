#include <iostream>
using namespace std;

int main() {
    int choice, numb, begin, stop, isPrime;


    cout << "Choose an option:\n1. Check if a number is prime\n2. Find prime numbers within a range\n\nwrite 1 or 2:\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter a number to check if it's prime: ";
        cin >> numb;

        isPrime = 1;

        if (numb <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for (int i = 2; i * i <= numb; i++)
            {
                if (numb % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime == 1)
        {
            cout << numb << " is a prime number." << endl;
        }
        else
        {
            cout << numb<< " is not a prime number." << endl;
        }
        break;

    case 2:
        cout << "Enter the range (start and end): ";
        cin >> begin >> stop;
        cout << "Prime numbers between " << begin << " and " << stop << " are: " << endl;

        for (int i = begin; i <= stop; i++)
        {
            isPrime = 1;

            if (i <= 1)
            {
                isPrime = 0;
            }
            else
            {
                for (int j = 2; j * j <= i; j++)
                {
                    if (i % j == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if (isPrime == 1)
            {
                cout << i << " ";
            }
        }
        cout << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
        break;
    }
    system("pause");
    return 0;
}