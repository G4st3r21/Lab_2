#include <iostream>
#include <cmath>

using namespace std;

double calculateSum(int n) {
    double sum = 0;
    double sumElement = 0;

    do {
        sum += sumElement;
        sumElement = 1 / pow(n + 1, 4);
        n++;
    } while (abs(sumElement) > pow(10, -6));

    return sum;
}

double calculateAbsoluteSum() {
    return pow(M_PI, 4) / 90;
}

void printAllSums(double sum, double absoluteSum) {
    cout << "Сумма ряда: " << sum << endl;
    cout << "Абсолютная сумма: " << absoluteSum << endl;
    cout << "Абсолютная погрешность: " << abs(absoluteSum - sum) << endl;
}

int main() {
    int n = 0;

    double sum = calculateSum(n);
    double absoluteSum = calculateAbsoluteSum();

    printAllSums(sum, absoluteSum);

    return 0;
}
