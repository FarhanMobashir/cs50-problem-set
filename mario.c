#include <stdio.h>
#include <stdbool.h>

int main(void)

{

    int height;
    bool status = true;
    while(status) {
        printf("Enter the height: ");
        scanf("%d", &height);
        if ( height <= 8 && height>0) {
            break;
        }else {
            continue;
        }
    }




    for (int i = 0; i < height; i++)
    {
        for (int k = height ; k > i; k--){
            printf(" ");
        }
        for (int j = 0 ; j <= i; j++)
            {

            printf("#");


            }
        printf("\n");
    }

}




