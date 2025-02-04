/* WAP to Enter detail of books - 
    Author , Book Title , Book Price  
    and print Detail of Book with highest price as well as lowest price  */


    #include<stdio.h>

// Structure -
        struct Book
        {
            char author[10]; 
            char title[10];
            float price; 
        };
// Main Function -
    int main (){
        struct Book book[5];

        printf("Enter Book Detail - \n");
            for(int i=0; i<5; i++)
            {
                scanf("%s%s%f",&book[i].author,&book[i].title,&book[i].price);
            }

        // Maximum Price
        
        int max = 0 ;  
            for(int i=0; i<5; i++)
            {
                if( book[max].price < book[i].price )
                {
                    max = i ;
                }
            }
            printf("\n\n");
            printf("Detail of Book with maximum price : \n");
            printf("Author : %s\tTitle : %s\tPrice : %.2f",book[max].author,book[max].title,book[max].price);

        int min = 0 ;  
            for(int i=0; i<5; i++)
            {
                if( book[min].price > book[i].price )
                {
                    min = i ;
                }
            }
            printf("\n\n");
            printf("Detail of Book with minimum price : \n");
            printf("Author : %s\tTitle : %s\tPrice : %.2f",book[min].author,book[min].title,book[min].price);
            
        return 0;
    }
