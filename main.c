#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limited_mode(int max_attempts){
    int a;
    int guess = rand()%100+1;

        while(1){
            if (max_attempts == 0){
                printf("You ran out of attempts.\n");
                printf("The number was %d\n",guess);
                break;
            }

            printf("Enter your guess:");
            scanf("%d",&a);
        
            if (a>guess){
                printf("Too high.\n");
                max_attempts--;
            }
            else if (a<guess){
                printf("Too low.\n");
                max_attempts--;
            }
            else{
                printf("Yeaay! You guessed the right number.\n");
                break;
            }
        }
}

int main(){
    srand(time(NULL));
    char diffi,wish;
    int guess,a;
    int attempts=0,round=0,i,round_data[100];
    
    printf("Difficulties:\n1.Endless(I)\n2.Easy(E)\n3.Medium(M)\n4.Hard(H)\n");
    printf("Enter the difficulty:");
    scanf(" %c",&diffi);

    if (diffi >= 'a' && diffi <= 'z'){
            diffi -= 32;
        }
    
    //Endless run Loop
    if (diffi == 'I'){

        while(1){
            int r_attempt=0;
            guess = rand()%100 + 1;

            while (1){
                printf("Enter your guess:");
                scanf("%d",&a);

                r_attempt++;
                attempts++;
        
                if (a>guess){
                    printf("Too high.\n");
                }
                else if (a<guess){
                    printf("Too low.\n");
                }
                else{
                    printf("Yeaay! You guessed the right number.\n");
                    printf("Attempts taken this round:%d\n",r_attempt);
                    break;
                }
            }
            
            round_data[round]= r_attempt;
            round++;

            printf("Do you wish to Continue type Y for yes N for no:");
            scanf(" %c",&wish);

            if (wish == 'Y'){
                continue;
            }
            else{
                printf("You Played %d rounds.\n",round);
                printf("Total Attempts:%d\n",attempts);
                for (i=0;i<round;i++){
                    printf("Attempts in round%d:%d\n",i+1,round_data[i]);
                }
                break;
            }
        }
    }
    
    else if (diffi == 'E'){
        limited_mode(8);
    }

    else if (diffi == 'M'){
        limited_mode(5);
    }

    else if (diffi == 'H'){
        limited_mode(3);
    }

    else{
        printf("invalid input\nProgram Terminated.");
    }

    return 0;
}