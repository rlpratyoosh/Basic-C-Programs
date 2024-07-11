#include <stdio.h>
#include <stdlib.h>

/*
You manage a travel agencye and you want your n drivers to input their following details,
1. Name
2. Dl Number
3. Route
4. Travel distance
Program should be able to take n as input, and your drivers would input their details one by one,
your program should print the details of the drivers.
*/

struct driverData
{
    char name[20];
    char dlid[20];
    char route[50];
    int kms;
};


int main()
{
    int n;
    printf("Enter the nunber of drivers:\n");
    scanf("%d", &n);
    struct driverData driver[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the data of the driver %d\n", i+1);
        printf("Enter the name of the driver:\n");
        scanf("%s", driver[i].name);
        printf("Enter the Driving License Number of the driver:\n");
        scanf("%s", driver[i].dlid);
        printf("Enter the route of the driver:\n");
        scanf("%s", driver[i].route);
        printf("Enter the distance travelled by the driver:\n");
        scanf("%d", &driver[i].kms);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Details of driver %d:\n", i+1);
        printf("Name of the driver is %s\n", driver[i].name);
        printf("Driving License Number of the driver is %s\n", driver[i].dlid);
        printf("Route of the driver is %s\n", driver[i].route);
        printf("Distance travelled by the driver is %d kms \n", driver[i].kms);
    }
    
    free(driver);
    
    return 0;
}