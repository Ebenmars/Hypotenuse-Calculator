#include <stdio.h>
#include <math.h>

int main()
{

    double A, B, C;

    double resultOfAdd;

    printf("\nEnter side A: \n");
    scanf("%lf", &A);

    printf("Enter side B: \n");
    scanf("%lf", &B);

    resultOfAdd = pow(A, 2) + pow(B, 2);
    C = sqrt(resultOfAdd);

    printf("The Hypotenuse('C') of this Triangle is: %.2lf\n\n", C);

    return 0;
}
