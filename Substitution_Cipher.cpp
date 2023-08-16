#include <iostream>
#include <string>

using namespace std;

string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
string key{ "ikmsyzgTcuMZLHbltYxaJXBOGECqQUoRPrjISDVveWNnAfwFdpKh" };
string cipher{};
char selection{};

void print();
void encrypt();
void decrypt();

int main()
{
	print();
}

void print()
{
	do
	{
		cout << "1: Encrypt" << endl;
		cout << "2: Decrypt" << endl;
		cout << "Q: Quit" << endl;
		cin >> selection;

		switch (selection)
		{
		case '1':
			encrypt();
			break;

		case '2':
			decrypt();
			break;

		case 'q':
		case 'Q':
			cout << "Bye!" << endl;
			break;

		default:
			cout << "Wrong input. Try again please!" << endl;
			break;
		}
	} while (!(selection == 'q' || selection == 'Q'));
}

void encrypt()
{
	string temp{};
	cout << "Please enter the cipher: ";
	getline(cin >> ws, cipher);
	size_t i{ 0 };
	for (char c : cipher)
	{
		i = alphabet.find(c);
		if (i == string::npos)
		{
			temp += c;
			continue;
		}
		temp += key.at(i);
	}
	cout << cipher << " is encrypted to:" << endl;
	cout << temp << endl;
}

void decrypt()
{
	string temp{};
	cout << "Please enter the cipher: ";
	getline(cin >> ws, cipher);
	size_t i{ 0 };
	for (char c : cipher)
	{
		i = key.find(c);
		if (i == string::npos)
		{
			temp += c;
			continue;
		}
		temp += alphabet.at(i);
	}
	cout << cipher << " is decrypted to:" << endl;
	cout << temp << endl;
}