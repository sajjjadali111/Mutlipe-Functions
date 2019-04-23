void main ()

{

int choice,a,b,s;
printf("\n1. Addition");
printf("\n2. Odd-Even");
printf("\n3. Printing N numbers");
printf("\n\nEnter Your Choice");
scanf("%d",&choice);
switch(choice)
{
    case 1:
        printf("Enter two Number");
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("\nSum is %d",s);
        break;
        case 2:
        printf("Enter a Number");
        scanf("%d",&a);
        if (a%2 ==0)
            printf("Even Number");
        else
            printf("odd Number");
        break;
        case 3:
            printf("Enter a Number");
            scanf("%d",&a);
            for (b=1;b<=a;b++)
                printf("%d",b);
            break;
        default:
            printf("Invalid Choice");
}

getch();


 }


