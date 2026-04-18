#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    printf("------------\n|  welcome |\n------------\n\n---");
    
    printf("------------\n| D.eSystem 5 |\n---------------\n");
    
    
    printf("---------------------\n| Type 2 to cotinue |\n---------------------\n");
    int setup;
    scanf("%d", &setup);
    if (setup == 2) {
        printf("---------------\n| Welcome in  |\n| D.eSystem 5 |\n---------------\n");
    } else { printf("---------------\n|Unknown input|\n---------------\n");
    }
    int a = 1;
    //printf( "%d \n", a );
    printf("----------------------------------\n| Type a name for your account!! |\n----------------------------------\n");
    char account[50];
    scanf("%49s", account);
    printf("------------------------\n");
    printf("|   Your account is    |\n");
    printf("| %-21s|\n", account);
    printf("|                      |\n");
    printf("------------------------\n");
    //create account/*
    printf("-----------------------------------\n");
    printf("|Do you want to create a password?|\n");
    printf("|   If yes type 1, else type 2    |\n");
    printf("-----------------------------------\n");
    // Password sellection
    int option_setup;
    scanf("%d", &option_setup);
    int cmd = 0; 
    int mode = 0;
    if (option_setup == 1) {
        printf("---------------------\n");
        printf("| Create a password |\n");
        printf("---------------------\n");
        char password[50];
        scanf("%49s", password);
        //int mode = 0;
        
    //Create password
        
    }else { printf("---------------------------\n| You created no password |\n---------------------------\n\n");
    //Setup (D.eSystem)
    
    //Kernel(D.Core 3)/*
    }
    while(1) {
        if (mode == 0) {
            //int cmd = 0;
            printf("----------------------------------------\n");
            printf("| 1: shutdown                          |\n");
            printf("| 2: calculator                        |\n");
            printf("| 3: news                              |\n");
            printf("| 4: max                               |\n");
            printf("| 5: clock                             |\n");
            printf("| 6: calendar                          |\n");
            printf("| 7: D.eSystem version                 |\n");
            printf("| 8: D.Note                            |\n");
            printf("| 9: lockscreen                        |\n");
            printf("| 10: sports                           |\n");
            printf("| 11: game                             |\n");
            printf("| 12: stresstest                       |\n");
            printf("| 13:thundercalculator                 |\n");
            printf("----------------------------------------\n");
            scanf("%d", &cmd);

            if (cmd == 1) {
                 mode = 1;

            
            }

            if (cmd == 2) {
                mode = 2;
            }

            if (cmd == 3) {
                mode = 3;
            }
            if (cmd == 4) {
                mode = 4;
            }
            if (cmd == 5) {
                mode = 5;
            }
            if (cmd == 6) {
                mode = 6;
            }


            {
                /* code */
            }
            
            
            
        }

        if (mode == 1) {

            printf("-----------------------------------------\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|            Shutting down...           |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("-----------------------------------------\n");

            break;
            // shutdown

            


        }



        if (mode == 4) {
            int cmdmax1 = 0;
            printf("---------------------------------------------\n");
            printf("|                    Max                    |\n");
            printf("|Choose an option with one of these numbers!|\n");
            printf("|                                           |\n");
            printf("| 1: Chat with Max                          |\n");
            printf("| 2: help                                   |\n");
            printf("| 3: home                                   |\n");
            printf("---------------------------------------------\n");
            scanf("%d", &cmdmax1);

            if (cmdmax1 == 1) {
                char maxchatcmd[50];

                printf("-------------------------------------\n");
                printf("|                Max                |\n");
                printf("|                                   |\n");
                printf("|       What can I do for you       |\n");
                printf("|                                   |\n");
                printf("|   Type home to close this app!!   |\n");
                printf("-------------------------------------\n");

                getchar();
                fgets(maxchatcmd, 50, stdin);

                maxchatcmd[strcspn(maxchatcmd, "\n")] = 0;

                if (strcmp(maxchatcmd, "hi") == 0) {
                    printf("--------------------\n");
                    printf("|  hello friend    |\n");
                    printf("--------------------\n");

                    


                } else if (strcmp(maxchatcmd, "Who are you") == 0) {

                    printf("--------------------------\n");
                    printf("| I am Max, the chatbot  |\n");
                    printf("| from D.eSystem 5.      |\n");
                    printf("--------------------------\n");

                } else if (strcmp(maxchatcmd, "How old are you") == 0) {

                    printf("------------------------------------\n");
                    printf("| I was introduced in december 2024|\n");
                    printf("------------------------------------\n");
                } else if (strcmp(maxchatcmd, "What is this") == 0) {

                    printf("-----------------------\n");
                    printf("| This is D.eSystem 5 |\n");
                    printf("-----------------------\n");

                } else if (strcmp(maxchatcmd, "What is the best OS") == 0) {

                    printf("------------------------\n");
                    printf("| Its D.eSystem 5      |\n");
                    printf("------------------------\n");

                } else if (strcmp(maxchatcmd, "be funny") == 0) {

                    printf("------------------------\n");
                    printf("| hahahahahahahahahaha |\n");
                    printf("------------------------\n");
                }
                {
                    /* code */
                }
                

                char contine = 'g';

                printf("-----------------------------------------\n");
                printf("|       Type 1 thing to continue        |\n");
                printf("-----------------------------------------\n");

                scanf( "%c", &contine);



            
                
            } else if (cmdmax1 == 3) {


                mode = 0;

            } else if (cmdmax1 == 2) {

                printf("----------------------------------------------------------\n");
                printf("| You can type: hi, Who are you, How old are you,        |\n");
                printf("| What is this, What is the best OS, be funny            |\n");
                printf("----------------------------------------------------------\n");

            } else {

                printf("-------------------------------------\n");
                printf("|         Unknown command!!         |\n");
                printf("-------------------------------------\n");

                char contine = 'g';
                printf("-----------------------------------------\n");
                printf("|       Type 1 thing to continue        |\n");
                printf("-----------------------------------------\n");

                scanf ( "%c", contine);

            }


            if (cmdmax1 == 2) {

                printf("---------------------------------------------\n");
                printf("|                                           |\n");
                printf("| You can chat to max:                      |\n");
                printf("| I write it later\n");
                printf("---------------------------------------------\n");

                char contine = 'g';

                printf("-----------------------------------------\n");
                printf("|       Type 1 thing to continue        |\n");
                printf("-----------------------------------------\n");
                scanf (" %c", &contine);



            }

            if (cmdmax1 == 3)
            {
                mode = 0;
            }
            
        }


        if (mode == 3) {

            int cmdnews = 0;

            printf("--------------------------------------\n");
            printf("|               D.News               |\n");
            printf("| 1: news                            |\n");
            printf("| 2: home                            |\n");
            printf("--------------------------------------\n");

            scanf("%d", &cmdnews);

            if (cmdnews == 1) {
                printf("--------------------------------------\n");
                printf("|               D.News               |\n");
                printf("| D.eSystem 4 came out and it is     |\n");
                printf("| the first D.eSystem which uses C.  |\n");
                printf("|                                    |\n");
                printf("| There is a big leak that           |\n");
                printf("| D.eSystem 4 was the last Python    |\n");
                printf("| based D.eSystem.                   |\n");
                printf("--------------------------------------\n");

                char contine = 'g';
                printf("-----------------------------------------\n");
                printf("|       Type 1 thing to continue        |\n");
                printf("-----------------------------------------\n");
                scanf (" %c", &contine);


                




            } else if (cmdnews == 2) {
                mode = 0;
            } else {
                printf("-------------------------------------\n");
                printf("|         Unknown command!!         |\n");
                printf("-------------------------------------\n");

                char contine = 'g';

                printf("-----------------------------------------\n");
                printf("|       Type 1 thing to continue        |\n");
                printf("-----------------------------------------\n");
                scanf (" %c", contine);

            }





            if(cmdnews == 2){
                mode = 0;
            }

            

        }

        if (mode == 2) {
            int cmdcalculator = 0;
            printf("-----------------------------------------------\n");
            printf("|Choose an operator with one of these numbers!|\n");
            printf("| 1: +                                        |\n");
            printf("| 2: -                                        |\n");
            printf("| 3: *                                        |\n");
            printf("| 4: /                                        |\n");
            printf("| 5: home                                     |\n");
            printf("-----------------------------------------------\n");
            scanf("%d", &cmdcalculator);
            //Launch App (Calculator)

            if (cmdcalculator == 4) {
                double num1calculator = 0.0;
                printf("---------------------------------------\n");
                printf("|                                     |\n");
                printf("|      Type  your first number!!      |\n");
                printf("|                                     |\n");
                printf("---------------------------------------\n");
                scanf("%lf", &num1calculator);
                double num2calculator = 0.0;

                printf("---------------------------------------\n");
                printf("|                                     |\n");
                printf("|     Type  your second number!!      |\n");
                printf("|                                     |\n");
                printf("---------------------------------------\n");
                scanf("%lf", &num2calculator);

                double sum = num1calculator / num2calculator;

                printf("-----------------------------------------\n");
                printf("| sum:                                \n");
                printf("| %lf                                 \n", sum);
                printf("-----------------------------------------\n");

                char continue1calculator = 'g';
                printf("-----------------------------------------\n");
                printf("|       Type 1 thing to continue        |\n");
                printf("-----------------------------------------\n"); 
                scanf(" %c", &continue1calculator);

                //divide

            }

            if (cmdcalculator == 3) {
                double num1calculator = 0.0;
                printf("---------------------------------------\n");
                printf("|                                     |\n");
                printf("|      Type  your first number!!      |\n");
                printf("|                                     |\n");
                printf("---------------------------------------\n");
                scanf("%lf", &num1calculator);
                double num2calculator = 0.0;

                printf("---------------------------------------\n");
                printf("|                                     |\n");
                printf("|     Type  your second number!!      |\n");
                printf("|                                     |\n");
                printf("---------------------------------------\n");
                scanf("%lf", &num2calculator);

                double sum = num1calculator * num2calculator;

                printf("-----------------------------------------\n");
                printf("| sum:                                \n");
                printf("| %lf                                 \n", sum);
                printf("-----------------------------------------\n");

                char continue1calculator = 'g';
                printf("-----------------------------------------\n");
                printf("|       Type 1 thing to continue        |\n");
                printf("-----------------------------------------\n");
                scanf(" %c", &continue1calculator);

                //multiply


                
            }
            if (cmdcalculator == 2){
                double num1calculator = 0.0;
                printf("---------------------------------------\n");
                printf("|                                     |\n");
                printf("|      Type  your first number!!      |\n");
                printf("|                                     |\n");
                printf("---------------------------------------\n");
                scanf("%lf", &num1calculator);
                double num2calculator = 0.0;

                printf("---------------------------------------\n");
                printf("|                                     |\n");
                printf("|      Type your second number!!!     |\n");
                printf("|                                     |\n");
                printf("|                                     |\n");
                printf("---------------------------------------\n");
                scanf("%lf", &num2calculator);

                double sum = num1calculator - num2calculator;
                printf("---------------------------------------\n");
                printf("| sum:                                \n");
                printf("| %lf                                 \n", sum);
                printf("---------------------------------------\n");

                char continue1calculator = 'g';
                printf("-----------------------------------------\n");
                printf("|       Type 1 thing to continue        |\n");
                printf("-----------------------------------------\n");
                scanf(" %c", &continue1calculator);

                //minus



            } 
            if (cmdcalculator == 1) {
                double num1calculator = 0.0;//Plus              

                printf("---------------------------------------\n");
                printf("|                                     |\n");
                printf("|      Type  your first number!!      |\n");
                printf("|                                     |\n");
                printf("|                                     |\n");
                printf("---------------------------------------\n");
                scanf("%lf", &num1calculator);

                if (num1calculator == -143.123456789) {
                    mode = 0;
                } else {

                    double num2calculator = 0.0;

                    printf("---------------------------------------\n");
                    printf("|                                     |\n");
                    printf("|      Type your seccond number!!     |\n");
                    printf("|                                     |\n");
                    printf("|                                     |\n");
                    printf("---------------------------------------\n");

                    scanf("%lf", &num2calculator);

                    double sum = num1calculator + num2calculator;
                    cmdcalculator = 0;

                    printf("---------------------------------------\n");
                    printf("| sum:                                \n");
                    printf("| %lf                                 \n", sum);
                    printf("---------------------------------------\n");

                    char continue1calculator = 'g';

                    printf("-----------------------------------------\n");
                    printf("|       Type 1 thing to continue        |\n");
                    printf("-----------------------------------------\n");
                    scanf(" %c", &continue1calculator);

                    //plus




                }
            



            }

            if (cmdcalculator == 5) {

                mode = 0;
            }
            //Calculator
            
        }


        


        
        
    }
    
    
    

    return 0;
}
//D.eSystem 5 (C)/*