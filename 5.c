#include <stdio.h>

int main() {
    int num;
    // объявляем сумму и кол-во чисел в нецелом типе
    float sum = 0.0, count = 0.0;

    // пока не введен 0, считываем число и прибавляем его в sum
    // count + 1
    scanf("%d", &num);
    while (num != 0) {
        sum += num;
        count++;
        scanf("%d", &num);
    }

    // если последовательность не нулевая выводим sum / count,
    // в противном случае выводим 0
    printf("%f\n", (count == 0) ? 0:sum / count);
    return 0;
}