#include <stdio.h>

int main () {
    // cur_date - актуальная дата, по которой мы печатаем числа
    int n, k, cur_date = 1, i;
    scanf("%d %d", &n, &k);

    // печатаем первую строчку с необходимыми пробелами
    for (i = 1; i <= 7; i++) {
        // если cur_date дошла до конца, то заканчиваем печать
        if (cur_date == k && i >= n) {
            printf(" %d\n", cur_date);
            cur_date++;
            break;
        // если i дошла до 7 дня недели, то заканчиваем печать строки
        } else if (i == 7 && i >= n) {
            printf(" %d\n", cur_date);
            cur_date++;
        // если i попадает под день недели, то печатаем cur_date
        } else if (i >= n) {
            printf(" %d ", cur_date);
            cur_date++;
        // если i не попадает под день недели, то печатает пустую строку с 3 пробелами
        } else {
            printf("   ");
        }
    }

    // в цикле, пока cur_date не дойдет до k печатаем столбцы календаря
    while (cur_date <= k) {
        // каждый цикл for - одна строка в календаре
        for (i = 1; i <= 7; i++) {
            // если cur_date дошла до конца (до k), печатаем конец строки
            if (cur_date == k) {
                if (cur_date >= 10) {
                    printf("%d\n", cur_date);
                } else {
                    printf(" %d\n", cur_date);
                }
                cur_date++;
                break;
            // если i дошла до конца недели, то печатаем конец строки
            } else if (i == 7) {
                if (cur_date >= 10) {
                    printf("%d\n", cur_date);
                } else {
                    printf(" %d\n", cur_date);
                }
            // если никакое из условий выше не прошло, то делаем обычный вывод числа, со всеми пробелами, проверяя двузначное оно или нет
            } else {
                if (cur_date >= 10) {
                    printf("%d ", cur_date);
                } else {
                    printf(" %d ", cur_date);
                }
            }
            cur_date++;
        }
    }

    return 0;
}