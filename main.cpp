#include <iostream>

using namespace std;

// Метод для подсчета положительных элементов в интервале
int countPositiveInInterval(int arr[], int size, int a, int b) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0 && arr[i] > a && arr[i] < b) {
            ++count;
        }
    }
    return count;
}

int main() {
    
    setlocale(LC_ALL,"rus");
    
    int a, b, k, n;
    
    int V[k];  // Объявление массива "V" размера "k"
    int W[n];  // Объявление массива "W" размера "n"

    // Ввод интервала
    std::cout << "Введите начало и конец интервала (a, b): ";
    std::cin >> a >> b;

    // Ввод размера массива "V"
    std::cout << "Введите размер массива V: ";
    std::cin >> k;
    std::cout << "Введите элементы массива V: ";
    
    for (int i = 0; i < k; ++i) {
        std::cin >> V[i];
    }

    // Ввод размера массива "W"
    std::cout << "Введите размер массива W: ";
    std::cin >> n;
    std::cout << "Введите элементы массива W: ";
    
    for (int i = 0; i < n; ++i) {
        std::cin >> W[i];
    }

    // Подсчет положительных элементов, попадающих в интервал (a, b)
    int countV = countPositiveInInterval(V, k, a, b);
    int countW = countPositiveInInterval(W, n, a, b);

    // Вывод результата
    std::cout << "Количество положительных элементов в массиве V, попадающих в интервал: " << countV << endl;
    std::cout << "Количество положительных элементов в массиве W, попадающих в интервал: " << countW << endl;

    return 0;
}
