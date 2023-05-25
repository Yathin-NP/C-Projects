#include <stdio.h>

int main()
{

    int date,month;
    printf("Enter the month and date\n");
    scanf("%d %d",&month,&date);

    if(month==12&&date>=22&&date<=31||month==1&&date<=19)
        printf("Sun Sign = Capricorn\n");
    else if(month==1&&date>=20&&date<=31||month==2&&date<=17)
        printf("Sun Sign = Aquarius\n");
    else if(month==2&&date>=18&&date<=29||month==3&&date<=19)
        printf("Sun Sign = Pisces\n");
    else if(month==3&&date>=20&&date<=31||month==4&&date<=19)
        printf("Sun Sign = Aries\n");
    else if(month==4&&date>=20&&date<=30||month==5&&date<=20)
        printf("Sun Sign = Taurus\n");
    else if(month==5&&date>=21&&date<=31||month==6&&date<=20)
        printf("Sun Sign = Gemini\n");
    else if(month==6&&date>=21&&date<=30||month==7&&date<=22)
        printf("Sun Sign = Cancer\n");
    else if(month==7&&date>=23&&date<=31||month==2&&date<=22)
        printf("Sun Sign = Leo\n");
    else if(month==8&&date>=23&&date<=31||month==9&&date<=22)
        printf("Sun Sign = Virgo\n");
    else if(month==9&&date>=23&&date<=30||month==10&&date<=22)
        printf("Sun Sign = Libra\n");
    else if(month==10&&date>=23&&date<=31||month==11&&date<=21)
        printf("Sun Sign = Scorpio\n");
    else if(month==11&&date>=22&&date<=30||month==12&&date<=21)
        printf("Sun Sign = Sagittarius\n");


    return 0;
}
