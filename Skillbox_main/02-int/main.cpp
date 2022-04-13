#include <iostream>

int main() {
    std::cout << "1й урок\n";
    int ApartCostKK = 5;
    int ShoesSize = 42;
    int AnimalCount = 153;
    int NvidiaCost = 40000;
    std::cout << ApartCostKK << " " << ShoesSize << " " << AnimalCount << " " << NvidiaCost;

    std::cout << "\n \n Карточка игрока";
    int circle = 4;
    int engine = 254;
    int wheels = 93;
    int StWheel = 49;
    int wind = 21;
    int rain = 17;
    std::string Name = "Шумахер";
    int speed = engine + wheels + StWheel - wind - rain;

    std::cout << "\n===================\n";
    std::cout << "Супер гонки. Круг " << circle <<"\n";
    std::cout << "===================\n";
    std::cout << "Шумахер (" << speed <<")" <<"\n";
    std::cout << "===================\n";
    std::cout << "Водитель: " << Name <<"\n";
    std::cout << "Скорость: " << speed <<"\n";
    std::cout << "-------------------\n";
    std::cout << "Оснащение\n";
    std::cout << "Двигатель: +" << engine <<"\n";
    std::cout << "Колеса: +" << wheels <<"\n";
    std::cout << "Руль: +" << StWheel <<"\n";
    std::cout << "-------------------\n";
    std::cout << "Действия плохой погоды\n";
    std::cout << "Ветер: -" << wind <<"\n";
    std::cout << "Дождь: -" <<rain <<"\n";

    std::cout << "\nКалькулятор\n";
    int Cost = 6400;
    int Post = 350;
    int Sale = 700;
    int Total = Cost + Post - Sale;

    std::cout << "Приветствуем вас в калькуляторе!\nОн поможет рассчитать полную стоимость товаров с учетом скидок и доставки.\n"
                 "Введите стоимость товара: " << Cost << "\nВведите стоимость доставки: " << Post <<"\nВведите размер скидки: " << Sale <<
                 "\n-----Считаем-----\nИтого: " << Total;

    std::cout << "\n \nКрылышки и ножки\n";
    int workShift = 480;
    int orderTime = 2;
    int cashierTime = 4;
    int clientsShift = workShift/(orderTime+cashierTime);
    std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\nВведите длительность смены в минутах: "
                << workShift << "\nСколько минут клиент делает заказ? " << orderTime << "\nСколько минут кассир собирает заказ? "
                << cashierTime << "\n-----Считаем-----\nЗа смену длиной " << workShift << " минут кассир успеет обслужить "
                << clientsShift << " клиентов\n" ;

    std::cout << "\nКвитанция\n";
    int paySum = 4000000;
    int entranceCount = 10;
    int apartsByEntr = 40;
    int pubServ = paySum / (entranceCount * apartsByEntr);
    std::cout << "Приветствуем вас в калькуляторе квартплаты!\nВведите сумму, указанную в квитанции: "
                << paySum <<"\nСколько подъездов в вашем доме? "<< entranceCount << "\nСколько квартир в каждом подъезде? "
                << apartsByEntr << "\n----Считаем-----\nКаждая квартира должна заплатить по "<< pubServ <<" руб." ;
}
