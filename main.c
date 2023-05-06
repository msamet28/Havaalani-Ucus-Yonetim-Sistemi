//Mehmet Samet DURSUN

#include <stdio.h>
#include <stdlib.h>

struct ucak
{
    int oncelikid;
    int ucakid;
    int istenensaat;
    int gecikme;
};

void menu()
{
    while(1)
    {
        int i;
        printf("\n\n\t\t\t\t\t\t     MENU");
        printf("\n\n\n\t\t\t\t\t1-Input Dosyasindan Veri Cekme\n\n");
        printf("\t\t\t\t\t2-Cikis");
        printf("\n\n\n\t\t\t\t\tYapmak Istediginiz Islemi Seciniz:");
        scanf("%d",&i);
        if(i==1)
        {
            vericek();
        }
        else
        {
            break;
        }
    }
}

void vericek()
{
    system("cls");

    FILE *dosya;
    dosya=fopen("input.txt","r");

    struct ucak dizi[50];
    int i=0;

    while(!feof(dosya))
    {
        int h=0;
        int s=0;
        fscanf(dosya,"%d %d %d",&dizi[i].oncelikid, &dizi[i].ucakid, &dizi[i].istenensaat);
        dizi[i].gecikme=0;
        s=dizi[i].ucakid;
        printf("\n\n");
        printf("                                   oncelik id       ucak id       istenen inis saati\n");
        printf("                                   ----------       -------       ------------------\n");
        printf("\%40d %15d %17d\n",dizi[i].oncelikid, dizi[i].ucakid, dizi[i].istenensaat);

        for(int a=0 ; a<i ; a++)
        {
            for(int b=0 ; b<i ; b++)
            {
                if(dizi[b].istenensaat>dizi[b+1].istenensaat)
                {
                    int temp=dizi[b+1].oncelikid;
                    dizi[b+1].oncelikid=dizi[b].oncelikid;
                    dizi[b].oncelikid=temp;

                    int temp1=dizi[b+1].ucakid;
                    dizi[b+1].ucakid=dizi[b].ucakid;
                    dizi[b].ucakid=temp1;

                    int temp2=dizi[b+1].istenensaat;
                    dizi[b+1].istenensaat=dizi[b].istenensaat;
                    dizi[b].istenensaat=temp2;

                    int temp3=dizi[b+1].gecikme;
                    dizi[b+1].gecikme=dizi[b].gecikme;
                    dizi[b].gecikme=temp3;
                }
            }
        }

        for(int a=0 ; a<i ; a++)
        {
            for(int b=0 ; b<i ; b++)
            {
                if(dizi[b].istenensaat==dizi[b+1].istenensaat)
                {
                    if(dizi[b].oncelikid>dizi[b+1].oncelikid)
                    {
                        int temp=dizi[b+1].oncelikid;
                        dizi[b+1].oncelikid=dizi[b].oncelikid;
                        dizi[b].oncelikid=temp;

                        int temp1=dizi[b+1].ucakid;
                        dizi[b+1].ucakid=dizi[b].ucakid;
                        dizi[b].ucakid=temp1;

                        int temp2=dizi[b+1].istenensaat;
                        dizi[b+1].istenensaat=dizi[b].istenensaat;
                        dizi[b].istenensaat=temp2;

                        int temp3=dizi[b+1].gecikme;
                        dizi[b+1].gecikme=dizi[b].gecikme;
                        dizi[b].gecikme=temp3;
                    }
                    else if(dizi[b].oncelikid==dizi[b+1].oncelikid)
                    {
                        if(dizi[b].ucakid>dizi[b+1].ucakid)
                        {
                            int temp=dizi[b+1].oncelikid;
                            dizi[b+1].oncelikid=dizi[b].oncelikid;
                            dizi[b].oncelikid=temp;

                            int temp1=dizi[b+1].ucakid;
                            dizi[b+1].ucakid=dizi[b].ucakid;
                            dizi[b].ucakid=temp1;

                            int temp2=dizi[b+1].istenensaat;
                            dizi[b+1].istenensaat=dizi[b].istenensaat;
                            dizi[b].istenensaat=temp2;

                            int temp3=dizi[b+1].gecikme;
                            dizi[b+1].gecikme=dizi[b].gecikme;
                            dizi[b].gecikme=temp3;
                        }
                    }

                    dizi[b+1].istenensaat++;
                    dizi[b+1].gecikme++;

                    if(dizi[b+1].gecikme==4 && dizi[b+1].istenensaat<99)
                    {
                        if(s<=10)
                        {
                            printf("\n%d Id'li Ucak %d-%d-%d-%d Id'li Ucaklarin Inis Onceligi Sebebiyle Sabiha Gokcen'e Yonlendirilmistir",dizi[b+1].ucakid,dizi[b].ucakid,dizi[b-1].ucakid,dizi[b-2].ucakid,dizi[b-3].ucakid);
                        }
                        else
                        {
                            if(s!=dizi[b+1].ucakid)
                            {
                                printf("\nAcil Inis Yapmasi Gereken %d Id'li Ucak Sebebiyle %d Id'li Ucagin Inis Izni Iptal Edilmistir",s,dizi[b+1].ucakid);
                            }
                            else
                            {
                               printf("\n%d Id'li Ucak %d-%d-%d-%d Id'li Ucaklarin Inis Onceligi Sebebiyle Sabiha Gokcen'e Yonlendirilmistir",dizi[b+1].ucakid,dizi[b].ucakid,dizi[b-1].ucakid,dizi[b-2].ucakid,dizi[b-3].ucakid);
                            }
                        }

                        h=1;

                        for(int x=b+1 ; x<i ; x++)
                        {
                            dizi[x].oncelikid=dizi[x+1].oncelikid;
                            dizi[x].ucakid=dizi[x+1].ucakid;
                            dizi[x].istenensaat=dizi[x+1].istenensaat;
                            dizi[x].gecikme=dizi[x+1].gecikme;
                            dizi[x+1].istenensaat=100;
                        }
                    }
                }
            }
        }

        if(h!=1)
        {
            printf("\n%d Id'li Ucaga Inis Izni Verilmistir",s);
        }

        printf("\n\n\noncelik id       ucak id       istenen saat       inis saati       gecikme       kalkis saati\n");
        printf("----------       -------       -----------         ---------       --------       ----------\n");
        FILE *dosya1;
        dosya1=fopen("output.txt","w");
        fprintf(dosya1,"\noncelik id       ucak id       istenen saat       inis saati       gecikme       kalkis saati\n");
        fprintf(dosya1,"----------       -------       -----------         ---------       --------       ----------\n");

        int j=0;
        for(j ; j<=i ; j++)
        {
            if(dizi[j].istenensaat<11)
            {
                printf("    %d\t           %d\t           %d\t             %d\t              %d\t              %d\n",dizi[j].oncelikid, dizi[j].ucakid, dizi[j].istenensaat-dizi[j].gecikme,dizi[j].istenensaat,dizi[j].gecikme,(dizi[j].istenensaat+1)%24);
                fprintf(dosya1,"    %d\t           %d\t           %d\t             %d\t              %d\t              %d\n",dizi[j].oncelikid, dizi[j].ucakid, dizi[j].istenensaat-dizi[j].gecikme,dizi[j].istenensaat,dizi[j].gecikme,(dizi[j].istenensaat+1)%24);
            }
        }

        fclose(dosya1);
        printf("\n\n");
        system("pause");
        system("cls");
        i++;
    }

    fclose(dosya);
    system("cls");

}

int main()
{
    system("color 06");
    menu();
    return 0;
}
