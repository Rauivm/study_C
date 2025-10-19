#include <stdio.h>

int seconds_in_hours_minutes_seconds(int seconds){

    int hours = seconds/3600;
    int minutes = (seconds%3600)/60;
    int s = seconds%60;
    printf("%02d:%02d:%02d\n",hours,minutes,s);

}

int main()
{
    while(1){
        int seconds = 0;
        printf("How many seconds do you want to convert in HH:MM:ss? ");
        scanf("%d",&seconds);
        seconds_in_hours_minutes_seconds(seconds);
    }

    return 0;

}
