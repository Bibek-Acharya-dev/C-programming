#include<stdio.h>
struct book
{
    char book_name[100];
    int price;
    char author_name[30];
}b[2];
void main()
{
    int i;
    printf("enter book_name , price and author_name");
    for(i=0;i<2;i++)
    {
        scanf("%s%d%s",b[i].book_name,&b[i].price,b[i].author_name);
    }
    printf("output\n");
    for(i=0;i<2;i++)
    {
        if(b[i].price>1000)
        {
            printf("book_name = %s , price = %d, author_name = %s",b[i].book_name,b[i].price,b[i].author_name);
        }
    }
}