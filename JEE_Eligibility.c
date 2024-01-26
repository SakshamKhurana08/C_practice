#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],m1,m2;
    for (int i=1;i<=n;i++)
    {
        printf("Enter mains marks for student %d: ", i);
        scanf("%d",&m1);
        printf("Enter advanced marks for student %d: ", i);
        scanf("%d",&m2);
        a[i]=m1+m2;
    }
    for(int i=1;i<=n;i++)
    {
        if (a[i]>=180)
        {
            printf("Student %d qualified for level 4\n",i);
        }
        else
        {
            printf("Student %d qualified for level 3\n",i);
        }
    }
    return 0;
}
