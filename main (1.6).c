#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3; 
    double u1, v1, u2, v2, u3, v3;

    printf("Введіть координати вершин першого трикутника (x1 y1 x2 y2 x3 y3): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    printf("Введіть координати вершин другого трикутника (u1 v1 u2 v2 u3 v3): ");
    scanf("%lf %lf %lf %lf %lf %lf", &u1, &v1, &u2, &v2, &u3, &v3);

    double triangle1 = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    double triangle2 = 0.5 * fabs(u1 * (v2 - v3) + u2 * (v3 - v1) + u3 * (v1 - v2));

    if (triangle1 > triangle2) {
        printf("Перший трикутник має більшу площу.\n");
    } else if (triangle1 < triangle2) {
        printf("Другий трикутник має більшу площу.\n");
    } else {
        printf("Обидва трикутники мають однакову площу.\n");
    }

    return 0;
}