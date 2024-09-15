#include <stdio.h>

int main() {

    int r = 0, h = 0;
    float area, volume;

    printf("Value for radius \n");
    scanf("%d", &r);

    area = 3.14 * r * r;
    printf("Area of circle is %f \n", area);

    printf("Value for height \n");
    scanf("%d", &h);

    volume = area * h;
    printf("Volume of cylinder is %f \n", volume);

    return 0;
}
