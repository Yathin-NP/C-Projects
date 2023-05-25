#include <stdio.h>

int main()
{
    char *mess[] = {
                    "Hammer and tongs",
                    "Tooth and nail",
                    "Spit and polish",
                    "You and c"};

    printf("%d\n",sizeof(mess));

    char mes[4][10] = {
        "Hammer and tongs",
        "Tooth and nail",
        "Spit and polish",
        "You and c"
    };

    printf("%d\n",sizeof(mes));

    return 0;
}
