#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[1001];
    int len, upper_f = 0, lower_f = 0, digit_f = 0, other_f = 0, flag = 0;

    scanf("%s", password);
    len = strlen(password); // len - длина пароля

    // если длина пароля не подходит, переводим flag в положение 1
    if (len < 8 || len > 14) flag = 1;

    // проходим по каждому символу в пароле
    for (int i = 0; i < len; i++) {
        // проверяем, подходит ли код символа по таблице ASCII
        // если код не подходит, flag = 1 и прерываем цикл
        if (password[i] < 33 || password[i] > 126) {
            flag = 1;
            break;
        }

        // проверяем наличие различных классов символов и ставим флаг,
        // если нашли один из классов
        if (isupper(password[i])) {
            upper_f = 1;
        } else if (islower(password[i])) {
            lower_f = 1;
        } else if (isdigit(password[i])) {
            digit_f = 1;
        } else {
            other_f = 1;
        }
    }

    // проверяем есть ли в пароле не менее 3 классов символов, если нет,
    // то переводим главный флаг в 1
    if (upper_f + lower_f + digit_f + other_f < 3) flag = 1;

    // в зависимости от значения flag: 1 - выводим NO, 0 - YES
    printf("%s\n", (flag) ? "NO":"YES");
    return 0;
}