main()
{
    int x,y,z;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("x=%d\ny=%d",x,y);
    getch();
}
