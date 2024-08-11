#include <stdio.h>
float avrg(float x, float y, float z)
{
    float a = x + y + z;
    float b = a / 3;
    return b;
}
int main()
{
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    printf("the average is %.2f", avrg(x, y, z));
    return 0;
}