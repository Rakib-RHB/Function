int max(int a, int b)
{
    int r;
    if (a > b)
        r = a;
    else
        r = b;
    return r;
}
main()
{
    int p;
    p = max(3,4);
    printf("%d\n",p);
}

