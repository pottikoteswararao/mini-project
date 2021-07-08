#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
#include "calc.h"
#include"scientific_calc.c"

int main()
{
    printf("*||                                                  ||*\n");
    printf("*______________________________________________________*\n");
    printf("*                                                      *\n");
    printf("*                scientific calculator                 *\n");
    printf("Used for basic, trigonometric and numerical calculations\n");
    printf("*                                                      *\n");
    printf("*______________________________________________________*\n");
    printf("*||                                                  ||*\n");
    printf("\n");
    printf("*.BASIC CALCULATIONS\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. square of a value\n6. power of a value\n7. absolute of a value\n8. factorial of a number\n");
    printf("*. TRIGONOMETRIC CALCULATIONS\n");
    printf("9.cosine\n10. sin\n11. tangent(tan)\n12. cosecant(cosec)\n13. seacant(sec)\n14. cot\n");
    printf("*. NUMERICAL CALCULATIONS\n");
    printf("15. HCF of a number\n16. LCM of a number\n17. logarithm\n18. triangle\n19. circle\n20. square root\n21. cube root\n");
    scanf(" %d",&i);
    switch(i)
    {
        case 1:
        scanf("%lf %lf",&a1,&a2);
        printf("%lf",add(a1,a2));
        break;

        case 2:
        scanf("%lf %lf",&su1,&su2);
        printf("%lf",sub(su1,su2));
        break;

        case 3:
        scanf("%lf %lf",&mu1,&mu2);
        printf("%lf",mul(mu1,mu2));
        break;

        case 4:
        scanf("%lf %lf",&div1,&div2);
        printf("%lf",divi(div1,div2));
        break;
    
        case 5:
        scanf("%lf",&sqr);
        printf("%lf",square(sqr));
        break;

        case 6:
        scanf("%lf %d",&pwr,&m);
        printf("%lf",power(pwr,m));
        break;

        case 7:
        scanf("%f",&absol);
        printf("%d",abs(absol));
        break;

        case 8:
        scanf("%lld",&facto);
        printf("%lld",factorial(facto));
        break;

        case 9:
        scanf("%lf",&xcos);
        printf("%lf",cos1(xcos,3));
        break;

        case 10:
        scanf("%lf",&xsin);
        printf("%lf",sin1(xsin));
        break;

        case 11:
        scanf("%lf",&xtan);
        printf("%lf",tan1(xtan));
        break;

        case 12:
        scanf("%lf",&xcosec);
        printf("%lf",cosec1(xcosec));
        break;
        
        case 13:
        scanf("%lf",&xsec);
        printf("%lf",sec1(xsec));
        break;
        
        case 14:
        scanf("%lf",&xcot);
        printf("%lf",cot1(xcot));
        break;
        
        case 15:
        scanf("%d %d",&ha,&hb);
        printf("%d",gcd(ha,hb));
        break;

        case 16:
        scanf("%lld %lld",&la,&lb);
        printf("%lld",lcm(la,lb));
        break;

        case 17:
        scanf("%lf",&ab);
        printf("%lf",logarithm(ab));
        break;

        case 18:
        scanf("%lf %lf",&len,&bred);
        printf("%lf",triangle(len,bred));
        break;

        case 19:
        scanf("%lf",&radi);
        circle(radi);
        break;

        case 20:
        scanf("%lf",&sq_s);
        printf("%lf",sq_root(sq_s));
        break;

        case 21:
        scanf("%lf",&cube_s);
        printf("%lf",cube_root(cube_s));
        break;

        default:
        printf("wrong choice, please choose from 1 to 21");
    }  
    return 0;
}
