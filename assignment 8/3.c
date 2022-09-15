main()
{
    int x;
    printf("enter the day number of the week:");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("have a nice sunday");
        break;
    case 2:
        printf("have a nice monday");
        break;
    case 3:
        printf("have a nice tuesday");
        break;
    case 4:
        printf("have a nice wednesday");
        break;
    case 5:
        printf("have a nice thursday");
        break;
    case 6:
        printfN("have a nice friday");
        break;
    case 7:
        printf("have a nice saturday");
        break;
    default:
        printf("enter the valid day number between 1 to 7");
    }
    getch();
}
