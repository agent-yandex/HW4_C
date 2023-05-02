#include <stdio.h>

int main() {
    // объявляем кол-во чисел count и конечный результат result
    int count, result = 0, num;

    scanf("%d", &count);

    // считываем введенные числа и если оно положительное, то result +1
    for (int i = 1; i <= count; i++) {
        scanf("%d", &num);
        if (num > 0) result++;
    }

    printf("%d\n", result);
    return 0;
}