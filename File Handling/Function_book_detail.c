/*   Write a C program that creates a text file and stores structures 
    (e.g., storing details of books with title, author, and price). 
    Implement functions to write data into the text file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure -
struct Book {
    char title[100];
    char author[50];
    float price;
};

// Function used to write book details to a text file -
void write_to_file(struct Book book, char* filename) {
    FILE* fp = fopen(filename, "a"); 

    if (fp == NULL) 
    {
        printf("Error opening file.\n");
        exit(1);
    }

    fprintf(fp, "%s\n", book.title);
    fprintf(fp, "%s\n", book.author);
    fprintf(fp, "%.2f\n", book.price);

    fclose(fp);
}

int main() {
    struct Book book1 = {"Akbar and Birbal Stories", "S.Khan", 99.50};
    struct Book book2 = {"Cinderella.", "Kane James", 89.00};

    write_to_file(book1, "books.txt");
    write_to_file(book2, "books.txt");

    printf("Task Complete \n");

    return 0;
}