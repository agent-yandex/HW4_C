#include <stdio.h>

int main () {
    // nums - массив введенных чисел
    int nums[101], n, num, opt_el, result = 0;

    scanf("%d", &n);
    // заносим все числа в массив nums
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        nums[i] = num;
    }

    // делаем "сортировку пузырьком", чтобы числа шли по возрастанию в массиве
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++) {
            if (nums[i] > nums[j]) {
                opt_el = nums[i];
                nums[i] = nums[j];
                nums[j] = opt_el;
            }
        }
    }

    // поскольку 1-ое и последнее число короче, чем связать с их соседями
    // не получится, то к результату сразу прибавляем эти значения
    result += (nums[1] - nums[0]) + (nums[n - 1] - nums[n - 2]);

    // пробегаемся по всем числам, начиная со 3-его и заканчивая пред-пред-последним
    for (int i = 2; i < n - 2; i++) {
        // проверяем оптимальность связи гвоздя с его соседями (правым и левым)
        // в зависимости от результата в result прибавляем наименьшее значение
        if (nums[i] - nums[i - 1] > nums[i + 1] - nums[i]) {
            result += nums[i + 1] - nums[i];
        } else {
            result += nums[i] - nums[i - 1];
        }
    }

    printf("%d\n", result);

    return 0;
}