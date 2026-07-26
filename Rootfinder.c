#include <stdio.h>
#include<math.h>

int main() {
    double a, b, c, dis, root1, root2, realpart, imgpart;
    printf("Quadratic equations are in the form of ax^2 + bx + c \n");
    printf("Enter 'a': ");
    scanf("%lf", &a);
    printf("Enter 'b': ");
    scanf("%lf", &b);
    printf("Enter 'c': ");
    scanf("%lf", &c);

    if (a == 0){
        printf("'a' cannot be zero\n");
        return 0;
    }

    dis = (b * b) - (4 * a * c);

    if (dis > 0){
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("First root is: %.2lf\n", root1);
        printf("Second root is: %.2lf\n", root2);
    }

    else if (dis == 0){
        root1 = root2 = -b/(2*a);
    printf("Both root are equal :%.2lf \n", root1);
    }

    else{
        realpart = -b / ( 2 * a );
        imgpart = sqrt(-dis) / (2 * a);
        printf("One root is : %.2lf + %.2lfi \n", realpart,imgpart);
        printf("Second root is :%.2lf - %.2lfi\n", realpart, imgpart);
    }

return 0;
}