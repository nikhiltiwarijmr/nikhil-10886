#include <stdio.h>

int main()
{
    // Variable declarations
    int totalSeconds;
    int hrs, min, sec;
    int hrs2, min2, sec2;
    int forCounter, whileCounter;
    int temp;

    // Step 1: Ask the user to enter total seconds

    printf("=============================================\n");
    printf("         LOOP OPTIMIZATION DEMO              \n");
    printf("   Converting Seconds to Hours:Minutes:Secs  \n");
    printf("=============================================\n\n");
    printf("Enter the total number of seconds: ");

    // Step 2: Read input using scanf

    scanf("%d", &totalSeconds);

    // Step 3: Initialize counter variable

    forCounter = 0;
    temp = totalSeconds;

    // Step 4: Using FOR LOOP for conversion

    printf("\n+------- FOR LOOP CONVERSION -------+\n");

    // Convert to hours (subtract 3600 iteratively)
    hrs = 0;
    for (; temp >= 3600; forCounter++)
    {
        temp = temp - 3600;
        hrs++;
    }

    // Convert to minutes (subtract 60 iteratively)
    min = 0;
    for (; temp >= 60; forCounter++)
    {
        temp = temp - 60;
        min++;
    }

    // Remaining seconds
    sec = temp;

    // Step 5: Print results for FOR loop

    printf("| Hours   : %d\n", hrs);
    printf("| Minutes : %d\n", min);
    printf("| Seconds : %d\n", sec);
    printf("| ---------------------------------\n");
    printf("| Iteration Count: %d\n", forCounter);
    printf("+-----------------------------------+\n");

    // Step 6: Reset counter variable

    whileCounter = 0;
    temp = totalSeconds; // Reset temp to original value

    // Step 7: Using WHILE LOOP for conversion

    printf("\n+------ WHILE LOOP CONVERSION ------+\n");

    // Convert to hours (subtract 3600 iteratively)
    hrs2 = 0;
    while (temp >= 3600)
    {
        temp = temp - 3600;
        hrs2++;
        whileCounter++;
    }

    // Convert to minutes (subtract 60 iteratively)
    min2 = 0;
    while (temp >= 60)
    {
        temp = temp - 60;
        min2++;
        whileCounter++;
    }

    // Remaining seconds
    sec2 = temp;

    // Step 8: Print results for WHILE loop

    printf("| Hours   : %d\n", hrs2);
    printf("| Minutes : %d\n", min2);
    printf("| Seconds : %d\n", sec2);
    printf("| ---------------------------------\n");
    printf("| Iteration Count: %d\n", whileCounter);
    printf("+-----------------------------------+\n");

    // Step 9: Compare results from both loops

    printf("\n+========= COMPARISON RESULTS =========+\n");

    if (hrs == hrs2 &&
        min == min2 &&
        sec == sec2)
    {
        printf("| Conversion Results: MATCH          |\n");
    }
    else
    {
        printf("| Conversion Results: MISMATCH       |\n");
    }

    if (forCounter == whileCounter)
    {
        printf("| Iteration Counts : MATCH           |\n");
    }
    else
    {
        printf("| Iteration Counts : MISMATCH       |\n");
    }

    printf("+--------------------------------------+\n");
    printf("| FOR Loop Iterations  : %d\n", forCounter);
    printf("| WHILE Loop Iterations: %d\n", whileCounter);
    printf("+--------------------------------------+\n");
    printf("| Final Result: %d seconds = \n", totalSeconds);
    printf("|    %d hours, %d minutes, %d seconds\n",
           hrs, min, sec);
    printf("+======================================+\n");

    // Step 10: End the program

    printf("\nProgram completed successfully!\n");

    return 0;
}