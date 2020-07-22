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

    for (int m = 0; m < 8; m++)
    {
       for(int i = 8; i >= m; i--)
       {
           printf(" ");
       }
       for( int j = 0; j <= m; j++)
       {
           printf("#");
       }

       for(int k = 0; k < 1 ; k++)
       {
          printf("  ");
       }
       for(int x = 0; x <= m; x++)
       {
           printf("#");
       }
        printf("\n");
    }
}
