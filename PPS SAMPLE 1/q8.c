#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, dis,r1,r2,afReal, imagPart;
    printf("Enter cofficients of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    dis = b*b - 4 * a * c;

    if (dis > 0){
        r1 = (-b + sqrt(dis))/ (2 * a);
        r2 = (-b - sqrt(dis))/ (2 * a);
        printf("root1 = %.2f and root2 = %.2f", r1, r2);
    }
    else if (dis == 0){
        r1 = r2 = -b / (2*a);
        printf("root1 = root2 = %.2f", r1);

    }
    else{
        afReal = -b / (2*a);
        imagPart = sqrt(-dis) / (2 * a);
        printf("root1 = %.2f + %.2f  and root2 = %.2f - %.2f", afReal, imagPart,afReal, imagPart);
    }
    return 0;
}