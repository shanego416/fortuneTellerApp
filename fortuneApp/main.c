//
//  main.c
//  fortuneApp
//
//  Created by Shane Gouldson on 2022-02-19.
//

#include <stdio.h>

int colour, number, answer;


int main()
{
        printf("\nWelcome to the fortune teller console App\n\n");
        
    do
    {
        printf("\nPick a number: 1, 2, 3, or 4.\n>");
        scanf(" %d", &number);
        
// Direct user for number answer to colour
        switch (number)
        {
            case 1:
                printf("\nYou picked 1, great choice! Now pick a colour:\n");
                printf("1. Red\n");
                printf("2. Green\n>");
                scanf(" %d", &colour);
                if (colour == 1)
                    printf("\nYou picked Red!\n\nYour fortune: You will receive an unexpected windfall of wealth!\n");
                if (colour == 2)
                    printf("\nYou picked Green!\n\nYour fortune: The rain will stop and the sun will shine again!\n");
                break;
            case 2:
                printf("\nYou picked 2, great choice! Now pick a colour:\n");
                printf("1. Yellow\n");
                printf("2. Blue\n>");
                scanf(" %d", &colour);
                if (colour == 1)
                    printf("\nYou picked Yellow!\n\nYour fortune: Keep an eye out for an unlikely new friend!\n");
                if (colour == 2)
                    printf("\nYou picked Blue!\n\nYour fortune: All of your recent hard work will soon pay off!\n");
                break;
            case 3:
                printf("\nYou picked 3, great choice! Now pick a colour:\n");
                printf("1. Red\n");
                printf("2. Green\n>");
                scanf(" %d", &colour);
                if (colour == 1)
                    printf("\nYou picked Red!\n\nYour fortune: You will receive an unexpected windfall of wealth!\n");
                if (colour == 2)
                    printf("\nYou picked Green!\n\nYour fortune: The rain will stop and the sun will shine again!\n");
                break;
            case 4:
                printf("\nYou picked 4, great choice! Now pick a colour:\n");
                printf("1. Yellow\n");
                printf("2. Blue\n>");
                scanf(" %d", &colour);
                if (colour == 1)
                    printf("\nYou picked Yellow!\n\nYour fortune: Keep an eye out for an unlikely new friend!\n");
                if (colour == 2)
                    printf("\nYou picked Blue!\n\nYour fortune: All of your recent hard work will soon pay off!\n");
                break;
            default:
                printf("\nInvalid Input\n");
                break;
        }
        printf("\nWould you like to go again?\n");
        printf("1. Yes\n");
        printf("2. No\n>");
        scanf("%d", &answer);
    }
    while(answer != 2);
    
    return 0;
}
