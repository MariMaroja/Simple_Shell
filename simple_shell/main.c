#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // Infinite loop to keep the shell running
    while (1)
    {
        // Display shell prompt
        printf("My shell> ");
        // Buffers for user input and command verification
        char input[100];
        char verify[120];
        // Pointer used for tokenizing the input
        char *token;
        // Read user input from keyboard
        fgets(input, sizeof(input), stdin);
        // Remove the newline character '\n' from the input
        input[strcspn(input, "\n")] = 0;
        // Split the input string into tokens separated by spaces
        token = strtok(input, " ");
        // Get the first argument after the command
        token = strtok(NULL, " ");
        printf("Argument: %s\n", token);
        // Get the second argument
        token = strtok(NULL, " ");
        printf("Argument2: %s\n", token);
        // Print the modified input string
        printf("You entered: %s", input);
        
        // Check if the command is "help"
        if (strcmp(input, "help\n") == 0)
        {
            printf("Available commands:\n");
            printf("help\n");
            printf("exit\n");
            printf("clear\n");
        }
        // Check if the command is "exit"
        else if (strcmp(input, "exit\n") == 0)
        {
            printf("Exiting shell...\n");
            break; // Exit the loop and terminate the program
        }
        // Check if the command is "clear"
        else if (strcmp(input, "clear\n") == 0)
        {
            // Clear the terminal screen
            system("clear");
        }
        // Handle external commands
        else
        {
            // Create a command to verify if the program exists
            sprintf(verify, "where %s > nul 2>&1", input);
            // Execute verification command
            if (system(verify) == 0)
            {
                // If command exists, execute it
                system(input);
            }
            else
            {
                // If command is not found
                printf("Command '%s' is not recognized.\n", input);
            }
        }
    }
    
}
