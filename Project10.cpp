#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the amount to pay: ";
    std::cin >> n;

    int num_bills[7] = { 0 }; // Массив для хранения количества банкнот каждого номинала

    int denominations[7] = { 64, 32, 16, 8, 4, 2, 1 }; // Набор номиналов банкнот

    for (int i = 0; i < 7; i++)
    {
        num_bills[i] = n / denominations[i]; // Расчёт количество купюр этого номинала
        n -= num_bills[i] * denominations[i]; // Вычет суммы, оплаченную этими купюрами, из общей суммы
    }

    std::cout << "Number of bills:" << std::endl;
    for (int i = 0; i < 7; i++)
    {
        std::cout << denominations[i] << ": " << num_bills[i] << std::endl;
    }

    return 0;
}