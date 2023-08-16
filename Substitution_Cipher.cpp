#include <iostream>
#include <string>

using namespace std;

string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
string key{ "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm" };
string cipher{};
char c{};

void print();
string encrypt(string);
string decrypt(string);

int main()
{
}

void print()
{
	do
	{
		cout << "1: Encrypt" << endl;
		cout << "2: Decrypt" << endl;
		cout << "Q: Quit" << endl;
		cin >> c;

		switch (c)
		{
		case '1':
			cout << "Please enter the cipher: ";
			getline(cin, cipher);
			cipher = encrypt(cipher);
			break;

		case '2':
			cout << "Please enter the cipher: ";
			getline(cin, cipher);
			cipher = decrypt(cipher);
			break;

		case 'q':
		case 'Q':
			cout << "Bye!" << endl;
			break;
		default:
			cout << "Wrong input. Try again please!" << endl;
			break;
		}
	} while (!(c == 'q' || c == 'Q'));
}

string encrypt(string s)
{
	return s;
}

string decrypt(string s)
{
	return s;
}