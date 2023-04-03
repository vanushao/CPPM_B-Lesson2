#include <iostream>

enum class mounth_list {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december,
    exit = 0
};

int main() {
    std::setlocale(LC_ALL, "Russian");

    mounth_list mounth;
    int mounth_num = 0;
    while (true) {
        std::cout << "Введите номер месяца: ";
        std::cin >> mounth_num;
        mounth = static_cast<mounth_list>(mounth_num);
        switch (mounth)
        {
        case mounth_list::january:
            std::cout << "Январь" << std::endl;
            break;
        case mounth_list::february:
            std::cout << "Февраль" << std::endl;
            break;
        case mounth_list::march:
            std::cout << "Март" << std::endl;
            break;
        case mounth_list::april:
            std::cout << "Апрель" << std::endl;
            break;
        case mounth_list::may:
            std::cout << "Май" << std::endl;
            break;
        case mounth_list::june:
            std::cout << "Июнь" << std::endl;
            break;
        case mounth_list::july:
            std::cout << "Июль" << std::endl;
            break;
        case mounth_list::august:
            std::cout << "Август" << std::endl;
            break;
        case mounth_list::september:
            std::cout << "Сентябрь" << std::endl;
            break;
        case mounth_list::october:
            std::cout << "Октябрь" << std::endl;
            break;
        case mounth_list::november:
            std::cout << "Ноябрь" << std::endl;
            break;
        case mounth_list::december:
            std::cout << "Декабрь" << std::endl;
            break;
        case mounth_list::exit:
            std::cout << "До свидания" << std::endl;
            return 0;
            break;
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }

    }
    return 0;
}