// Include files 
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char* buildPunnetSquare(char gene1[], char gene2[], int length);
char checkLetters(string gene, int length);
void convertToCSV(char*  buildPunnetSquare);

// Main function 
int main(int argc, string argv[])
{
    // Set loop 
    while (true)
    {
        string gene1, gene2;
        int length;

        // Print out a welcome message for the program
        printf("Welcome to the allele calculator and punnet Square generator\n");
        
        // Argument count check
        if (argc != 3)
        {
            printf("Usage: ./allele [gene1] [gene2]\n");
            break;
        }

        // Set the variables for the genes
        gene1 = argv[1];
        gene2 = argv[2];
        length = strlen(gene1);

        // Make sure they enter the same length of characters
        if (strlen(gene1) != strlen(gene2))
        {
            printf("Please ensure that both genes are the same length\n");
            break;
        }

        // Make sure that the the length is no more the 4 characters
        if (length > 4)
        {
            printf("Please ensure that both genes are no more then 4 characters\n");
            break;
        }
        
        // Function to check that the user only entered letters
        if (checkLetters(gene1, length) == 0 || checkLetters(gene2, length) == 0)
        {
            printf("Please ensure that you only enter the letters A, B, C or D\n");
            break;
        }

        // Create the punnet square
        char* punnetSquare = buildPunnetSquare(gene1, gene2, length);
        if (punnetSquare != NULL)
        {
            convertToCSV(punnetSquare);
            free(punnetSquare);
            break;
        }
    }
    return 0;
}

//  Make a function to display a punnet square
char* buildPunnetSquare(char gene1[], char gene2[], int length)
{    
    // Allocate memory for the punnet square string
    char *buildPunnetSquare = malloc(500 * sizeof(char));

    // Memory check
    if (buildPunnetSquare == NULL)
    {
        printf("Error allocating memory\n");
        return NULL;
    }

    // set gene string has for 2 Alleles
    int allelesTwo = 2;

    // Set gene string for 4 alleles4
    int allelesFour = 4;

    // Print the genes at the top of the Punnett square
    if (length == allelesTwo && length == allelesTwo)
    {
        printf("   ");
        for (int i = 0; i < allelesTwo; i++) 
        {
            printf("  %c  ", gene2[i]);
        }
        printf("\n");

        // Print the top border
        printf("  +----+----+\n");

        // Create the rows of the Punnett square
        for (int i = 0; i < allelesTwo; i++) 
        {
            // Print the left side of the Punnett square
            printf("%c | ", gene1[i]);

            for (int j = 0; j < allelesTwo; j++) 
            {
                printf("%c%c | ", gene1[i], gene2[j]);
            }
            printf("\n");

            // Print the middle and bottom border for the Punnett square
            printf("  +----+----+\n");
        }
    }
    if (length == allelesFour && length == allelesFour)
    {
        printf("   ");
        for (int i = 0; i < allelesFour; i++) 
        {
            printf("  %c  ", gene2[i]);
        }
        printf("\n");

        // Print the top border
        printf("  +----+----+----+----+\n");

        // Create the rows of the Punnett square
        for (int i = 0; i < allelesFour; i++) 
        {
            // Print the left side of the Punnett square
            printf("%c | ", gene1[i]);

            for (int j = 0; j < allelesFour; j++) 
            {
                printf("%c%c | ", gene1[i], gene2[j]);
            }
            printf("\n");

            // Print the middle and bottom border for the Punnett square
            printf("  +----+----+----+----+\n");
        }
    }
    return buildPunnetSquare;
}   

// Make a function to convert the Punnett square to a CSV file
void convertToCSV(char*  buildPunnetSquareString)
{
    // Create the CSV file
    FILE *csv;

    // Open the CSV file
    csv = fopen("punnetsquare.csv", "w");

    // Check if the file is empty
    if (csv == NULL)
    {
        printf("Error opening file\n");
        return;
    }

    // Write the Punnett square to the CSV file
    fprintf(csv, "%s", buildPunnetSquareString);
    
    // Close the CSV file
    fclose(csv);

}

// Make a function to check the that the user only entered letters
char checkLetters(string gene, int length)
{
    // Loop to check the letters
    for (int i = 0; i < length; i++)
    {
        if (toupper(gene[i]) != 'A' && 
            toupper(gene[i]) != 'B' && 
            toupper(gene[i]) != 'C' && 
            toupper(gene[i]) != 'D')
        {
            return 0;
        }
    }
    return 1;
}






// // Set array for exit, quit and q
// string quit[] = {"quit", "exit", "q"};

// // Print usage message
// printf("Please enter the allele data (Or type exit, quit or q to quit)\n");

// Print the punnet square
// // Run Check incase the user wants to quit
// if (strcmp(gene1, quit[0]) == 0 || strcmp(gene1, quit[1]) || strcmp(gene1, quit[2]) == 0)
// {
//     printf("Thank you for checking out my program\n");
//     return 0;
//     break;
// }