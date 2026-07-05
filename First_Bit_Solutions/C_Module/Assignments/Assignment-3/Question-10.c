void main()
{
    int n = 4567976;
    int first,last,sum;

    last = n%10;

    while(n>=10)
    {
        n=n/10;
    }
    first=n;
    sum = first+last;

    printf("Sum of first digit '%d' and last digit '%d'= %d", first,last,sum);
}             