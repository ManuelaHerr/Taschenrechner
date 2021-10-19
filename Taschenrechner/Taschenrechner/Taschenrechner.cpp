
#include <iostream>
using namespace std;


int main()
{
	double number1, number2, result = 0;
	char symbol;
	int option, loop = 0;

	cout << "Die Rechnung besteht aus zwei Zahlen und einem Rechenoperator. Eingeben wie folgt : Zahl1 Rechenoperator Zahl2\n \n";

	while (loop == 0)
	{
		cout << "Ihre Rechnung: ";
		cin >> number1 >> symbol >> number2;

		switch (symbol)
		{
		case '+':  result = number1 + number2;
			break;
		case '-': result = number1 - number2;
			break;
		case '/': result = number1 / number2;
			break;
		case '*': result = number1 * number2;
			break;
		default: cout << "Das  Rechenzeichen ist unbekannt! Das Ergebnis ist daher: ";
		}

		cout << "Ihr Ergebniss ist: " << result << "\n \n Zum weiter rechnen 1 eingeben, zum schliessen des Taschenrechners beliebige Zahl eingeben: ";
		cin >> option;
		cout << endl;

		if (option != 1)
		{
			loop++;
		}


	}
}

