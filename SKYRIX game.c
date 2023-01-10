#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int shop(int);
void atk_mech(int);
int main()
{
    char name[25];
    int health = 100, inventory = 0, dmg_plr, damage_mob, x;
    char attack, play;

    printf("WELCOME TO SKYRIX!");
    printf("\nLet's start a new game :)"); 

    do
    {
    
    printf("\n----------------------------\nEnter character name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    printf("----------------------------\nHi %s lets begin your adventure!\n", name);
    printf("\nHealth: %d \n", health);
    printf("\nHey adventurer! There is only one thing that can defeat the Monster... Choose wisely.\n");
    printf("Select a weapon \n ");
    dmg_plr = shop(dmg_plr);
    printf("Press [Enter] to play");
    printf("\n\n\n\n------------------------------\n");
    atk_mech(dmg_plr);

    printf("Do you want to play again? [Y]es [N]o ");
    scanf("%c", &play);
    scanf("%c", &play);
    play = toupper(play);
    } while (play == 'Y');
    

return 0;
}

int shop(int damage_plr){
    int choice, i;
    char* shp[] = {"Sword","Axe","Ninja stars","Stones","Bow & Arrow","Dagger","Football","Rockets","Spikes","Bubble gun"};

    for (i = 0; i < 10; i++)
    {
        printf("%s[%d]    ", shp[i] , i);
    }
    scanf("\n%d", &choice);

        switch (choice)
        {
        case 0:
            damage_plr = 12;
            printf("You now have: %s\n", shp[choice]);
            break;
        case 1:
            damage_plr = 8;
            printf("You now have: %s\n", shp[choice]);
            break;
        case 2:
            damage_plr = 5;
            printf("You now have: %s\n", shp[choice]);
            break;

        case 3:
            damage_plr = 9;
            printf("You now have: %s\n", shp[choice]);
            break;

        case 4:
            damage_plr = 1;
            printf("You now have: %s\n", shp[choice]);
            break;

        case 5:
            damage_plr = 11;
            printf("You now have: %s\n", shp[choice]);
            break;

        case 6:
            damage_plr = 3;
            printf("You now have: %s\n", shp[choice]);
            break;

        case 7:
            damage_plr = 17;
            printf("You now have: %s\n", shp[choice]);
            break;

        case 8:
            damage_plr = 7;
            printf("You now have: %s\n", shp[choice]);
            break;

        case 9:
            damage_plr = 20;
            printf("You now have: %s\n", shp[choice]);
            break;
        default:
            break;
        }
return damage_plr;
}

void atk_mech(int damage_plr)
{
    int damage_monster = 13, plr_hp =100, mon_hp=100;
    do
    {
        
        printf("Monster = %d\t health = %d\n", mon_hp, plr_hp);
        mon_hp = mon_hp - damage_plr;
        printf("Monster = %d\t health = %d\n\n", mon_hp, plr_hp);
        plr_hp = plr_hp - damage_monster;
        
        if (mon_hp <= 0)
        {
            printf("You Won! YAYYY");
        }
        else if(plr_hp <=0)
        {
            printf("Oh no! You're Overpowered... You lost :(");
        }
        

    } while (plr_hp>0 && mon_hp>0);

}