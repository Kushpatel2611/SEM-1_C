#include<stdio.h>
void main()
{
    long long tp,lm,lw,ilm,ilw,women,men;/*
                                tp=total population
                                ilm= illiterate men
                                ilw= illiterate women */
    tp=1441981744;
    women=(48.4*tp)/100;
    men=(51.6*tp)/100;
    printf("\nthe number of total women in the country is:%lld",women);
    printf("\nthe number of total men in the country is:%lld",men);
    lm=(80.95*men)/100;
    ilm=men-lm;
    printf("\nthe number of illiterate men:%lld",ilm);
    lw=(62.84*women)/100;
    ilw=women-lw;
    printf("\nthe number of illiterate women:%lld",ilw);
    

}