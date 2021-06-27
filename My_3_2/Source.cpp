#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите строку: ";
	string str,str2 = "";
	cin >> str;
	string str_gl = "ауоиэы€юеЄaeiouy";

	for (int i = 0; i < str.length(); i++) 
		for (int j = 0; j < str_gl.length(); j++)
			if (str[i] == str_gl[j])
				str2 += str[i];


	cout << "¬се гласные буквы, присутствующие в строке: " << str2 << endl;
	

	return 0;
}