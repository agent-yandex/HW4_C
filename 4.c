#include <stdio.h>

int main() {
    // result - массив из чисел, в котором будет находиться 2-чное число
    // flag - флаг, отвечающий за отрицательные числа
    // i - длина массива с 2-чным числом
    int num, result[1000], i = 0, flag = 0;

    scanf("%d", &num);
    
    // ставим флаг в положение 1, если число отрицательное и делаем его
    // положительным
    if (num < 0) {
        num = 0 - num;
        flag = 1;
    }

    // записываем остаток от деления числа на 2 в массив, затем делим число на 2
    while (num > 0) {
        result[i] = num % 2;
        num /= 2;
        i++;
    }

    // если флаг, то ставим "-" перед числом
    if (flag) printf("-");
    // поскольку в массиве result лежит перевернутое число, выводим его наоборот
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", result[j]);
    }

    printf("\n");

    return 0;
}
