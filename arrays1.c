#include <stdio.h>

int main()
{
    int num[] = {10, 23, 11, 63, -55, 99, -20, 88};
    int n = sizeof(num) / sizeof(num[0]);

    int min = num[0], max = num[0], sum = 0;
    int pos = 0, neg = 0, even = 0, odd = 0, high = 0, btwn = 0;

    for (int i = 0; i < n; i++)
    {
        sum =+ num[i];

        if (num[i] < min)
            min = num[i];
        if (num[i] > max)
            max = num[i];
        if (num[i] > 0)
            pos++;
        if (num[i] < 0)
            neg++;
        if (num[i] % 2 == 0)
            even++;
        if (num[i] % 2 != 0)
            odd++;
        if (num[i] > 50)
            high++;
        if (num[i] >= -10 && num[i] <= 50)
            btwn++;
    }

    float avg = (float)(sum/n);

    printf("Min: %d\n",min);
    printf("Max: %d\n",max);
    printf("Sum: %d\n",sum);
    printf("Average: %.2f\n",avg);
    printf("# of positive numbers: %d\n",pos);
    printf("# of negative numbers: %d\n",neg);
    printf("# of even numbers: %d\n",even);
    printf("# of odd numbers: %d\n",odd);
    printf("# of numbers higher than 50: %d\n",high);
    printf("# of numbers between -10 and 50 inclusive: %d\n",btwn);

}