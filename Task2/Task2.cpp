#include <iostream>

struct account {
    int a_number = 0;
    std::string owner = "";
    float deposit = .0;
};

void change_balance(account& a) {
    std::cout << "Введите новый баланс: ";
    std::cin >> a.deposit;
}

void change_balance(account* a) {
    std::cout << "Введите новый баланс: ";
    std::cin >> a->deposit;
}

int main() {
    std::setlocale(LC_ALL, "Russian");

    account a;
    std::cout << "Введите номер счёта: ";
    std::cin >> a.a_number;
    std::cout << "Введите имя владельца: ";
    std::cin >> a.owner;
    std::cout << "Введите баланс: ";
    std::cin >> a.deposit;

    change_balance(a);
    change_balance(&a);

    std::cout << "Ваш счёт: " << a.owner << ", " << a.a_number << ", " << a.deposit << std::endl;
}