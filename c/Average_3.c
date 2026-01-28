#include <stdio.h>
int main()
{
    double n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    double sum1 = (n1 * 2.0) + (n2 * 3.0) + (n3 * 4.0) + (n4 * 1.0);
    double avrg = sum1 / (2.00 + 3.00 + 4.00 + 1.00);
    double new;
    if (avrg < 5.00)
    {
        printf("Media: %.1lf\n", avrg);
        printf("Aluno reprovado.\n");
    }
    else if (avrg >= 7.00)
    {
        printf("Media: %.1lf\n", avrg);
        printf("Aluno aprovado.\n");
    }
    else
    {
        scanf("%lf", &new);

        printf("Media: %.1lf\n", avrg);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", new);
        double new2 = (new + avrg) / 2;
        if (new2 >= 5.00)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", new2);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", new2);
        }
    }

    return 0;
}