// Include files 
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void buildPunnetSquare(char gene1[], char gene2[], int length);

// Main function 
int main(int argc, string argv[])
{
    string gene1, gene2;
    int length;


    
    // Set loop 
    while (true)
    {
        // Print out a welcome message for the program
        printf("Welcome to the allele calculator and punnet Square generator\n");
        // Argument count check
        if (argc != 3)
        {
            printf("Usage: ./allele [gene1] [gene2]\n");
            return 1;
        }

        // Set the variables for the genes
        gene1 = argv[1];
        gene2 = argv[2];
        length = strlen(gene1);

        // // Set array for exit, quit and q
        // string quit[] = {"quit", "exit", "q"};

        // // Print usage message
        // printf("Please enter the allele data (Or type exit, quit or q to quit)\n");

        // Print the punnet square
        buildPunnetSquare(gene1, gene2, length); 
        
        // // Run Check incase the user wants to quit
        // if (strcmp(gene1, quit[0]) == 0 || strcmp(gene1, quit[1]) || strcmp(gene1, quit[2]) == 0)
        // {
        //     printf("Thank you for checking out my program\n");
        //     return 0;
        //     break;
        // }

        // Make sure they enter the same length of characters
        if (strlen(gene1) != strlen(gene2))
        {
            printf("Please ensure that both genes are the same length\n");
            return 1;
            continue;
        }

        // Use this for the check letters function
        // printf("Please ensure that you only enter the letters A, B, C or D\n");

        // Make sure that the the length is no more the 4 characters
        if (length > 4)
        {
            printf("Please ensure that both genes are no more then 4 characters\n");
            return 1;
            continue;
        }
    }
}

//  Make a function to display a punnet square
void buildPunnetSquare(char gene1[], char gene2[], int length)
{
    // Set variable for the punnet square
    int punnetSquare = strlen(gene1);

    // Make top the boarder 
    printf("+");
    for (int i = 0; i < punnetSquare; i++)
    {
        printf("----+");
    }
    printf("\n");

    // Create the rows of the punnet square
    for (int i = 0; i < punnetSquare; i++)
    {
        // Create the left boarder of the punnet square
        printf("| ");
        for (int j = 0; j < punnetSquare; j++)
        {
            printf("%c%c | ", gene1[i], gene2[j]);
        }
        printf("\n");

        // Make the middle and bottom boarder for the punnet square 
        printf("+");
        for (int k = 0; k < punnetSquare; k++)
        {
            printf("----+");
        }
        printf("\n");

    }

}   

// Make a function to calculate the alleles



// Make a function to check the that the user only entered letters

int checkLetters(string gene, int length)
{
    // Loop to check the letters
    for (int i = 0; i < length; i++)
    {
        if (toupper(gene[i]) != 'A' && 
            toupper(gene[i]) != 'a' && 
            toupper(gene[i]) != 'B' && 
            toupper(gene[i]) != 'b' && 
            toupper(gene[i]) != 'C' && 
            toupper(gene[i]) != 'c' && 
            toupper(gene[i]) != 'D' && 
            toupper(gene[i]) != 'd')
        {
            return 0;
        }
    }
    return 1;
}
