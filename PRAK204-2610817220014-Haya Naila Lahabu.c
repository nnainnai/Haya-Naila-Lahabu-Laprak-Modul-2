#include <stdio.h>

int main() {
    double r, t, volume, luas, keliling;
    double phi = 22.0 / 7.0;
    scanf("%lf %lf", &r, &t);

    volume = phi * r * r * t;
    luas = 2 * phi * r * (r + t);
    keliling = 2 * phi * r;

    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf\n", keliling);

    return 0;
}