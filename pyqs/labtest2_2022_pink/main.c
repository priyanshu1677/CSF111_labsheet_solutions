#include "WeatherDetails.h"

int main()
{
    int day;
    printf("Enter number of days for weather report:");
    scanf("%d", &day);
    struct weather * wthr = readWeatherInfo(day);

    printWeatherInfo(wthr,day);

    struct WeatherLinkedList * wthrSLL = createWeatherSLL(wthr, day); // task -3
    printf("The Linked List is:\n");

    printWeatherSLL(wthrSLL);
    printf("NULL.\n");

    printStats(wthrSLL);


    printf("End of all exectuion\n");

    return 0;
}

