/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int biCount[4];
int biInput[2];
int currentIndex = 1;

int main()
{
    while (1 == 1) {
        printf(": ");
        //FIRST NUMBER
        if (currentIndex == 1) {
            scanf("%i", &biInput[0]);
            
            //END LOOP AND SHOW STATS
            if (biInput[0] != 0 && biInput[0] != 1) {
                printf("\n\n");
                printf("--- STATISTICS ---\n");
                printf("00: %i\n01: %i\n10: %i\n11: %i", biCount[0], biCount[1], biCount[2], biCount[3]);
                
                break;
            } else {
                currentIndex++;
            }
        } else {
            scanf("%i", &biInput[1]);
            
            //END LOOP AND SHOW STATS
            if (biInput[1] != 0 && biInput[1] != 1) {
                printf("You have to enter one more character before ending this program.\n");
                continue;
            } else {
                currentIndex--;
                
                //COUNT
                if (biInput[0] == 0 && biInput[1] == 0) {
                    biCount[0]++;
                } else if (biInput[0] == 0 && biInput[1] == 1) {
                    biCount[1]++;
                } else if (biInput[0] == 1 && biInput[1] == 0) {
                    biCount[2]++;
                } else if (biInput[0] == 1 && biInput[1] == 1) {
                    biCount[3]++;
                }
            }
        }
    }

    return 0;
}
