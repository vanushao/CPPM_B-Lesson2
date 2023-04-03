#include <iostream>
#include <string>

struct address {
    std::string city = " ";
    std::string street = " ";
    int house = 0;
    int flat = 0;
    int postcode = 0;
};

std::ostream& operator<<(std::ostream& out, const address& a) {
    out << "Город: " << a.city << std::endl <<
        "Улица: " << a.street << std::endl <<
        "Номер дома: " << a.house << std::endl <<
        "Номер квартиры: " << a.flat << std::endl <<
        "Индекс: " << a.postcode << std::endl;

    return out;
}

/*void print_address(const address& a) {
    std::cout << "Город: " << a.city << std::endl <<
        "Улица: " << a.street << std::endl <<
        "Номер дома: " << a.house << std::endl <<
        "Номер квартиры: " << a.flat << std::endl <<
        "Индекс: " << a.postcode << std::endl;
}*/

int main() {
    std::setlocale(LC_ALL, "Russian");

    address a;
    a.city = "Москва";
    a.street = "Арбат";
    a.house = 12;
    a.flat = 8;
    a.postcode = 123456;

    std::cout << a << std::endl;
    //print_address(a);
}


