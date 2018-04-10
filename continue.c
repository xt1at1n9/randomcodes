#include <stdio.h>

int main(void)
{ 
        int i = 0, k = 1;
        char user_input;
        char ans;

        while(k == 1)
        {
                i++;
                printf("%d\n", i);

                if (i % 3 == 0)
                {
                        printf("Do you want to continue? (y/n/Y/N): ");
                        scanf(" %c",&user_input); // Keep the whitespace in front of the %c format specifier -- it's important!
                        getchar(); // Consume the newline character left in the buffer by scanf()

                        // Check if user input is already capitalized
                        if (user_input >= 65 && user_input <= 90)
                                // If it is, keep it capitalized
                                ans = user_input;
                        else
                                // If it isn't, capitalize it
                                ans = toupper(user_input);

                        if (ans=='Y')
                        {
                                // Allow the loop to continue
                                continue;
                        }
                        else if (ans == 'N')
                        {
                                // Inform the user that execution is ending
                                printf("Exiting loop... ending program.\n");
                                // Exit the loop
                                break;
                        }
                        else
                        {
                            // Inform the user that the input was not recognized (if not y/n/Y/N...)    
                            printf("User input not recognized... please provide input again.\n");
                                // Decrement 'i' so that the user is forced to provide input again...
                                i--;
                                // Allow the loop to continue
                                continue;
                        }
                }
        }
}