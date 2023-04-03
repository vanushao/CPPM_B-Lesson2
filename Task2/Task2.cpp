#include <iostream>

struct account {
    int a_number = 0;
    std::string owner = "";
    float deposit = .0;
};


int main() {
    std::setlocale(LC_ALL, "Russian");

    account a;
    std::cout << "Введите номер счёта: ";
    std::cin >> a.a_number;
    std::cout << "Введите имя владельца: ";
    std::cin >> a.owner;
    std::cout << "Введите баланс: ";
    std::cin >> a.deposit;
    std::cout << "Введите новый баланс: ";
    std::cin >> a.deposit;

    std::cout << "Ваш счёт: " << a.owner << ", " << a.a_number << ", " << a.deposit << std::endl;
}