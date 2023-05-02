#include <stdio.h>

int main () {
    // num - введенные числа, n - кол-во чисел, а также кол-во нулей,
    // положительных и отрицательных чисел в последовательности
    int positiv_c = 0, negativ_c = 0, zero_c = 0, n, num;

    scanf("%d", &n);
    // пробегаемся по всем введенным числам
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        // в зависимости от введенного числа прибавляем 1 в нужную переменную
        if (num == 0) {
            zero_c++;
        } else if (num > 0) {
            positiv_c++;
        } else if (num < 0) {
            negativ_c++;
        }
    }

    printf("%d %d %d\n", zero_c, positiv_c, negativ_c);

    return 0;
}