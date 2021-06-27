#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Введите строку: ";
	string str,str2 = "";
	cin >> str;
	string str_gl = "ауоиэыяюеёaeiouy";

	for (int i = 0; i < str.length(); i++) 
		for (int j = 0; j < str_gl.length(); j++)
			if (str[i] == str_gl[j])
				str2 += str[i];


	cout << "Все гласные буквы, присутствующие в строке: " << str2 << endl;
	

	return 0;
}
