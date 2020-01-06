#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company x = XEROX, y = GOOGLE, z = EBAY;

    printf("Output: \n%d\n%d\n%d", x, y, z);

    return 0;
}
