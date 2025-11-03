int main()
{
    int a, b, c, d;
    scanf ("%d%d%d%d",&a ,&b ,&c ,&d);
    int e = a*60+b;
    int f = c*60+d;
    int g = f-e;
    printf ("%d %d",g/60 ,g%60);
    return 0;
}
