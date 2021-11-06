#include <stdio.h>

int main()
{
    int w=0, u=0, l=0, n=0, m=0, o=0, total=0, v=0;

    do
    {    
        printf("Qual o melhor sistema operacional?\n");
        printf("1. Windows\n");
        printf("2. Unix \n");
        printf("3. Linux\n");
        printf("4. Netware\n");
        printf("5. Mac OS\n");
        printf("6. Outros\n");

        scanf("%d", &v);

        if(v==1 || v==2 || v==3 || v==4 || v==5 || v==6)
        {
            switch (v)
            {
            case 1:
                w++;
                break;
            case 2:
                u++;
                break;
            case 3:
                l++;
                break;
            case 4:
                n++;
                break;
            case 5:
                m++;
                break;
            case 6:
                o++;
                break;
            }
            total++
        }
    } while (v != 0);
    
    printf("Windows: %f", (float) w/total );
    printf("Unix: %f", (float) u/total );
    printf("Linux: %f", (float) l/total );
    printf("Netware: %f", (float) n/total );
    printf("Mac OS: %f", (float) m/total );
    printf("Outros: %f", (float) o/total );

    printf("%% total: %f", (float) (w+u+l+n+m+o)/total);

    return 0;
}