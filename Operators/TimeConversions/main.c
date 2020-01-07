#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutesEntered = 0;
    double days = 0.0, years = 0.0, minutesInYear = 0;

    printf("Please enter a number of minutes: ");
    scanf("%d", &minutesEntered);

    minutesInYear = (60 * 24 * 365);
    years = (minutesEntered / minutesInYear);
    days = (minutesEntered / 60.0) / 24.0;

    printf("%d minutes is approx. %f years and %f days\n", minutesEntered, years, days);

    return 0;
}
