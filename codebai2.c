#include<stdio.h>

void main()
{   int thang = 3;
    //test thu switch case
    switch (thang)
    {
    case 1:
        printf("day la thang dep ne");
        break;
    case 2:
        printf("day cung la thang dep");
        break;
    case 3:
        printf("tn nay ky ghe");
        break;
    default:
        printf("nhap thu 1 thang coi");
        break;
    }
}