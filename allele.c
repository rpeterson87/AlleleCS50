// Include files 
#include <cs50.h>
#include <stdio.h>
#include <string.h>

void buildPunnetSquare(char gene1[], char gene2[], int length);

// Main function 
int main(int argc, string argv[])
{
    string gene1, gene2;
    int length;

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

    // Set array for exit, quit and q
    string quit[] = {"quit", "exit", "q"};

    // Print the punnet square
    buildPunnetSquare(gene1, gene2, length); 
    
    // // Set loop 
    // while (true)
    // {
    //     string parent1 = get_string("Enter alleles for parent 1 (e.g., 'Aa'): ");
    //     string parent2 = get_string("Enter alleles for parent 2 (e.g., 'Aa'): ");
    //     // Print out a welcome message for the program
    //     printf("Welcome to the allele calculator and punnet Square generator\n");

    //     // Print usage message
    //     printf("Please enter the allele data (Or type exit, quit or q to quit)\n");

        
    //     // Run Check incase the user wants to quit
    //     if (strcmp(gene1, quit[0]) == 0 || strcmp(gene1, quit[1]) || strcmp(gene1, quit[2]) == 0)
    //     {
    //         printf("Thank you for checking out my program\n");
    //         return 0;
    //         break;
    //     }

    //     // Make sure they enter the same length of characters
    //     if (strlen(gene1) != strlen(gene2))
    //     {
    //         printf("Please ensure that both genes are the same length\n");
    //         return 1;
    //         continue;
    //     }

    //     // Make sure that the the length is no more the 4 characters
    //     if (length > 4)
    //     {
    //         printf("Please ensure that both genes are no more then 4 characters\n");
    //         return 1;
    //         continue;
    //     }

    //     // ensure that the user only enters the letters.
    //     for (int i = 0; i < length; i++)
    //     {
    //         if (gene1[i] != 'A' && gene1[i] != 'a' && gene1[i] != 'B' && gene1[i] != 'b' && gene1[i] != 'C' && gene1[i] != 'c' && gene1[i] != 'D' && gene1[i] != 'd')
    //         {
    //             printf("Please ensure that you only enter the letters A, B, C or D\n");
    //             return 1;
    //             continue;
    //         }
    //     }



    // }
}

//  Make a function to display a punnet square
void buildPunnetSquare(char gene1[], char gene2[], int length)
{
    // Set variable for the punnet square
    int punnetSquare = strlen(gene1);

    // Make the boarder 
    printf("+");
    for (int i = 0; i < punnetSquare; i++)
    {
        printf("---+");
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

    }

    // Set bottom Border 
    printf("+");
    for (int i = 0; i < punnetSquare; i++)
    {
        printf("---+");
    }
    printf("\n");
}   
