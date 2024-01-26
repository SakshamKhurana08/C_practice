#include <stdio.h>
#include <string.h>
int main()
{
    char health[100], location[100], gender[50];
    int age;
    printf("Enter person's health condition (excellent/poor): ");
    scanf("%s", health);
    printf("Enter person's age: ");
    scanf("%d", &age);
    printf("Enter person's location (city/village): ");
    scanf("%s", location);
    printf("Enter person's gender (male/female): ");
    scanf("%s", gender);

    if (strcmp(health,"excellent")==0 && age>=25 && age<=35 && strcmp(location,"city")==0)
    {
        if (strcmp(gender,"male")==0)
        {
            printf("Premium rate: Rs.4 per thousand\n");
            printf("Maximum amount of insurance: Rs.200000\n");
        }
        else if(strcmp(gender,"female")==0)
        {
            printf("Premium rate: Rs.3 per thousand\n");
            printf("Maximum amount of insurance: Rs.100000\n");
        }
    }
    else if (strcmp(health,"poor")==0 && age>=25 && age<=35 && strcmp(location,"village")==0 && strcmp(gender,"male")==0)
    {
        printf("Premium rate: Rs.6 per thousand\n");
        printf("Maximum amount of insurance: Rs.10000\n");
    }
    else
    {
        printf("Person should be insured\n");
    }

    return 0;
}
