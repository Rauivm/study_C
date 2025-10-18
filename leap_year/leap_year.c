#include <stdio.h>

int leap_year(int year)
{
    if(year%4 == 0 && year%100 !=0)
    {
        return 0;
    }
    else if (year%4 == 0 && year%100 == 0 && year%400 == 0)
    {
        return 0;
    }
    else return 1;
}

int main()
{
    while(1){
        int year = 0;
        printf("Type an year: ");
        scanf("%d",&year);
        if(leap_year(year)==0)
            printf("This is a leap year\n");
        else
            printf("This is not a leap year\n");
    }
    return 0;
}
