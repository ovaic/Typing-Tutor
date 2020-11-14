//SP19-BCS-BCS-058 (Mansoor Khan)//
//SP19-BCS-BCS-022 (Awais Anwar)//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>



struct record_camp
{

    int stages;
    int staages;

    char name[100];

};
struct record_wpm
{
    char name[50];
    int  counter;
    double accuracy;
};
void modes();
void about_the_game();
void choice();
void scoreboard();
void Leader_board_wpm(struct record_wpm);
void Leader_board_camp(struct record_camp,int,int,int);
void Interface();
struct record_camp Time_Attack(int);
struct record_wpm Words_per_min();
void anyButton();
void save_game(struct record_camp );
int load_game();

int main()
{

    printf("\n\n");
    printf("                      WE ARE THE BILLY BOYS                   \n");
    printf("\n\n\n");
    printf("      ########               ########              ########    \n");
    printf("     ###########           ####   ####            ###########  \n");
    printf("     ###    #####          ####   ####            ###    ##### \n");
    printf("     ###    ####             ########             ###    ####  \n");
    printf("     #########             ########    ##         #########    \n");
    printf("     ###    ####          ####   ###  ###         ###    ####  \n");
    printf("     ###    #####        ####      ####           ###    ##### \n");
    printf("     ###########          ####    ### ###         ###########  \n");
    printf("      ########             #########    ####       ########    \n");
    printf("\n\n");
    printf("      #####    #####    #####     #####      ######    #####   \n");
    printf("      ##       ## ##    ## ##     ##  ##       ##      ##      \n");
    printf("      #####    #####    ## ##     #####        ##      #####   \n");
    printf("         ##    ##       ## ##     ## ##        ##         ##   \n");
    printf("      #####    ##       #####     ##  ##       ##      #####   \n");
    printf("\n\n\n");
    printf("                 PRESS ANY BUTTON TO CONTINUE                   \n");
    printf("\n\n\n");

    getch();

    system("cls");

   Interface();

   return 0;
}

void anyButton()
{
    printf("\n PRESS ANY KEY TO GO BACK TO MAIN MENU \n\n");
    char anybutton;
    anybutton = getche();
    system("cls");
    Interface();
    printf("\b \b");
}
void Interface()
{
    printf("\n\n\n");

    printf("          #         #  ######   #       #######   ######   ##### ##### #######                                \n");
    printf("          #         #  #        #       #         #    #   #    #    # #                                      \n");
    printf("          #    #    #  ######   #       #         #    #   #    #    # #######                                \n");
    printf("          #    #    #  #        #       #         #    #   #         # #                                      \n");
    printf("          ##### #####  ######   ######  #######   ######   #         # #######                                \n");
    printf("                                                                                                           \n");
    printf("                                       #######  #####                                                                \n");
    printf("                                          #     #   #                                                                \n");
    printf("                                          #     #   #                                                                \n");
    printf("                                          #     #   #                                                                \n");
    printf("                                          #     #####                                                                \n");
    printf("                                                                                                           \n");
    printf("    ####### #     # ##### ##### ##    # ######        ####### #    # ####### #####  #####           \n");
    printf("       #     #   #  #   #   #   # #   # #                #    #    #    #    #   #  #   #           \n");
    printf("       #       #    #####   #   #  #  # #  #####         #    #    #    #    #   #  #####           \n");
    printf("       #       #    #       #   #   # # #    # #         #    #    #    #    #   #  ###             \n");
    printf("       #       #    #     ##### #    ## ###### #         #    ######    #    #####  #  ##           \n");

    printf("\n\n\n\n");
    printf("                                     ###    MAIN MENU    ###                                      \n");
    printf("\n\n\n");
    printf("                                      Press 1 : Start Game                                                                                      \n");
    printf("                                      Press 2 : Load Game                                                                                       \n");
    printf("                                      Press 3 : Score Board                                                                                     \n");
    printf("                                      Press 4 : About Game                                                                                  \n");
    printf("                                      Press 5 : Exit Game                                                                                    \n");





    int choice;
    int x;
    while (1)
       {
           printf("\n\n                                           Choice:");
           scanf("%d",&choice);

               switch(choice)
               {
                   case 1 : modes();
                   break;

                   case 2: x = load_game();
                                 Time_Attack(x);
                                 break;


                   case 3: scoreboard();
                   break;

                   case 4: about_the_game();
                   break;

                   case 5:system("cls");
                          printf("\033[1;36m");
                              printf("\n\n\n\n\n");
                              printf("   #######  #######  #######       #######  #      #######  #######  #######     ######    #######   #  #######  #######	    \n");
                              printf("   #        #     #     #          #        #      #        #        #     #     #     #   #     #   #  #           #          \n");
                              printf("   #######  #######     #          #######  #      #######  #######  #######     #      #  #######   #  #####       #          \n");
                              printf("   #        #     #     #     ##         #  #      #        #        #       ##  #     #   ###       #  #	    #     \n");
                              printf("   #######  #     #     #      #   #######  ###### #######  #######  #        #  ######    #   ###   #  #   	    #	    \n");      printf("\033[0m");
                              printf("\n\n\n\n\n\n\n\n\n");

                          Sleep(1000);
                          exit(1);

                   default :
                       printf("\n                                         WRONG CHOICE!\n");
                       Sleep(200);
                       system("cls");
                       Interface();
                       break ;
                }
        }
}

struct record_camp Time_Attack(int x)
{
    if (x == 1)
    {
        x = 49;
    }
    if (x == 2)
    {
        x = 50;
    }
    if(x == 3)
    {
        x = 51;
    }
    if (x == 4)
    {
        x = 52;
    }
    if (x == 5)
    {
        x = 53;
    }
    struct record_camp score;
    score.staages = 0;
    system("cls");
    puts("Enter Your Name:");
    fflush(stdin);
    gets(score.name);

    system("cls");
    time_t begin = time(NULL);

    int z;

    for (z=x;z<53;z++)
   {
        score.staages++;
        char stage = z;

        char prefix[sizeof(int)] = {z};
        char suffix[]= {".txt"};
        strcat(prefix,suffix);

    system("cls");

    printf("\n\n                WELCOME TO STAGE %c   \n\n",stage);



    FILE *fptr;
    char screen;
    char c[100000];
    int x = 1;
    fptr = fopen (prefix,"r");
    if (fptr == NULL)
{
    puts("Error while opening file");
    exit(1);
}
    int i=0;
    int index;
    srand(time(0));
    index = (rand()%(4-1+1)+1);
    int line=1;
    while (line!=index)
    {
        screen = fgetc(fptr);
            if (screen=='\n')
            {
                line++;
            }

        }
    do
    {
        screen = fgetc(fptr);
        c[i]=screen;
        printf("%c",screen);
        i++;
    }   while (screen!='\n');


 char b[100];
 int j=0;
 int chance = 3;


 while (j<(i-1))
 {



     b[j] = getche();
     if (b[j]!=c[j])
     {
         chance = chance - 1;
         printf("\n");
         printf("\033[1;31m");
         printf("[%c]",b[j]);
         printf("\033[0m");
         printf("is incorrect,its");
         printf("\033[1;32m");
         printf("[%c]",c[j]);
         printf("\033[0m");
         printf("                                         your lives");
         printf("\033[1;36m");
         printf("[%d]\n",chance);
         printf("\033[0m");
         printf("\n\n\n:-");
         int m;
         char screen2;
         for (m=0;m<j;m++)
         {
             printf("%c",b[m]);
         }
     }
     else
     {
         j++;
     }
     if (chance == 0)
     {

         break;
     }

 }
 if (chance == 0)
 {
        printf("\033[1;31m");
        printf("\n\nYou are out of lives!");
        time_t end = time(NULL);
        int hour=0,mins=0, t = (end - begin),sec;
        sec = t ;

        mins = sec/60;
        sec = t%60;
        hour = mins/60;

        printf("\n Your time was %d hours: %d Minutes: %d seconds",hour,mins,sec);
        printf("\n\n--------------   GAME OVER  --------------------------   \n\n ");
        Leader_board_camp(score,sec,mins,hour);
        printf("\033[0m");

        Sleep(2000);
        getch();
        modes();
        break;
 }
 else
 {
        printf("\033[1;32m");
        printf("\n\nCongratulations you typed correctly!\n\n");
        time_t end = time(NULL);
        int hour=0,mins=0, t = (end - begin),sec;
        sec = t;
        mins = sec/60;
        sec = t%60;
        hour = mins/60;
        printf("\n Your time was %d hours: %d Minutes: %d seconds",hour,mins,sec);
        save_game(score);





     printf("\033[0m");
     printf("\n\n");
     printf("Press Any Key To Continue To Next Stage");

     getch();
 }
    fclose(fptr);
 }
}
struct record_wpm Words_per_min()
{
    system("cls");
    struct record_wpm score;
    score.accuracy = 0;
    score.counter = 0;
    puts("Enter Your Name:");
    fflush(stdin);
    gets(score.name);
    system("cls");
     printf("\n\n                WELCOME TO WORDS PER MINUTE    \n\n");

    FILE *fptr;
    char screen;
    char c[100000];
    int x = 1;
    fptr = fopen ("wpm.txt","r");
    if (fptr == NULL)
{
    puts("Error while opening file");
    exit(1);
}
    int i=0;
    int index;
    srand(time(0));
    index = (rand()%(4-1+1)+1);
    int line=1;
    while (line!=index)
    {
        screen = fgetc(fptr);
            if (screen=='\n')
            {
                line++;
            }

        }
    do
    {
        screen = fgetc(fptr);
        c[i]=screen;
        printf("%c",screen);
        i++;
    }   while (screen!='\n');

clock_t delay = 60  * CLOCKS_PER_SEC;
clock_t start = clock();
 printf("\n\nStart Typing :-\n\n");
 char b[100];
 int j=0;

 while (j<(i-1))
 {


     if ((clock() - start) > delay)
         {
          break;
         }
     b[j] = getche();
     if (b[j]!=c[j])
     {
         score.accuracy++;
         printf("\b \b");
         printf("\033[1;31m");

        if ((clock() - start) > delay)
         {
          break;
         }

     }
     else
     {
         if ((clock() - start) > delay)
         {
          break;
         }
         if (b[j] ==32)
        {
         score.counter++;
        }

         printf("\033[0m");
         j++;
     }
 }
 fclose(fptr);
 score.accuracy = (score.accuracy/j)*100;
 score.accuracy = 100-score.accuracy;

 printf("\033[1;32m");
 printf("\n\nYour words per minute are : %d",score.counter);

 printf("\n\nYour letters per minute are : %d",j);

 printf("\n\nYour accuracy was %lf percent",score.accuracy);
 printf("\033[0m");
 printf("\n\n");
 fflush(stdin);
 Sleep(5000);
 Leader_board_wpm(score);
 getch();
 modes();
 return score;



}
void Leader_board_wpm(struct record_wpm x)
{
    FILE *fptr;
    fptr = fopen("wpmLB.txt","a+");
    if (fptr == NULL)
{
    puts("Error while opening file");
    exit(1);
}
    else
    {
        fprintf(fptr,"\n%s         %d                   %.2lf",x.name,x.counter,x.accuracy);
    }
    fclose(fptr);
}
void Leader_board_camp(struct record_camp x, int sec,int min, int hour)
{
    FILE *fptr;
    fptr = fopen("TimeAttackLB.txt","a+");
    if (fptr == NULL)
{
    puts("Error while opening file");
    exit(1);
}
    else
    {

        fprintf(fptr,"\n%s                           %d Hr: %d Mins: %d Sec                     %d",x.name,hour,min,sec,x.staages);
    }
    fclose(fptr);
}

void scoreboard()
{
    system("cls");
    printf("\n\n                               Which Score Board Do You Want To See?    \n");
    printf("\n\n");
    printf("\n                                     Press 1 : Campaign\n");
    printf("\n                                     Press 2 : Words/Minute\n");
    printf("\n                                     Press 3 : Main Menu\n");
    int choice;
    while (1)
       {
           printf("\n\n                                           Choice:");

           scanf("%d",&choice);

                   switch(choice)
                 {

                   case 1 : system("cls");
                            FILE *fptr;
                            fptr = fopen("TimeAttackLB.txt","r");
                            if (fptr == NULL)
                            {
                                printf("\nFile Not Found");
                            }
                            else
                            {
                                char c;
                                while (c!=EOF)
                                {
                                    c = fgetc(fptr);
                                    printf("%c",c);
                                }
                            }
                            printf("\n\n\nPress any key to continue\n");
                             getch();
                            system("cls");
                            scoreboard();
                   break;

                   case 2 : system("cls");
                            FILE *fpt;
                            fpt = fopen("wpmLB.txt","r");
                            if (fpt == NULL)
                            {
                                printf("\nFile Not Found");
                            }
                            else
                            {
                                char c;
                                while (c!=EOF)
                                {
                                    c = fgetc(fpt);
                                    printf("%c",c);
                                }
                            }
                            printf("\n\n\nPress any key to continue\n");
                            getch();
                            system("cls");
                            scoreboard();
                   break;

                   case 3:
                           system("cls");
                           Interface();
                           break;

                    default :
                       printf("\n                                         WRONG CHOICE!\n");
                            Sleep(200);
                            system("cls");
                            scoreboard();
                            break;
                 }
        }
}

void about_the_game()
{
        system("cls");
    int ch;

    printf("\n ---------------- TYPING TUTOR ---------------- \n");
    printf("\n\n");
    printf("\nBasically, typing tutor is a programmable tool to overcome the typing difficulties for anyone.\n");
    printf("\nTouch typing is a skill that uses muscle memory to know where the keys are without the sense of sight.\n");
    printf("\nIt is designed to help you learn to type as fast and easy as possible.\n");
    printf("\nBy using this tool anyone can easily reach typing speeds above 75-80 word per minute, while a hunt and peck typist would be hard pressed to reach 30 words per minute.\n");
    printf("\nThe thing you would learn no matter how hard you type is to type accurately.\n");
    printf("\nIf you increase your typing speed, you have effectively halved the time it would take you to do the same amount of work.\n\n");
    printf("\nLearning to touch type, and to do so accurately, can be one of the most invaluable skills of your career.\n");
    printf("\nThese are just basic benefits of using typing tutor tool. There are many more out there to discover for anyone who wishes to learn.\n");

    printf("\n\n\n\n\n\n\n\n");
    anyButton();
}

void modes()
{
    system("cls");

    printf("                                                                                                           \n");
    printf("                              Please Type the Mode You Want To Select                                      \n");
    printf("\n\n                                                                                                          \n");
    printf("                                        Press 1 : Campaign                                                                                        \n");
    printf("                                        Press 2 : Words/Minute                                                                                \n");
    printf("                                        Press 3 : Main Menu                                                                                        \n");

    int choice;
    while (1)
       {
           printf("\n\n                                           Choice:");

           scanf("%d",&choice);

                   switch(choice)
                 {

                   case 1 :Time_Attack(1);break;
                   case 2 :Words_per_min();break;
                   case 3 :system("cls");Interface();break;
                   default :
                       printf("\n                                         WRONG CHOICE!\n");
                            Sleep(200);
                            system("cls");
                            modes();
                            break;

                }
       }
}
void save_game(struct record_camp x)
{
    printf("\nDo you want to save game?(y/n)");
    char c;
    fflush(stdin);
    scanf("%c",&c);

    if (c == 'y' || c=='Y')
    {
    FILE *fptr;
    fptr = fopen("saves.txt","a");
    if (fptr == NULL)
{
    puts("Error while opening file");
    exit(1);
}

        char cur_time[128];

         time_t      t;
         struct tm*  ptm;

          t = time(NULL);
          ptm = localtime(&t);

          strftime(cur_time, 128, "%d-%b-%Y %H:%M:%S", ptm);

          fprintf(fptr,"\n%s %d %s",x.name,x.staages,cur_time);


          fclose(fptr);

    }
}
    int load_game()
{
    system("cls");
    FILE *fptr;
    fptr = fopen("saves.txt","r+");
    if (fptr == NULL)
    {
        printf("error opening file");
        exit(1);
    }
    char c;
    while (c!=EOF)
    {
       c = fgetc(fptr);
       printf("%c",c);
    }
    fclose(fptr);
       printf("\n\n\n\n\n\n\n\n\n\n\n\n Pick a line of saved game u want to play:");
       int line;
       scanf("%d",&line);

       FILE *fpt;
       fpt = fopen("saves.txt","r");
        if (fpt == NULL)
    {
        printf("error opening file");
        exit(1);
    }
       int x=0;
       char y;
       while (x!=line)
       {
           y = fgetc(fpt);
           if (y == '\n')
           {
               printf("this is working");
               x++;
           }

       }
       char n[50];
       char t[100];
       int s;
       fscanf(fptr,"%s %d %s",n,&s,t);
       return s;

    }
