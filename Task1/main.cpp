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
        std::cout << "������� ����� ������: ";
        std::cin >> mounth_num;
        mounth = static_cast<mounth_list>(mounth_num);
        switch (mounth)
        {
        case mounth_list::january:
            std::cout << "������" << std::endl;
            break;
        case mounth_list::february:
            std::cout << "�������" << std::endl;
            break;
        case mounth_list::march:
            std::cout << "����" << std::endl;
            break;
        case mounth_list::april:
            std::cout << "������" << std::endl;
            break;
        case mounth_list::may:
            std::cout << "���" << std::endl;
            break;
        case mounth_list::june:
            std::cout << "����" << std::endl;
            break;
        case mounth_list::july:
            std::cout << "����" << std::endl;
            break;
        case mounth_list::august:
            std::cout << "������" << std::endl;
            break;
        case mounth_list::september:
            std::cout << "��������" << std::endl;
            break;
        case mounth_list::october:
            std::cout << "�������" << std::endl;
            break;
        case mounth_list::november:
            std::cout << "������" << std::endl;
            break;
        case mounth_list::december:
            std::cout << "�������" << std::endl;
            break;
        case mounth_list::exit:
            std::cout << "�� ��������" << std::endl;
            return 0;
            break;
        default:
            std::cout << "������������ �����!" << std::endl;
            break;
        }

    }
    return 0;
}