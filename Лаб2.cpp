#include <iostream>
#include <cmath>
#include <Windows.h>

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int N;
    std::cout << "Введіть додатнє значення N: ";
    std::cin >> N;

    int A = 0;  //Ініціалізація змінної A нулем
    for (int i = 0; i < N; ++i) {  //Цикл для індексу i від 0 до N-1
        A += pow(2, i);  //Додавання до A 2^i на кожній ітерації циклу
    }

    int B = pow(2, N) - 1;

    std::cout << "Значення змінної A: " << A << std::endl;
    std::cout << "Значення змінної B (теоретично): " << B << std::endl;

    if (A == B) {
        std::cout << "Дорівнюють" << std::endl;
    }
    else if (A > B) {
        std::cout << "Сума більше" << std::endl;
    }
    else {
        std::cout << "Сума менше" << std::endl;
    }

    return 0;
}