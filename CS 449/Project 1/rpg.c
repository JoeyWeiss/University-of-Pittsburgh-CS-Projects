//Joseph Weiss Project 1 Part A:  RPG
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
int main() {
    int play1Armour, play2Armour, play1Weap, play2Weap, play1HP=20, play2HP=20, play1AC, play2AC, play1DM, play2DM;
    char* play1ArmName = "none";
    char* play2ArmName = "none";
    char* play1WeapName = "none";
    char* play2WeapName = "none";
    srand((unsigned int)time(NULL));
    //Ask user to input equiptment
    printf("\nList of available armors:\n0: cloth (AC=10)\n1: studded leather (AC=12)\n2: ring mail (AC=14)\n3: chain mail (AC=16)\n4: plate (AC=18)\n\nChoose Player 1 Armor (0~4):");
    scanf("%d", &play1Armour);
    
    if(play1Armour==0){
       play1ArmName="cloth";
         play1AC=10;
    }
    if(play1Armour==1){
        play1ArmName="studded leather";
         play1AC=12;
    }
    if(play1Armour==2){
        play1ArmName="ring mail";
         play1AC=14;
    }
    if(play1Armour==3){
        play1ArmName="chain mail";
         play1AC=16;
    }
    if(play1Armour==4){
        play1ArmName="plate";
         play1AC=18;
    }
    printf("Choose Player 2 Armor (0~4):");
    scanf("%d", &play2Armour);
    if(play2Armour==0){
        play2ArmName="cloth";
         play2AC=10;
    }
    if(play2Armour==1){
        play2ArmName="studded leather";
         play2AC=12;
    }
    if(play2Armour==2){
        play2ArmName="ring mail";
         play2AC=14;
    }
    if(play2Armour==3){
        play2ArmName=="chain mail";
         play2AC=16;
    }
    if(play2Armour==4){
        play2ArmName=="plate";
         play2AC=18;
    }
   
    printf("\nList of available weapons:\n0: dagger (damage=1d4)\n1: short sword (damage=1d6)\n2: long sword (damage=1d8)\n3: great sword (damage=2d6)\n4: great axe (damage=1d12)\n\nChoose Player 1 Weapon(0~4):");
    scanf("%d", &play1Weap);
    if(play1Weap==0){
        play1WeapName="cloth";
    }
    if(play1Weap==1){
        play1WeapName="short sword";
    }
    if(play1Weap==2){
        play1WeapName="long sword";
    }
    if(play1Weap==3){
        play1WeapName="great sword";
    }
    if(play1Weap==4){
        play1WeapName="great axe";
    }
    printf("Choose Player 2 Weapon(0~4):");
    scanf("%d", &play2Weap);
    if(play2Weap==0){
        play2WeapName="cloth";
    }
    if(play2Weap==1){
       play2WeapName="short sword";
    }
    if(play2Weap==2){
        play2WeapName="long sword";
    }
    if(play2Weap==3){
        play2WeapName="great sword";
    }
    if(play2Weap==4){
        play2WeapName="great axe";
    }
    
    printf("\nPlayer setting complete:\n[Player 1: hp=20, armor=%s, weapon=%s]\n[Player 2: hp=20, armor=%s, weapon=%s]", play1ArmName, play1WeapName, play2ArmName, play2WeapName);
    
    printf("\n\nFight? (y/n): ");
    char fight='y';
    scanf("%s", &fight);
    int D20;
    while(fight=='y'){
        play1HP=20;
        play2HP=20;
	int i=0;
        for(; ((play1HP>0) && (play2HP>0)); i++){
            printf("\n----- Round %d ------\n", i);
            
            //Player 1 Attacks
            //Attack Roll:
            D20 = rand() % (20 - 1 + 1) + 1;
            int dam=0;
                if(D20>=play2AC){
                    //Damage Roll
                    dam = damage(play1Weap);
                    printf("Player 1 hits Player 2 for %d damage (attack roll %d)\n", dam, D20);
                }else{
                    printf("Player 1 misses player 2 (attack roll %d)\n", D20);
                }
                
            //Player 2 Attacts
            D20 = rand() % (20 - 1 + 1) + 1;
            int dam2=0;
                if(D20>=play2AC){
                    dam2 = damage(play2Weap);
                    printf("Player 2 hits Player 1 for %d damage (attack roll %d)\n", dam2, D20);
                }else{
                    printf("Player 2 misses player 1 (attack roll %d)\n", D20);
                }
            play1HP=play1HP-dam2;
            play2HP=play2HP-dam;
            printf("[Player 1: hp=%d, armor=%s, weapon=%s]\n[Player 2: hp=%d, armor=%s, weapon=%s]", play1HP, play1ArmName, play1WeapName, play2HP, play2ArmName, play2WeapName);
            
        }
        
         if(play1HP>play2HP){
             printf("\n\nPlayer 1 WINS!\n");
         }else if(play1HP<play2HP){
             printf("\n\nPlayer 2 WINS!\n");
         }else{
             printf("\n\nPlayer 1 and Player 2 DRAW!\n");
         }
         fight='n';
         printf("\nFight? (y/n): ");
         scanf("%s", &fight);
    }
    
    return 0;
}
//Function to get randomized values for dice rolls 
int damage(int weap){
    int dam1, dam2;
    int finalDamage;
    
    if(weap==0){
        finalDamage = rand() % (4 - 1 + 1) + 1;
    }
    else if(weap==1){
        finalDamage = rand() % (6 - 1 + 1) + 1;
    }
    else if(weap==2){
        finalDamage = rand() % (8 - 1 + 1) + 1;
    }
    else if(weap==3){
        dam1 = rand() % (6 - 1 + 1) + 1;
        dam2 = rand() % (6 - 1 + 1) + 1;
        finalDamage=dam1+dam2;
    }
    else if(weap==4){
        dam1 = rand() % (12 - 1 + 1) + 1;
        dam2 = rand() % (12 - 1 + 1) + 1;
        finalDamage=dam1+dam2;
    }
    return finalDamage;
}
