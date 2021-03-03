#include <stdio.h>

int primo(int);

int main()
{
    int i, j, k;
    for(i=600; i<=800; i+=2)
        for(j=2; j<i; j++)
            if(primo(j))
                for(k=2; k<j; k++)
                    if(primo(k))
                        if(k+j==i)
                            printf("%d = %d + %d\n", i, j, k);

    return 0;
}

int primo(int num)
{
    int i, acum=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
            acum++;
    }
    if(acum==0) return 1;
    else return 0;
}
