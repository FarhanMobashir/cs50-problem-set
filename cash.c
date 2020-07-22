#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main (void)

{

    int cash;
    int counter = 0;
    int remain;


    while(true)
    {
        printf("Enter the Cash: ");
        scanf("%d", &cash);
        if (cash > 0)
        {
            break;
        }
        continue;
    }




 while(cash != 0)
 {



    if (cash > 25)
    {

        counter = cash/25;
        cash = cash%25;
        printf("counter of 25$: %d\n",counter);
        printf("remaining cash : %d\n", cash);

}
    else if (cash > 10 && cash < 25 )
    {
         counter = cash/10;
         cash =  cash%10;
         printf("counter 10$: %d\n",counter);
        printf("remaining cash: %d\n", cash);
    }

    else if (cash > 5 && cash < 10 )
    {
         counter = cash/5;
        cash = cash%5;
         printf("counter $5: %d\n",counter);
        printf("remaining cash: %d\n", cash);
    }

    else if (cash > 0 && cash < 5  )
    {
         counter = cash/1;
        cash = cash%1;
         printf("counter 1$: %d\n",counter);
        printf("remaining cash: %d\n", cash);
    }

    continue;
 }
}





