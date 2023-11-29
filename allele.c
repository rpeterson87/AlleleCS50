// Include files 
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void buildPunnetSquare(char gene1[], char gene2[], int length);
char checkLetters(string gene, int length);

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
        buildPunnetSquare(gene1, gene2, length); 
        break;
    }
    return 0;
}

//  Make a function to display a punnet square
void buildPunnetSquare(char gene1[], char gene2[], int length)
{    
    int alleles = length / 2;
    // Put the genes on the top of the punnet square
    printf("   ");
    for (int i = 0; i < alleles; i++)
    {
        printf("  %c%c ", gene1[i], gene2[i + alleles]);
    }
    printf("\n");
    
    // Make top the boarder 
    printf("   +");
    for (int i = 0; i < alleles; i++)
    {
        printf("----+");
    }
    printf("\n");


    // Create the rows of the punnet square
    for (int i = 0; i < alleles; i++)
    {
        // Create the left boarder of the punnet square
        printf("%c%c | ", gene1[i], gene2[i + alleles]);

        for (int j = 0; j < alleles; j++)
        {
            printf("%c%c%c%c | ", gene1[i], gene1[i + alleles], gene2[j], gene2[j + alleles]);
        }
        printf("\n");

        // Make the middle and bottom boarder for the punnet square 
        printf("   +");
        for (int k = 0; k < alleles; k++)
        {
            printf("----+");
        }
        printf("\n");
    }
}   

// Make a function to calculate the alleles
void calculateAlleles()
{
    return;
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