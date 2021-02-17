#include <stdio.h>


void guessing_game()
{
    // All of the variables that will be used in  this  function
    const int secret_number = 20;
    int user_number;
    int fixed_time = 10;

    // To fill user_number with a  value that was input from the user
    printf("Enter a number : \n");

    scanf("%d", &user_number);

    // To check that the number that was input  is the  same as the secret number
    if (user_number != secret_number)
    {
        while (user_number  != secret_number)
        {


            // To ask  the user again and  again
            printf("Enter a number again : \n");
            scanf("%d", &user_number);

            if (user_number == secret_number)
            {
                break;
            }// To  check that the number that come from the  user is equal to the  secret number



            fixed_time++;



        }
        printf("You won!!\n");

    }

}

// The main function
void main()
{
    guessing_game();

}
