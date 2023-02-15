#include <iostream>
#include <Windows.h>

using namespace std;

struct Adress {
    string Country;
    string City;
    string Street;
    int Building;
    int Flat;
    int Index;
};

void print_struct(Adress& adr) {
    cout << "Страна:\t\t" << adr.Country << '\n';
    cout << "Город:\t\t" << adr.City << '\n';
    cout << "Улица:\t\t" << adr.Street << '\n';
    cout << "Номер дома:\t" << adr.Building << '\n';
    cout << "Номер квартиры:\t" << adr.Flat << '\n';
    cout << "Индекс:\t\t" << adr.Index << '\n';
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Adress msk = { "Россия", "Москва", "Арбат", 12, 8, 123456 };
    Adress izh = { "Россия", "Ижевск", "Пушкина", 59, 143, 953769 };

    print_struct(msk);
    cout << '\n';
    print_struct(izh);
}
