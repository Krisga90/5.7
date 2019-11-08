#include <iostream>
#include <string>
struct car
{
	//char * marka = new char;
	std::string marka;
	int rok_produkcji;
};
int Retry(void);

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
		while (!std::cin.good())
			(katalog + i)->rok_produkcji = Retry();
	}
	for (int i = 0; i < ilosc; i++)
	{
		std::cout << "Auto #" << i + 1 << " " << katalog[i].marka << "\trok produkcji " << (katalog + i)->rok_produkcji << "\n";
	}
	while (std::cin.get() != '\n')
		continue;
	std::cin.get();

	return 0;
}

int Retry(void)
{

	int date;
	std::cin.clear();
	while (std::cin.get() != '\n')
		continue;
	std::cout << "zly format daty, wpisz jako liczba: ";
	std::cin >> date;
	return date;
}