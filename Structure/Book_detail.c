/* WAP to Enter detail of books - 
    Author , Book Title , Book Price   */


    #include<stdio.h>
        struct Book
        {
            char author[10];
            char title[10];
            float price; 
        };
    int main (){
        struct Book book[5];

        printf("Enter Book Detail - \n");
            for(int i=0; i<5; i++){
                scanf("%s%s%f",&book[i].author,&book[i].title,&book[i].price);
            }
        printf("\nDetail of Books are : \n ");

        for(int i=0; i<5; i++)
        {
            printf("\nBook %d\nAuthor : %s\nBook Name(Title) : %s\nBook Price : %.2f",(i+1),book[i].author,book[i].title,book[i].price);
        }    

        return 0;
    }