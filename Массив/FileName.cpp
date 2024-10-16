#include <iostream>
#include <cstdlib>  
#include <ctime>  

// Задание 1
int main() {
    setlocale(LC_ALL, "Russian");
    const int SIZE = 15;
    int arr[SIZE];

    std::srand(std::time(0));


    for (int i = 0; i < SIZE; ++i) {
        arr[i] = std::rand() % 100;
    }


    std::cout << "Сгенерированный массив: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    int minElement = arr[0];
    int maxElement = arr[0];

    for (int i = 1; i < SIZE; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    std::cout << "Минимальный элемент: " << minElement << std::endl;
    std::cout << "Максимальный элемент: " << maxElement << std::endl;

    return 0;


    // Задание 2
    














}