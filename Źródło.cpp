#include <iostream>
#include <string>
struct car
{
	//char * marka = new char;
	std::string marka;
	int rok_produkcji;
};

int main()
{
	std::cout << "Ile aut chcesz skatalgowaæ: ";
	int ilosc = 0;
	std::cin >> ilosc;

	car * katalog = new car[ilosc];
	for (int i = 0; i < ilosc; i++)
	{
		std::cin.get();
		std::cout << "Podaj nazwe " << i + 1 << " auta: ";
		std::getline(std::cin, katalog[i].marka);
		std::cout << "Rok produkcji: ";
		std::cin >> (katalog + i)->rok_produkcji;
	}
	for (int i = 0; i < ilosc; i++)
	{
		std::cout << "Auto #"<<i+1<<" "<< katalog[i].marka << "\trok produkcji " << (katalog+i)->rok_produkcji<< "\n";
	}
	std::cin.get();
	std::cin.get();

	return 0;
}