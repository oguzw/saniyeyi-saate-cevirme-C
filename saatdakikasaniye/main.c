#include <stdio.h>
#include <stdlib.h>

int hesaplayici(int sn, int dk, int saatim)
{
    int yenisn;
    dk = sn/60;
    saatim = dk/60;
    if (sn>=60)
    {
        yenisn = sn%60;
        if(dk>=60)
        {
            dk = dk%60;

        }

    }
    else
    {
        yenisn = sn;
    }

    printf("%d:%d:%d",saatim,dk,yenisn);


}

int main()
{
    int saniye;
    printf("Lutfen saniye giriniz.\n");
    scanf("%d",&saniye);
    int dakika, saat;
    hesaplayici(saniye,dakika,saat);
    return 0;
}
