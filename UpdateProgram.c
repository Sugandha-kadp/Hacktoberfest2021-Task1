#include <stdio.h>

int main()
{
    char name[15];
    char country[15];
    char skill;
    int age;
    
    //print Welcome to HacktoberFest 2021
    printf("Welcome to Hacktoberfest 2021\n");
    
    //Print Enter your name
    printf("Enter your name : ");
    //Get User name
    scanf("%s",name);
    
    //Print Enter Country of Residance
    printf("Enter your Country of Residance : ");
    //Get user country
    scanf("%s",country);
    
    //Print Enter Your Age
    printf("Enter your Age : ");
    //Get user Age
    scanf("%d",&age);
    
    //Print Enter Your grade of skill
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : ");
    //Get user skill level
    scanf(" %c",&skill);
    
    //Thank the user
    printf("Thank you %s Happy Hacking",name);

    return 0;
    
}
