#include<stdio.h>
#include<conio.h>
int main()
{
    int bil;
    printf("-----------------------\n");
    printf("Bilang Positif Dan Negatif\n");
    printf("-----------------------\n");
    printf("Tomi Wijaya\n");
    printf("\nMasukan Bilang : ");

    scanf("%d",&bil);

    if(bil>0)
        printf("\n\n%d termasuk bilangan positif",bil);
    else if(bil<0)
        printf("\n\n%d termasuk bilangan Negatif",bil);
    else
        printf("\n\n%d termasuk bilangan Nol",bil);
    getch();
}
