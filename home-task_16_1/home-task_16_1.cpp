#include <iostream>
using namespace std;

//■ int mystrcmp(const char* str1, const char* str2); —
//функция сравнивает две строки, и, если строки равны
//возвращает 0, если первая строка больше второй, то
//возвращает 1, иначе –1.
int mystrcmp(const char* str1, const char* str2) {
	if (strlen(str1) == strlen(str2)) return 0;
	if (strlen(str1) > strlen(str2)) return 1;
	if (strlen(str1) < strlen(str2)) return -1;
}
//■ int StringToNumber(char* str); — функция конвертирует строку в число
//и возвращает это число.
int StringToNumber(char* str) {
	return atoi(str);
}
//■ char* NumberToString(int number); — функция конвертирует число в строку и возвращает указатель на
//эту строку.
char* NumberToString() {
	int number;
	cout << "Введите число которое нужно сконвертировать: ";
	cin >> number;
	char string[25];
	_itoa_s(number, string, 36);
	cout << "Число -> " << number << " , Строка -> " << string << endl;
	return 0;
}
//■ char* Uppercase(char* str1); — функция преобразует
//строку в верхний регистр.
char* Uppercase(char* str1) {
	_strupr_s(str1, strlen(str1) + 1);
	return str1;
}
//■ char* Lowercase(char* str1); — функция преобразует
//строку в нижний регистр.
char* Lowercase(char* str1) {
	_strlwr_s(str1, strlen(str1) + 1);
	return str1;
}
//■ char* mystrrev(char* str); — функция реверсирует
//строку и возвращает указатель на новую строку.
char* mystrrev(char* str) {
	char* newstr = new char[strlen(str) + 1];
	newstr = _strrev(str);
	return newstr;
}

int main() {
	setlocale(LC_ALL, "");
	char* str = new char[255] {"aaaadddd"};
	char* str1 = new char[255];
	char* str2 = new char[255];
	cout << "Введите строки для их сравнения" << endl;
	gets_s(str1, 254);
	gets_s(str2, 254);
	cout << mystrcmp(str1, str2) << endl;
	cout << StringToNumber(str1) << endl;
	NumberToString();
	cout << Uppercase(str1) << endl;//перевод в верхний регистр
	cout << Lowercase(str1) << endl;//перевод в нижний регистр
	cout << mystrrev(str);//инверсия строки
}