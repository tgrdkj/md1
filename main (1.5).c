#include <stdio.h>

int main() {
    int age;
    
    printf("Введiть свiй вiк: ");
    scanf("%d", &age);
    
    if (age >= 1 && age <= 10) {
        printf("Ви належите до вікової групи: Дитина\n");
    } else if (age >= 11 && age <= 15) {
        printf("Ви належите до вікової групи: Підліток\n");
    } else if (age >= 16 && age <= 20) {
        printf("Ви належите до вікової групи: Юнак\n");
    } else if (age >= 21 && age <= 30) {
        printf("Ви належите до вікової групи: Молода людина\n");
    } else if (age > 31) {
        printf("Ви належите до вікової групи: Доросла людина\n");
    } else {
      printf("Неправильні дані\n");
    }
    
    return 0;
}