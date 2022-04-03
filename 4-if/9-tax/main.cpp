#include <iostream>

int main() {
  using namespace std;

  cout << "\n\nПлати налоги, живи спокойно!\n";
  int profit;
    std::cout << "Введите размер прибыли: ";
    std::cin >> profit;

    if (profit >= 50000) {
        int tax = ((profit-50000) * 30/100 + (50000-10000) * 20/100 + 10000 * 13/100);
        std::cout << "Размер налога на сумму свыше 50т.р. равен: " << tax << "\n";
    } else if (profit >= 10000) {
        int tax = ((profit-10000) * 20 + 10000 * 13) / 100;
        std::cout << "Размер налога на сумму м/у 10т.р. и 50 т.р.  равен: " << tax << "\n";
    } else if (profit > 0) {
        int tax = profit * 13 / 100;
        std::cout << "Размер налога на сумму менее 10 т.р. равен: " << tax << "\n";
    } else if (profit == 0) {
        std::cout << "Правда? Ничего не заработали? А если найдем?\n";
    } else {
        std::cout << "Ожидалось не отрицательное число\n";
    }
}