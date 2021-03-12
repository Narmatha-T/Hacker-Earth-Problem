#include <stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    //declaration of teams
    char T1[]= {"Royal Challengers Bangalore"};
    char T2[]={"Chennai Super Kings"};
    char T3[]={"Mumbai Indians"};
    char T4[]={"Kings XI Punjab"};
    char
    RCB[11][11]={"Josh","Finch","Dev","Virat","ABD","Negi","Chahal", "Saini","Siraj","Sundar", "Shivam"};
    char CSK[11][11]={"Dhoni", "Jadeja", "Raina", "Sam","Bravo", "FAF", "Watson", "Rutu", "Deepak", "Ngidi","Thakur"};
    char MI[11][11]={"Yadav","Rohit","Hardik","Krunal","Polly","Kishan", "De Q", "Boult", "Bumrah", "Rahul","Patt"};
    char KXIP[11][11]={"K L Rahul","Hetmeyer","C Gayle","Karun N","Maxwell","Mayank A","N Pooran", "SN Khan","M Shami","Cotrell","Gowtham"};
    
    //preparation of scorecard
    
    int teamruns1=0,teamruns2=0;
    int runs1[]={0,0,0,0,0,0,0,0,0,0,0};
    //printf("%d",runs1[1]);
    int runs2[]={0,0,0,0,0,0,0,0,0,0,0};
    int wickets1 = 0,wickets2 = 0;
    float overs = 0.0;
    int balls = 0;
    int wickets = 0;
    
    char
    batting1[5][11]={"DNB","DNB","DNB","DNB","DNB","DNB","DNB","DNB","DNB","DNB","DNB"};
    char batting2[5][11]={"DNB","DNB","DNB","DNB","DNB","DNB","DNB","DNB","DNB","DNB","DNB"};
    clear();
    
    char dot[2] =".";
    
    //choosing of teams by the user
    
    printf("Enter the number of overs you want to play: ");
    scanf("%f",&overs);
    int o = (int)overs;
    int team1,team2; // for choosing team1 VS team2
    printf("Choose the teams you want to play\n");
    printf(" 1 RCB \n 2 CSK \n 3 MI \n 4 KXIP \n Choose numbers \n");
    printf("Team 1: ");
    scanf("%d",&team1);
    printf("Team 2: ");
    scanf("%d",&team2);
    printf("\nGetting your virtual pitch ready for the %d overs match\n\n",o);
    sleep(5);
    printf("The playing 11 are \n");
    printf("Team 1 : ");
    int i,scoresheetvariable1,scoresheetvariable2;
    char a[20];
    char b[20];
    
    if(team1==1)
    {
        scoresheetvariable1 = 1;
        strcpy(a,T1);
        printf("Royal Challengers Bangalore\n");
        for(i = 0;i<11;i++)
        {
            printf("%s\n",RCB[i]);
        }
        printf("\n");
    }
    
    else if(team1==2)
    {
        scoresheetvariable1 = 2;
        strcpy(a,T2);
        printf("Chennai Super Kings\n");
        for(i = 0;i<11;i++)
        {
            printf("%s\n",CSK[i]);
        }
        printf("\n");
    }
    
    else if(team1==3)
    {
        scoresheetvariable1 = 3;
        strcpy(a,T3);
        printf("Mumbai Indians\n");
        for(i = 0;i<11;i++)
        {
            printf("%s\n",MI[i]);
        }
        printf("\n");
    }
    else if(team1==4)
    {
        scoresheetvariable1 = 4;
        strcpy(a,T4);
        printf("Kings XI Punjab\n");
        for(i = 0;i<11;i++)
        {
            printf("%s\n",KXIP[i]);
        }
        printf("\n");
    }
    
    else printf("Choose only the specified options");
    //printing of the first team according to choice of user
    
    sleep(3);
    
    printf("Team 2 : ");
    if(team2==1)
    {
        scoresheetvariable2 = 1;
        strcpy(b,T1);
        printf("Royal Challengers Bangalore\n");
        for(i = 0;i<11;i++)
        {
            printf("%s\n",RCB[i]);
        }
        printf("\n");
    }
    else if(team2==2)
    {
        scoresheetvariable2 = 2;
        strcpy(b,T2);
        printf("Chennai Super Kings\n");
        for(i = 0;i<11;i++)
        {
            printf("%s\n",CSK[i]);
        }
        
        printf("\n");
    }
    else if(team2==3)
    {
        scoresheetvariable2 = 3;
        strcpy(b,T3);
        printf("Mumbai Indians\n");
        for(i = 0;i<11;i++)
        {
            printf("%s\n",MI[i]);
        }
        printf("\n");
    }
    else if(team2==4)
    {
        scoresheetvariable2 = 4;
        strcpy(b,T4);
        printf("Kings XI Punjab\n");
        for(i = 0;i<11;i++)
        {
            printf("%s\n",KXIP[i]);
        }
        printf("\n");
    
    } //printing of the second team according to choice of user
    sleep(3);
    
    printf("\n\nCaptains of the teams have arrived for the toss\n\n");
    sleep(3);
    int random = rand() + (rand()%3)+2;
    if(random%2==0) printf("%s have won the toss and chose to bat \n",a);
    else printf("%s have won the toss and chose to bat \n",b);
    
    printf("\n\nThe game will begin in.....\n");
    for(i= 5;i>0;i--)
    {
        printf("%d\n",(i));
        sleep(1.25);
    }
    printf("Lets Play!!\n\n");
    
    //The game
    
    balls = o*6;
    int j;
    char wkt = 'w';
    int ascii,counter1 =0, counter2 = 1;
    //counter will keep the count of the order of batsmen
    srand(time(0));
    int striker = 1;
    int nonstriker = 0;
    teamruns1 = 0;
    char events[]= {'0','1','2','3','4','6','w'};
    printf("\n Analysis of the first innings \n");
    printf(" -------------------------------\n");
    
    for (i = 0; i < o; i++)
    {
    for(j=0;j<6;j++)
    {
    int num = (rand() % (6 - 0 + 1)) + 0;
    ascii = events[num];
    if(ascii==119) { printf("%c\t",wkt); }
    else {printf("%d\t",(ascii-48));}
    //printf("%d\n",ascii);
    if(ascii==48)
    {
    continue;
    }
    
    else if(ascii==49)
    {
        if(striker = 1)
        {
            runs1[counter1] += 1;
            teamruns1+=1;
            striker = 0;
            nonstriker = 1;
        }
        else
        {
            runs1[counter2]+=1;
            teamruns1+=1;
            striker = 1;
            nonstriker = 0;
        }
    }
    
    else if(ascii==50)
    {
        runs1[counter1]+=2;
        teamruns1+=2;
    }
    
    else if(ascii==51)
    {
        if(striker = 1)
        {
            runs1[counter1] += 3;
            teamruns1+=3;
            striker = 0;
            nonstriker = 1;
        }
        else
        {
            runs1[counter2]+=3;
            teamruns1+=3;
            striker = 1;
            nonstriker = 0;
        }
    }
    
    else if(ascii==52)
    {
        teamruns1 +=4;
        
        runs1[counter1]+=4;
    }
    else if(ascii==54)
    {
        teamruns1 +=6;
        runs1[counter1]+=6;
    }
    else if(ascii==119)
    {   
        wickets1++;
        if(wickets1==10){printf("\n"); goto allout1;}
        if(counter1==0)
        {
        counter1 = 2;
        }
        else
        {
        counter1++;
        if(counter1==counter2) counter1++;
        else continue;
        
    }
    
    }
    
    else continue;
    
    }
    printf("\n");
    if(striker==1) striker = 0;
    else striker = 1;
    if(nonstriker== 1) nonstriker=0;
    else nonstriker=1;
    //end of over strike rotataion
    
    //printf("%d ", num);
    }
    
    allout1:
    printf("Generating final score sheet of first innings..\n");
    printf("\n\n");
    sleep(4);
    
    /*for(i= 5;i>0;i--)
    {
    printf("%s",dot);
    
    sleep(1.25);
    }
    printf("\n");*/
    
    if(scoresheetvariable1==1)
    {
    for(i=0;i<11;i++)
    {
    printf("%s \t ",RCB[i]);
    if(i<(wickets1+2))printf("%d \n",runs1[i]);
    else printf("DNB\n");
    }
    }
    if(scoresheetvariable1==2)
    {
    for(i=0;i<11;i++)
    {
    printf("%s \t ",CSK[i]);
    if(i<(wickets1+2))printf("%d \n",runs1[i]);
    else printf("DNB\n");
    }
    }
    if(scoresheetvariable1==3)
    
    {
    for(i=0;i<11;i++)
    {
    printf("%s \t ",MI[i]);
    if(i<(wickets1+2))printf("%d \n",runs1[i]);
    else printf("DNB\n");
    }
    }
    if(scoresheetvariable1==4)
    {
    for(i=0;i<11;i++)
    {
    printf("%s \t",KXIP[i]);
    if(i<(wickets1+2))printf("%d \n",runs1[i]);
    else printf("DNB\n");
    }
    }
    
    printf("Team Score: %d\n",teamruns1);
    printf("Wickets: %d\n\n",wickets1);
    
    printf("Second innings will begin shortly..\n\n");
    printf("\n");
    sleep(3);
    
    /*for(i=5;i>0;i--)
    {
    printf("%c",dot);
    sleep(1.25);
    }*/
    
    //second innings
    
    counter1 = 0;
    counter2 = 1;
    printf("\n Analysis of the second innings \n");
    printf(" -------------------------------\n");
    
    for (i = 0; i < o; i++)
    {
    for(j=0;j<6;j++)
    { if(teamruns2>teamruns1) break;
    int num = (rand() % (6 - 0 + 1)) + 0;
    
    ascii = events[num];
    if(ascii==119) { printf("%c\t",wkt); }
    else {printf("%d\t",(ascii-48));}
    //printf("%d\n",ascii);
    if(ascii==48)
    {
    continue;
    }
    else if(ascii==49)
    {
    if(striker = 1)
    {
    runs2[counter1] += 1;
    teamruns2+=1;
    striker = 0;
    nonstriker = 1;
    }
    else
    {
    runs2[counter2]+=1;
    teamruns2+=1;
    striker = 1;
    nonstriker = 0;
    
    }
    }
    else if(ascii==50)
    {
    runs2[counter1]+=2;
    teamruns2+=2;
    }
    else if(ascii==51)
    {
    if(striker = 1)
    {
    runs2[counter1] += 3;
    teamruns2+=3;
    striker = 0;
    nonstriker = 1;
    }
    else
    {
    runs2[counter2]+=3;
    teamruns2+=3;
    striker = 1;
    nonstriker = 0;
    }
    
    }
    else if(ascii==52)
    {
    teamruns2 +=4;
    runs2[counter1]+=4;
    }
    else if(ascii==54)
    {
        teamruns2 +=6;
        runs2[counter1]+=6;
    }
    else if(ascii==119)
    {
    wickets2++;
    if(wickets2==10){printf("\n"); goto allout2; }
    if(counter1==0)
    {
    counter1 = 2;
    }
    else
    {
    counter1++;
    
    if(counter1==counter2) counter1++;
    else continue;
    
    }
    
    }
    else continue;
    }
    if(striker==1) striker = 0;
    else striker = 1;
    if(nonstriker== 1) nonstriker=0;
    else nonstriker=1;
    printf("\n");
    //printf("%d ", num);
    }
    
    allout2:
    printf("\n\n");
    printf("Generating final score sheet of second innings..\n");
    printf("\n");
    sleep(2);
    /*for(i= 5;i>0;i--)
    
    {
    printf("%c",dot);
    sleep(1.25);
    }
    printf("\n");*/
    
    if(scoresheetvariable2==1)
    {
    for(i=0;i<11;i++)
    {
    printf("%s \t ",RCB[i]);
    if(i<(wickets2+2))printf("%d \n",runs2[i]);
    else printf("DNB\n");
    }
    }
    if(scoresheetvariable2==2)
    {
    for(i=0;i<11;i++)
    {
    printf("%s \t",CSK[i]);
    if(i<(wickets2+2))printf("%d \n",runs2[i]);
    else printf("DNB\n");
    }
    
    }
    if(scoresheetvariable2==3)
    {
        for(i=0;i<11;i++)
        {
            printf("%s \t ",MI[i]);
            if(i<(wickets2+2))printf("%d \n",runs2[i]);
            else printf("DNB\n");
        }
    }
    
    if(scoresheetvariable2==4)
    {
        for(i=0;i<11;i++)
        {
            printf("%s \t ",KXIP[i]);
            if(i<(wickets2+2))printf("%d \n",runs2[i]);
            else printf("DNB\n");
        }
    }
    
    printf("Team Score: %d\n",teamruns2);
    printf("Wickets: %d\n\n",wickets2);
    
    printf("Game over!!");
    printf("\n\n");
    sleep(3);
    
    //final results
    
    printf("Final scores\n");
    printf("------------\n");
    printf("%s : %d - %d\n",a,teamruns1,wickets1);
    printf("%s : %d - %d\n",b,teamruns2,wickets2);
    if(teamruns1>teamruns2) printf("\n\n%s win the match by defending %d runs!!",a,(teamruns1-teamruns2));
    else if(teamruns2>teamruns1) printf("\n\n%s win the match by chasing %d runs!!",b,(teamruns1+1));
    else printf("Match tied!!");
    
    printf("\nThank you for playing!!!");
}