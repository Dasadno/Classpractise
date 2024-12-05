#include <iostream>
#include <Windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string phraze = "Какой прекрасный текст, однако.";
	for (int i = 0; i < phraze.size(); i++)
	{
		std::cout << phraze[i];
		Sleep(20);
	}
}