//QUIZ (Improved 2)
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int round1();
int round2();
int round3();
int final_round();

int Quiz();
void Report();
void Rules();
void Welcome();

int main()
{
    char sname[20], br[5];
    int choice, yorn, total, roll;

    Welcome();

    printf("\n\nEnter your name : ");
    scanf("%s", &sname);

    printf("\nEnter your branch : ");
    scanf("%s", &br);

    printf("\nEnter your roll number : ");
    scanf("%d", &roll);

    printf("\nWELCOME %s, Do you want to : \n", strupr(sname));
    printf("1. PLAY QUIZ\n");
    printf("2. VIEW LEADERBOARD\n");
    printf("3. CHECK INSTRUCTIONS\n");
    printf("4. EXIT\n");

    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        //PLAY QUIZ
        total = Quiz();

        FILE *fp;
        fp = fopen("report.txt", "w");
        fprintf(fp, "%s\t\t%s\t\t%d\t\t\t\t%d", strupr(sname), strupr(br), roll, total);
        fclose(fp);

        printf("\nDo want to go back to home page ?\n");
        printf("1. Yes, Go back to home page..\n");
        printf("2. No, Quit the game..\n");
        printf("Enter your choice : ");
        scanf("%d", &yorn);

        if (yorn == 1)
        {
            main();
        }
        else
        {
            void exit(int main);
        }
    }

    else if (choice == 2)
    {
        //VIEW LEADERBOARD
        Report();
    }

    else if (choice == 3)
    {
        //CHECK INSTRUCTIONS
        Rules();

        printf("\nDo want to go back to home page ?\n");
        printf("1. Yes, Go back to home page..\n");
        printf("2. No, Quit the game..\n");
        printf("Enter your choice : ");
        scanf("%d", &yorn);

        if (yorn == 1)
        {
            main();
        }
        else
        {
            void exit(int main);
        }
    }

    else if (choice == 4)
    {
        //EXIT
        void exit(int main);
    }

    else
    {
        //INVALID CHOICE
        main();
    }
}



int Quiz()
{
    int marks_r1,marks_r2,marks_r3,marks_fr;
    int ttl;

    FILE *fp;

    //ROUND 1 questions
    fp = fopen("r1q1.txt", "w");
    fprintf(fp,"Question 1. Which among the following keep changing for a body in uniform circular motion?\n");
    fprintf(fp,"1. Speed\t\t\t2. Amplitude\n3. Velocity\t\t\t4. Acceleration\n");
    fprintf(fp,"Choose the correct option from the codes given below:\n");
    fprintf(fp,"[A] Only 1 & 2\n[B] Only 2 & 3\n[C] Only 3 & 4\n[D] Only 1 & 4\n");
    fclose(fp);

    fp = fopen("r1q2.txt", "w");
    fprintf(fp, "\n\nQuestion 2. Fathometer is used to measure:\n");
    fprintf(fp,"[A] Earthquakes\n[B] Rainfall\n[C] Ocean depth\n[D] Sound intensity\n");
    fclose(fp);

    fp = fopen("r1q3.txt", "w");
    fprintf(fp, "\n\nQuestion 3. Which is the largest human cell?\n");
    fprintf(fp,"[A] Liver\n[B] Skin\n[C] Spleen\n[D] Ovum\n");
    fclose(fp);

    fp = fopen("r1q4.txt", "w");
    fprintf(fp, "\n\nQuestion 4. Which Octopus has 9 brains?\n");
    fprintf(fp,"[A] Giant Pacific Octopus\n[B] Dumbo Octopus\n[C] Smoothskin Octopus\n[D] Blanket Octopus\n");
    fclose(fp);
    fp = fopen("r1q5.txt", "w");
    fprintf(fp, "\n\nQuestion 5. Which is the vertebrate that has two chambered heart?\n");
    fprintf(fp,"[A] Fish\n[B] Snake\n[C] Blue Whale\n[D] Crocodile\n");
    fclose(fp);

    //ROUND 2 questions
    fp = fopen("r2q1.txt", "w");
    fprintf(fp, "\n\nQuestion 1. Out of 7 consonants and 4 vowels, how many words of 3 consonants and 2 vowels can be formed?\n");
    fprintf(fp,"[A] 210\n[B] 1050\n[C] 25200\n[D] 21400\n");
    fclose(fp);

    fp = fopen("r2q2.txt", "w");
    fprintf(fp, "\n\nQuestion 2. A train can travel 50%% faster than a car. \nBoth start from point A at the same time and reach point B, 75 kms away from A, at the same time. \nOn the way, however, the train lost about 12.5 minutes while stopping at the stations.\nThe speed of the car is:\n");
    fprintf(fp,"[A] 100 km/h\n[B] 110 km/h\n[C] 120 km/h\n[D] 130 km/h\n");
    fclose(fp);

    fp = fopen("r2q3.txt", "w");
    fprintf(fp, "\n\nQuestion 3. In a mixture of 60 litres, the ratio of milk and water is 2 : 1. If this ratio is to be 1 : 2, then the quantity of water to be further added is:\n");
    fprintf(fp,"[A] 20 litres\n[B] 30 litres\n[C] 40 litres\n[D] 60 litres\n");
    fclose(fp);

    fp = fopen("r2q4.txt", "w");
    fprintf(fp, "\n\nQuestion 4. If the cost of x metres of wire is d rupees, then what is the cost of y metres of wire at the same rate?\n");
    fprintf(fp,"[A] Rs. xyd\n[B] Rs. (xd)\n[C] Rs. (yd)\n[D] Rs. yd/x\n");
    fclose(fp);

    fp = fopen("r2q5.txt", "w");
    fprintf(fp, "\n\nQuestion 5. If 1=3\n               2=3\n               3=5\n               4=4\n               5=4\n            Then, 6=? \n");
    fprintf(fp,"[A] 1\n[B] 2\n[C] 3\n[D] 4\n");
    fclose(fp);

    //ROUND 3 questions
    fp = fopen("r3q1.txt", "w");
    fprintf(fp, "\n\nQuestion 1. What do the five rings on the Olympic symbol represent?\n");
    fprintf(fp,"[A] The five oceans\n[B] The five continents\n[C] The five planets\n[D] The five Greek Gods\n");
    fclose(fp);

    fp = fopen("r3q2.txt", "w");
    fprintf(fp, "\n\nQuestion 2. Which of the following combination of years represents the years when the Olympic Games were not held due to the two World Wars?\n");
    fprintf(fp,"[A] 1914, 1940, 1944\n[B] 1916, 1940, 1944\n[C] 1920, 1936, 1940\n[D] 1936, 1840, 1944\n");
    fclose(fp);

    fp = fopen("r3q3.txt", "w");
    fprintf(fp, "\n\nQuestion 3. What does the Olympic motto Citius, Altius, Fortius mean?\n");
    fprintf(fp,"[A] Character, Attitude, Fortitude\n[B] Faster, Higher, Deeper\n[C] Faster, Higher, Stronger\n[D] Bigger, Stronger, Taller\n");
    fclose(fp);

    fp = fopen("r3q4.txt", "w");
    fprintf(fp, "\n\nQuestion 4. Saikhom Mirabai Chanu, women weightlifter was representing India in ___ category at Tokyo Olympics 2020?\n");
    fprintf(fp,"[A] 49 kg\n[B] 55 kg\n[C] 64 kg\n[D] 59 kg\n");
    fclose(fp);

    fp = fopen("r3q5.txt", "w");
    fprintf(fp, "\n\nQuestion 5. Who is the first ever Indian fencer to qualify for the Tokyo Olympic Games 2020?\n");
    fprintf(fp,"[A] Kabita Devi\n[B] Bhavani Dev\n[C] Pooja Mishra\n[D] Shilpa Garg\n");
    fclose(fp);

    // FINAL ROUND questions
    fp = fopen("frq1.txt", "w");
    fprintf(fp, "\n\nQuestion 1. How many sports disciplines has been added for direct recruitment of sportspersons to Government jobs?\n");
    fprintf(fp,"[A] 3\n[B] 8\n[C] 15\n[D] 20\n");
    fclose(fp);

    fp = fopen("frq2.txt", "w");
    fprintf(fp, "\n\nQuestion 2. Which Ministry has released guidelines to states regarding welfare of migrant workers?\n");
    fprintf(fp,"[A] Ministry of Home Affairs\n[B] Ministry of Social Justice\n[C] Ministry of Labour and Employment\n[D] Ministry of Finance\n");
    fclose(fp);

    fp = fopen("frq3.txt", "w");
    fprintf(fp, "\n\nQuestion 3. Which organization has launched a free online course for improving the /‘Prescription practices/’ in India?\n");
    fprintf(fp,"[A] AIIMS\n[B] ICMR\n[C] JIPMER\n[D] Ministry of AYUSH\n");
    fclose(fp);

    fp = fopen("frq4.txt", "w");
    fprintf(fp, "\n\nQuestion 4. Which organisation has launched ‘Kritagya’ Hackathon?\n");
    fprintf(fp,"[A] ICAR\n[B] NHAI\n[C] FSSAI\n[D] DRDO\n");
    fclose(fp);

    fp = fopen("frq5.txt", "w");
    fprintf(fp, "\n\nQuestion 5. Which Indian company has partnered with Ericsson to deploy 5G radio and transport solutions?\n");
    fprintf(fp,"[A] Jio\n[B] Airtel\n[C] BSNL\n[D] Tata\n");
    fclose(fp);

    marks_r1 = round1();
    marks_r2 = round2();
    marks_r3 = round3();
    marks_fr = final_round();

    ttl = marks_r1+marks_r2+marks_r3+marks_fr;

    printf("Your total score : %d points\n", ttl);
    return ttl;
}



void Report()
{
    //VIEW LEADERBOARD

    char b,c;
    printf("\n\n\t\t\t\t\t\t\t\t\tSHOWING STUDENT REPORT");
    printf("\n\t\t\t\t\t\t\t\t\t======= ======= ======\n\n");
    printf("\nNAME\t\tBRANCH\t\tROLL NO.\t\t\tSCORE");
    printf("\n====\t\t======\t\t========\t\t\t=====\n");
    
    FILE*fp;
    fp=fopen("report.txt","r");
    c=fgetc(fp);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(fp);
    }
    fclose(fp);

    printf("\n\nClick x to EXIT the game and CLEAR the report\nOR\nClick y to EXIT the game without clearing the report\n");
    printf("Enter your choice : ");
    scanf("%s", &b);

    if((b =='x') || (b =='X'))
    {
        fp=fopen("report.txt","w");  //clear//
        fclose(fp);
        
        printf("\n\nThe report has been CLEARED..\n");
        printf("THANKS FOR VISITING LEADERBOARD!!\n");

        void exit(int main);
    }
    else
    {
        printf("\n\nThe report has been SAVED..\n");
        printf("THANKS FOR VISITING LEADERBOARD!!\n");

        void exit(int main);    //exit program//
    }
}



void Rules()
{
    printf("\n\t\t\t\t\t\t\t\tINSTRUCTIONS TO PLAY THE QUIZMASTER CHALLENGE\n");
    printf("\t\t\t\t\t\t\t\t============ == ==== === ========== =========\n\n");
    printf("1. There are 4 rounds to complete the game.\n");
    printf("2. Each round contains 5 questions.\n");
    printf("3. Each question carry 2 points.\n");
    printf("4. So the total points of each round will be 10 points and overall quiz game will carry 40 points.\n");
    printf("5. Only round 3 and final round contain negative marking of 1 and 2 points respectively.\n");
    printf("6. Difficulty level of the game will increase at each round.\n");
    printf("7. If you failed to qualify any round then you have to restart the whole game.\n");
    printf("8. You will qualify round 1 and round 2 only if you score marks greater than 3 in each round.\n");
    printf("9. You will qualify round 3 and final round only if you score marks greater than 5 in each round.\n");
}



int round1()
{
    int yn, marks = 0;
    char a1, a2, a3, a4, a5;
    char c;

    printf("\t\t\t\t\t\t\t\t\t\t**ROUND 1**\n\n");

    FILE *fp;
    fp = fopen("r1q1.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a1);

    if ((a1 == 'C') || (a1 == 'c'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
    }

    fp = fopen("r1q2.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a2);

    if ((a2 =='C') || (a2 =='c'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
    }

    fp = fopen("r1q3.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a3);

    if ((a3 =='D') || (a3 =='d'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
    }

    fp = fopen("r1q4.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a4);

    if ((a4 =='A') || (a4 =='a'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
    }

    fp = fopen("r1q5.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a5);

    if ((a5 =='A') || (a5 =='a'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
    }

    printf("\n\nYour Round 1 score : %d\n", marks);

    if (marks>=4)
    {
        printf("\nYou are qualified to play the next round!!\n");
        return marks;
    }
    else
    {
        printf("\nSorry, you are not qualified to play the next round.\n");
        printf("You have to start the game again!!\n");
        printf("\nALL THE BEST..\n");
        main();
    }
}



int round2()
{
    int yn, marks = 0;
    char a1, a2, a3, a4, a5;
    char c;

    printf("\t\t\t\t\t\t\t\t\t\t**ROUND 2**\n\n");

    FILE *fp;
    fp = fopen("r2q1.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a1);

    if ((a1=='A') || (a1=='a'))
    {
        printf("\nYou got it right!!\n");
        marks += 2; //marks = marks+2
    }
    else
    {
        printf("\nOops, That's wrong!!");
    }

    fp = fopen("r2q2.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a2);

    if ((a2=='C') || (a2=='c'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
    }

    fp = fopen("r2q3.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a3);

    if ((a3=='D') || (a3=='d'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
    }

    fp = fopen("r2q4.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a4);

    if ((a4=='D') || (a4=='d'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
    }

    fp = fopen("r2q5.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a5);

    if ((a5=='C') || (a5=='c'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
    }

    printf("\n\nYour Round 2 score : %d\n", marks);

    if (marks>=4)
    {
        printf("\nYou are qualified to play the next round!!\n");
        return marks;
    }
    else
    {
        printf("\nSorry, you are not qualified to play the next round.\n");
        printf("You have to start the game again!!\n");
        printf("\nALL THE BEST..\n");
        main();
    }
}



int round3()
{
    int yn, marks = 0;
    char a1, a2, a3, a4, a5;
    char c;

    printf("\t\t\t\t\t\t\t\t\t\t**ROUND 3**\n\n");

    FILE *fp;
    fp = fopen("r3q1.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a1);

    if ((a1=='B') || (a1=='b'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
        marks -= 1;
    }

    fp = fopen("r3q2.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a2);

    if ((a2=='B') || (a2=='b'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
        marks -= 1;
    }

    fp = fopen("r3q3.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a3);

    if ((a3=='C') || (a3=='c'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
        marks -= 1;
    }

    fp = fopen("r3q4.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a4);

    if ((a4=='A') || (a4=='a'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
        marks -= 1;
    }

    fp = fopen("r3q5.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a5);

    if ((a5=='B') || (a5=='b'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
        marks -= 1;
    }

    printf("\n\nYour Round 3 score : %d\n", marks);

    if (marks>=6)
    {
        printf("\nYou are qualified to play the next round!!\n");
        return marks;
    }
    else
    {
        printf("\nSorry, you are not qualified to play the next round.\n");
        printf("You have to start the game again!!\n");
        printf("\nALL THE BEST..\n");
        main();
    }
}


int final_round()
{
    int yn, marks = 0;
    char a1, a2, a3, a4, a5;
    char c;

    printf("\t\t\t\t\t\t\t\t\t\t**FINAL ROUND**\n\n");

    FILE *fp;
    fp = fopen("frq1.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a1);

    if ((a1=='D') || (a1=='d'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
        marks -= 2;
    }

    fp = fopen("frq2.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a2);

    if ((a2=='C') || (a2=='c'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
        marks -= 2;
    }

    fp = fopen("frq3.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a3);

    if ((a3=='B') || (a3=='b'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
        marks -= 2;
    }

    fp = fopen("frq4.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a4);

    if ((a4=='A') || (a4=='a'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
        marks -= 2;
    }

    fp = fopen("frq5.txt", "r");
    c = fgetc(fp);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    printf("\nYour answer : ");
    scanf("%s", &a5);

    if ((a5=='B') || (a5=='b'))
    {
        printf("\nYou got it right!!\n");
        marks += 2;
    }
    else
    {
        printf("\nOops, That's wrong!!");
        marks -= 2;
    }

    printf("\n\nYour Final Round score : %d", marks);

    if (marks>=6)
    {
        printf("\n\nYou played well!!\n");
        return marks;
    }
    else
    {
        printf("\n\nSorry, you cannot play this round again.\n");
        printf("You have to start the game again!!\n");
        printf("\nALL THE BEST..\n");
        main();
    }
}



void Welcome()
{
    printf("\n\t\t\t\t\t\t\t\t  WELCOME TO THE QUIZ MASTER CHALLENGE\n");
    printf("\t\t\t\t\t\t\t\t  ====================================\n\n\t\t\t\t");
    printf("\t\t\t\tCreated by : HAWK-Hustler And Witty Kith\n\t\t\t\t");
    printf("\t\t\t\t======= ==   ===========================\n");
}

