#include<stdio.h>
#include<conio.h>

struct book
{
        char title[100],author[05],publication[50];
        float price;
};void book(struct books);

void main()
{
        struct book b[200];
        int i,n;
        printf("Enter a Book Count:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("Enter Data of Book %d\n",i+1);
            printf("Title:");
            scanf("%s",b[i].title);
            printf("Author:");
            scanf("%s",b[i].author);
            printf("Publication:");
            scanf("%s",b[i].publication);
            printf("Price:");
            scanf("%f",&b[i].price);
        }
        for(i=0;i<n;i++)
        {
           printf("\t\t\t\tBook %d\n",i+1);
           printf("Title: %s",b[i].title);
           printf("\nAuthor: %s",b[i].author);
           printf("\nPublication: %s",b[i].publication);
           printf("\nPrice: %0.2f",b[i].price);
        }
        return 0;
}
    