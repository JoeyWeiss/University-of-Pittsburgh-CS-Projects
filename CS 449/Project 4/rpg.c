//Joseph Weiss Project 1 Part A:  RPG
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include<unistd.h> 
#include<fcntl.h> 
#include <math.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int dice;
void savefunc();
void earthquake(int sig);


static name[100];
static int play1Armour, play1Weap, frodoLevel, frodoHp, frodoXP;
char* play1ArmName = "none";
char* play1WeapName = "none";
FILE *fptr;
int saveWeapon;
void signal_handler1(int sig) {
	printf("\nSaving and exiting...\n");
savefunc(1);
    

printf("\n");

exit(0);
}
	int orc1hp, orc2hp, orc3hp, orc4hp, orc5hp, orc6hp, orc7hp, orc8hp, gollumhp, sauronhp;
    int orc1AC, orc2AC, orc3AC, orc4AC, orc5AC, orc6AC, orc7AC, orc8AC, gollumAC, sauronAC;
    int orc1arm, orc2arm, orc3arm, orc4arm, orc5arm, orc6arm, orc7arm, orc8arm, gollumarm=0, sauronarm=4;
     int orc1w , orc2w , orc3w , orc4w , orc5w , orc6w , orc7w , orc8w , gollumw=0, sauronw=4;
    int orc1l=1, orc2l=1, orc3l=1, orc4l=1, orc5l=1, orc6l=1, orc7l=1, orc8l=1, golluml=1, sauronl=20;
    int orc1xp=2000, orc2xp=2000, orc3xp=2000, orc4xp=2000, orc5xp=2000, orc6xp=2000, orc7xp=2000, orc8xp=2000, gollumxp=2000, sauronxp=1048576000;
char* orc1armName= "none";
	char* orc2armName= "none";
	char* orc3armName= "none";
	char* orc4armName= "none";
	char* orc5armName= "none";
	char* orc6armName= "none";
	char* orc7armName= "none";
	char* orc8armName= "none";
    char* orc1wName= "none";
	char* orc2wName= "none";
	char* orc3wName= "none";
	char* orc4wName= "none";
	char* orc5wName= "none";
	char* orc6wName= "none";
	char* orc7wName= "none";
	char* orc8wName= "none";
    
int main() {
	dice=open("/dev/dice", O_RDWR);
	signal(SIGTERM, signal_handler1);
	signal(SIGINT, signal_handler1);
	signal(SIGRTMIN, earthquake);
	
	frodoLevel=1;
	frodoXP=2000;
	frodoHp=20;
	
	int play2Armour, play1Weap, play2Weap, play1HP=20, play2HP=20, play1AC, play2AC, play1DM, play2DM;
   // char* play1ArmName = "none";
    char* play2ArmName = "none";
    //char* play1WeapName = "none";
    char* play2WeapName = "none";
    
    srand((unsigned int)time(NULL));
	int play1Level;
	int play1hp;
	int play1XP;
	
		char yes;
//FILE *fptr;
    
	
	 orc1hp=20, orc2hp=20, orc3hp=20, orc4hp=20, orc5hp=20, orc6hp=20, orc7hp=20, orc8hp=20, gollumhp=10, sauronhp=115;
     orc1AC=0, orc2AC=0, orc3AC=0, orc4AC=0, orc5AC=0, orc6AC=0, orc7AC=0, orc8AC=0, gollumAC=0, sauronAC=0;
     orc1arm= damage(5)-1, orc2arm= damage(5)-1, orc3arm= damage(5)-1, orc4arm= damage(5)-1, orc5arm= damage(5)-1, orc6arm= damage(5)-1, orc7arm= damage(5)-1, orc8arm= damage(5)-1, gollumarm=0, sauronarm=4;
     orc1w= damage(5)-1, orc2w= damage(5)-1, orc3w= damage(5)-1, orc4w= damage(5)-1, orc5w= damage(5)-1, orc6w= damage(5)-1, orc7w= damage(5)-1, orc8w= damage(5)-1, gollumw=0, sauronw=4;
     orc1l=1, orc2l=1, orc3l=1, orc4l=1, orc5l=1, orc6l=1, orc7l=1, orc8l=1, golluml=1, sauronl=20;
     orc1xp=2000, orc2xp=2000, orc3xp=2000, orc4xp=2000, orc5xp=2000, orc6xp=2000, orc7xp=2000, orc8xp=2000, gollumxp=2000, sauronxp=1048576000;
   if( access( "rpg.save.txt", F_OK ) != -1 ) {
    

	int tester=0;
	printf("Found save file. Continue where you left off (y/n)?\n");
	
	scanf("%c",&yes);
	
	if(yes=='y'){
		
		fptr=fopen("rpg.save.txt", "r+");
	//fgets(name,100, fptr);
	fscanf(fptr,"%s %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",name,&play1Armour, &play1Weap,&frodoLevel, &frodoHp, &frodoXP,&orc1arm, &orc2arm, &orc3arm, &orc4arm, &orc5arm, &orc6arm, &orc7arm, &orc8arm, &orc1w , &orc2w , &orc3w , &orc4w , &orc5w , &orc6w , &orc7w , &orc8w , &orc1l, &orc2l, &orc3l, &orc4l, &orc5l, &orc6l, &orc7l, &orc8l, &orc1xp, &orc2xp, &orc3xp, &orc4xp, &orc5xp, &orc6xp, &orc7xp, &orc8xp);
	//printf("%s\n", name);
   //printf("Test: Name:%s Armour:%d Weapon:%d Level:%d HP:%d",name, play1Weap, play1Armour,play1Level, play1hp);
   }else{
       printf("What is your name?\n");
    scanf("%s", &name);

    //Ask user to input equiptment
    printf("\nList of available armors:\n0: cloth (AC=10)\n1: studded leather (AC=12)\n2: ring mail (AC=14)\n3: chain mail (AC=16)\n4: plate (AC=18)\n\nChoose %s's Armor (0~4):", name);
    scanf("%d", &play1Armour);
	printf("\nList of available weapons:\n0: dagger (damage=1d4)\n1: short sword (damage=1d6)\n2: long sword (damage=1d8)\n3: great sword (damage=2d6)\n4: great axe (damage=1d12)\n\nChoose %s's Weapon(0~4):", name);
    scanf("%d", &play1Weap);
	saveWeapon=play1Weap;
   }
	
} else {
    


	
    printf("What is your name?\n");
    scanf("%s", &name);

    //Ask user to input equiptment
    printf("\nList of available armors:\n0: cloth (AC=10)\n1: studded leather (AC=12)\n2: ring mail (AC=14)\n3: chain mail (AC=16)\n4: plate (AC=18)\n\nChoose %s's Armor (0~4):", name);
    scanf("%d", &play1Armour);
	printf("\nList of available weapons:\n0: dagger (damage=1d4)\n1: short sword (damage=1d6)\n2: long sword (damage=1d8)\n3: great sword (damage=2d6)\n4: great axe (damage=1d12)\n\nChoose %s's Weapon(0~4):", name);
    scanf("%d", &play1Weap);
	}
	
	
	
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
   
   
    
    if(play1Weap==0){
        play1WeapName="dagger";
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

    
   // printf("\nPlayer setting complete:\n[%s: hp=20, armor=%s, weapon=%s]\n", name, play1ArmName, play1WeapName, play2ArmName, play2WeapName);
    
    
    printf("All is peaceful in the land of Mordor.\nSauron and his minions are blissfully going about their business:\n");
    
    
    
	if(access( "rpg.save.txt", F_OK ) != -1){
		if(yes=='y'){
	frodoHp=play1hp;
	frodoLevel=play1Level;
	}}
    if(orc1arm==0){
        orc1armName="cloth";
        orc1AC=10;
    }
    if(orc1arm==1){
        orc1armName="studded leather";
        orc1AC=12;
    }
    if(orc1arm==2){
        orc1armName="ring mail";
        orc1AC=14;
    }
    if(orc1arm==3){
        orc1armName="chain mail";
        orc1AC=16;
    }
    if(orc1arm==4){
        orc1armName="plate";
        orc1AC=18;
    }
    
    if(orc1w==0){
        orc1wName="dagger";
    }
    if(orc1w==1){
        orc1wName="short sword";
    }
    if(orc1w==2){
        orc1wName="long sword";
    }
    if(orc1w==3){
        orc1wName="great sword";
    }
    if(orc1w==4){
        orc1wName="great axe";
    }
    if(orc2arm==0){
        orc2armName="cloth";
        orc2AC=10;
    }
    if(orc2arm==1){
        orc2armName="studded leather";
        orc2AC=12;

    }
    if(orc2arm==2){
        orc2armName="ring mail";
        orc2AC=14;

    }
    if(orc2arm==3){
        orc2armName="chain mail";
        orc2AC=16;

    }
    if(orc2arm==4){
        orc2armName="plate";
        orc2AC=18;

    }
    
    if(orc2w==0){
        orc2wName="dagger";
    }
    if(orc2w==1){
        orc2wName="short sword";
    }
    if(orc2w==2){
        orc2wName="long sword";
    }
    if(orc2w==3){
        orc2wName="great sword";
    }
    if(orc2w==4){
        orc2wName="great axe";
    }
    if(orc3arm==0){
        orc3armName="cloth";
        orc3AC=10;
    }
    if(orc3arm==1){
        orc3armName="studded leather";
        orc3AC=12;
    }
    if(orc3arm==2){
        orc3armName="ring mail";
        orc3AC=14;
    }
    if(orc3arm==3){
        orc3armName="chain mail";
        orc3AC=16;
    }
    if(orc3arm==4){
        orc3armName="plate";
        orc3AC=18;
    }
    
    if(orc3w==0){
        orc3wName="dagger";
    }
    if(orc3w==1){
        orc3wName="short sword";
    }
    if(orc3w==2){
        orc3wName="long sword";
    }
    if(orc3w==3){
        orc3wName="great sword";
    }
    if(orc3w==4){
        orc3wName="great axe";
    }
    
    
    if(orc4arm==0){
        orc4armName="cloth";
        orc4AC=10;
    }
    if(orc4arm==1){
        orc4armName="studded leather";
                orc4AC=12;

    }
    if(orc4arm==2){
        orc4armName="ring mail";
                orc4AC=14;

    }
    if(orc4arm==3){
        orc4armName="chain mail";
                orc4AC=16;

    }
    if(orc4arm==4){
        orc4armName="plate";
                orc4AC=18;

    }
    
    if(orc4w==0){
        orc4wName="dagger";
    }
    if(orc4w==1){
        orc4wName="short sword";
    }
    if(orc4w==2){
        orc4wName="long sword";
    }
    if(orc4w==3){
        orc4wName="great sword";
    }
    if(orc4w==4){
        orc4wName="great axe";
    }
    
    
    if(orc5arm==0){
        orc5armName="cloth";
                orc5AC=10;

    }
    if(orc5arm==1){
        orc5armName="studded leather";
        orc5AC=12;
    }
    if(orc5arm==2){
        orc5armName="ring mail";
        orc5AC=14;
    }
    if(orc5arm==3){
        orc5armName="chain mail";
        orc5AC=16;
    }
    if(orc5arm==4){
        orc5armName="plate";
        orc5AC=18;
    }
    
    if(orc5w==0){
        orc5wName="dagger";
    }
    if(orc5w==1){
        orc5wName="short sword";
    }
    if(orc5w==2){
        orc5wName="long sword";
    }
    if(orc5w==3){
        orc5wName="great sword";
    }
    if(orc5w==4){
        orc5wName="great axe";
    }
    
	if(orc6arm==0){
        orc6armName="cloth";
        orc6AC=10;
    }
    if(orc6arm==1){
        orc6armName="studded leather";
        orc6AC=12;
    }
    if(orc6arm==2){
        orc6armName="ring mail";
        orc6AC=14;
    }
    if(orc6arm==3){
        orc6armName="chain mail";
        orc6AC=16;
    }
    if(orc6arm==4){
        orc6armName="plate";
        orc6AC=18;
    }
    
    if(orc6w==0){
        orc6wName="dagger";
    }
    if(orc6w==1){
        orc6wName="short sword";
    }
    if(orc6w==2){
        orc6wName="long sword";
    }
    if(orc6w==3){
        orc6wName="great sword";
    }
    if(orc6w==4){
        orc6wName="great axe";
    }
	if(orc7arm==0){
        orc7armName="cloth";
        orc7AC=10;
    }
    if(orc7arm==1){
        orc7armName="studded leather";
        orc7AC=12;
    }
    if(orc7arm==2){
        orc7armName="ring mail";
        orc7AC=14;
    }
    if(orc7arm==3){
        orc7armName="chain mail";
        orc7AC=16;
    }
    if(orc7arm==4){
        orc7armName="plate";
        orc7AC=18;
    }
    
    if(orc7w==0){
        orc7wName="dagger";
    }
    if(orc7w==1){
        orc7wName="short sword";
    }
    if(orc7w==2){
        orc7wName="long sword";
    }
    if(orc7w==3){
        orc7wName="great sword";
    }
    if(orc7w==4){
        orc7wName="great axe";
    }if(orc8arm==0){
        orc8armName="cloth";
        orc8AC=10;
    }
    if(orc8arm==1){
        orc8armName="studded leather";
        orc8AC=12;
    }
    if(orc8arm==2){
        orc8armName="ring mail";
        orc8AC=14;
    }
    if(orc8arm==3){
        orc8armName="chain mail";
        orc8AC=16;
    }
    if(orc8arm==4){
        orc8armName="plate";
        orc8AC=18;
    }
    
    if(orc8w==0){
        orc8wName="dagger";
    }
    if(orc8w==1){
        orc8wName="short sword";
    }
    if(orc8w==2){
        orc8wName="long sword";
    }
    if(orc8w==3){
        orc8wName="great sword";
    }
    if(orc8w==4){
        orc8wName="great axe";
    }
	sauronAC=18;
	gollumAC=10;

    
    printf("0: [Sauron: hp=115, armor=plate, weapon=great axe, level=20, xp=1048576000]\n");
    printf("1: [Orc 1: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc1hp, orc1armName, orc1wName, orc1l, orc1xp);
    printf("2: [Orc 2: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc2hp, orc2armName, orc2wName, orc2l, orc2xp);
    printf("3: [Orc 3: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc3hp, orc3armName, orc3wName, orc3l, orc3xp);
    printf("4: [Orc 4: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc4hp, orc4armName, orc4wName, orc4l, orc4xp);
    printf("5: [Orc 5: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc5hp, orc5armName, orc5wName, orc5l, orc5xp);
    printf("6: [Orc 6: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc6hp, orc6armName, orc6wName, orc6l, orc6xp);
    printf("7: [Orc 7: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc7hp, orc7armName, orc7wName, orc7l, orc7xp);
    printf("8: [Orc 8: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc8hp, orc8armName, orc8wName, orc8l, orc8xp);
    printf("9: [Gollum: hp=10, armor=cloth, weapon=dagger, level=1, xp=2000]");
    printf("\nAlso at the scene are some adventurers looking for trouble:");
    printf("\n[%s: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]", name, frodoHp, play1ArmName, play1WeapName, frodoLevel, frodoXP);
    
	char comm[50];
		char comm2[50];

    int check;
    while(1==1){
    printf("\ncommand >> ");

   // scanf("%s%s", comm, comm2);
  
   //printf("\n%s", comm2);
	scanf("%s", comm);
	
	int result;
	 result=strcmp(comm, "fight");
	 
	int D20;
//	char check= comm[(strlen(comm)-1)];
//	printf("%c", check);
//printf("\n%d", check);

    char *play2name;
    int enemy;
    if(result==0){
		
	//	printf("Who would you like to fight? (enter number of enemy)\n");
		scanf("%d", &enemy);
        int play2XP;
        play1HP=20;
        if(enemy==0){
        play2HP=sauronhp;
        play2Weap=sauronw;
        play2AC=sauronAC;
        play2name="Sauron";
        play2WeapName="great axe";
        play2ArmName="plate";
        play2XP=1048576000;
		play2Armour=4;
        }
        if(enemy==1){
        play2HP=orc1hp;
        play2Weap=orc1w;
        play2AC=orc1AC;
        play2name="Orc 1";
        play2WeapName=orc1wName;
        play2ArmName=orc1armName;
        play2XP=orc1xp;
		play2Armour=orc1arm;
        }
        if(enemy==2){
        play2HP=orc2hp;
        play2Weap=orc2w;
        play2AC=orc2AC;
         play2name="Orc 2";
         play2WeapName=orc2wName;
        play2ArmName=orc2armName;
        play2XP=orc2xp;
		play2Armour=orc2arm;
        }
        if(enemy==3){
        play2HP=orc3hp;
        play2Weap=orc3w;
        play2AC=orc3AC;
         play2name="Orc 3";
         play2WeapName=orc3wName;
        play2ArmName=orc3armName;
        play2XP=orc3xp;
		play2Armour=orc3arm;
        }
        if(enemy==4){
        play2HP=orc4hp;
        play2Weap=orc4w;
        play2AC=orc4AC;
         play2name="Orc 4";
         play2WeapName=orc4wName;
        play2ArmName=orc4armName;
        play2XP=orc4xp;
		play2Armour=orc4arm;
        }
        if(enemy==5){
        play2HP=orc5hp;
        play2Weap=orc5w;
        play2AC=orc5AC;
         play2name="Orc 5";
         play2WeapName=orc5wName;
        play2ArmName=orc5armName;
        play2XP=orc5xp;
		play2Armour=orc5arm;
        }
        if(enemy==6){
        play2HP=orc6hp;
        play2Weap=orc6w;
        play2AC=orc6AC;
         play2name="Orc 6";
         play2WeapName=orc6wName;
        play2ArmName=orc6armName;
        play2XP=orc6xp;
		play2Armour=orc6arm;
        }
        if(enemy==7){
        play2HP=orc7hp;
        play2Weap=orc7w;
        play2AC=orc7AC;
         play2name="Orc 7";
         play2WeapName=orc7wName;
        play2ArmName=orc7armName;
        play2XP=orc7xp;
		play2Armour=orc7arm;
        }
        if(enemy==8){
        play2HP=orc8hp;
        play2Weap=orc8w;
        play2AC=orc8AC;
         play2name="Orc 8";
         play2WeapName=orc8wName;
        play2ArmName=orc8armName;
        play2XP=orc8xp;
		play2Armour=orc8arm;
        }
        if(enemy==9){
        play2HP=10;
        play2Weap=0;
        play2AC=10;
         play2name="Gollum";
         play2WeapName="dagger";
        play2ArmName="cloth";
        play2XP=gollumxp;
		play2Armour=0;
        }
        
        
        
	int i=0;
        for(; ((play1HP>0) && (play2HP>0)); i++){
          //  printf("\n----- Round %d ------\n", i);
            
            //Player 1 Attacks
            //Attack Roll:
            
            
            D20 = damage(20);
            
                if(D20>=play2AC){
                    int dam=0;
                    //Damage Roll
                    
                    
       int dam1, dam2;
    
    
    if(play1Weap==0){
        dam=damage(4);
    }
    else if(play1Weap==1){
        dam=damage(6);
    }
    else if(play1Weap==2){
        dam=damage(8);
    }
    else if(play1Weap==3){
        dam1 = damage(6);
        dam2 = damage(6);
        dam=dam1+dam2;
    }
    else if(play1Weap==4){
        dam = damage(12);
          }
                    
                   // dam = damage(play1Weap);
                    printf("%s hits %s for %d damage (attack roll %d)\n", name, play2name, dam, D20);
                    play2HP=play2HP-dam;
                }else{
                    printf("%s misses %s (attack roll %d)\n", name, play2name, D20);
                }
                
            //Player 2 Attacts
            D20 = damage(20);
            int dam=0;
                if(D20>=play2AC){
                    
                    int dam1, dam2;
    
    if(play2Weap==0){
        dam=damage(4);
    }
    else if(play2Weap==1){
        dam=damage(6);
    }
    else if(play2Weap==2){
        dam=damage(8);
    }
    else if(play2Weap==3){
        dam1 = damage(6);
        dam2 = damage(6);
        dam=dam1+dam2;
    }
    else if(play2Weap==4){
        dam = damage(12);
          }
                    
                    //dam2 = damage(play2Weap);
                    printf("%s hits %s for %d damage (attack roll %d)\n",play2name,name, dam, D20);
                    play1HP=play1HP-dam;
                }else{
                    printf("%s misses %s (attack roll %d)\n",play2name, name, D20);
                }
            
            
            //printf("[Player 1: hp=%d, armor=%s, weapon=%s]\n[Player 2: hp=%d, armor=%s, weapon=%s]", play1HP, play1ArmName, play1WeapName, play2HP, play2ArmName, play2WeapName);
            
        }
        
         if(play1HP<play2HP){
             printf("\n%s is killed by %s.\nRespawning %s...", name, play2name,name);
             frodoXP=2000*pow(2, frodoLevel);
			 frodoHp=20+(frodoLevel-1)*5;
			 int pretry=2000, try1=2000*pow(2, 1), try2=2000*pow(2, 2), try3= 2000*pow(2, 3), try4=2000*pow(2, 4);
                int try5=2000*pow(2, 5);
                int try6=2000*pow(2, 6);
                int try7=2000*pow(2, 7);
                int try8=2000*pow(2, 8);
                int try9=2000*pow(2, 9);
                int try10=2000*pow(2, 10);
                int try11=2000*pow(2, 11);
                int try12=2000*pow(2, 12);
                int try13=2000*pow(2, 13);
                int try14=2000*pow(2, 14);
                int try15=2000*pow(2, 15);
                int try16=2000*pow(2, 16);
                int try17=2000*pow(2, 17);
                int try18=2000*pow(2, 18);
                int try19=2000*pow(2, 19);
                double try20=2000*pow(2, 20);
                double try21=2000*pow(2, 21);
                double try22=2000*pow(2, 22);
                double try23=2000*pow(2, 23);
                double try24=2000*pow(2, 24);
                double try25=2000*pow(2, 25);
                double try26=2000*pow(2, 26);
				
				 if(frodoXP>=pretry){
					frodoLevel=0;
				 }
                 if(frodoXP>=try1){
                     frodoLevel=1;
                 }
                 if(frodoXP>=try2){
                     frodoLevel=2;
                 }
                 if(frodoXP>=try3){
                     frodoLevel=3;
                 }
                 if(frodoXP>=try4){
                     frodoLevel=4;
                 }
                 if(frodoXP>=try5){
                     frodoLevel=5;
                 }
                 if(frodoXP>=try6){
                     frodoLevel=6;
                 }
                 if(frodoXP>=try7){
                     frodoLevel=7;
                 }
                 if(frodoXP>=try8){
                     frodoLevel=8;
                 }
                 if(frodoXP>=try9){
                     frodoLevel=9;
                 }
                 if(frodoXP>=try10){
                     frodoLevel=10;
                 }
                 if(frodoXP>=try11){
                     frodoLevel=11;
                 }
                 if(frodoXP>=try12){
                     frodoLevel=12;
                 }
                 if(frodoXP>=try13){
                     frodoLevel=13;
                 }
                 if(frodoXP>=try14){
                     frodoLevel=14;
                 }
                 if(frodoXP>=try15){
                     frodoLevel=15;
                 }
                 if(frodoXP>=try16){
                     frodoLevel=16;
                 }
                 if(frodoXP>=try17){
                     frodoLevel=17;
                 }
                 if(frodoXP>=try18){
                     frodoLevel=18;
                 }
                 if(frodoXP>=try19){
                     frodoLevel=19;
                 }
                 if(frodoXP>=try20){
                     frodoLevel=20;
                 }
                 if(frodoXP>=try21){
                     frodoLevel=21;
                 }
                 if(frodoXP>=try22){
                     frodoLevel=22;
                 }
                 if(frodoXP>=try23){
                     frodoLevel=23;
                 }
                 if(frodoXP>=try24){
                     frodoLevel=24;
                 }
                 if(frodoXP>=try25){
                     frodoLevel=25;
                 }
                 if(frodoXP>=try26){
                     frodoLevel=26;
                 }
				 frodoLevel++;
             printf("\n[%s: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]", name, frodoHp, play1ArmName, play1WeapName, frodoLevel, frodoXP);

         }else if(play1HP>play2HP){
             printf("\n%s is killed by %s.\n", play2name, name);
             char test1, test2;
                 printf("Get %s's %s, exchanging %s's current armor %s (y/n)?\n", play2name, play2ArmName, name, play1ArmName);
                 scanf(" %c", &test1);
                 if(test1=='y'){
                     play1ArmName=play2ArmName;
                     play1Armour=play2Armour;
                     play1AC=play2AC;
                 }
                printf("Get %s's %s, exchanging %s's current weapon %s (y/n)?\n", play2name, play2WeapName, name, play1WeapName);
                scanf(" %c", &test2);
             if(test2=='y'){
                     play1WeapName=play2WeapName;
                     play1Weap=play2Weap;
                 }
                 
                 frodoXP=frodoXP+play2XP;
               
                int pretry=2000, try1=2000*pow(2, 1), try2=2000*pow(2, 2), try3= 2000*pow(2, 3), try4=2000*pow(2, 4);
                int try5=2000*pow(2, 5);
                int try6=2000*pow(2, 6);
                int try7=2000*pow(2, 7);
                int try8=2000*pow(2, 8);
                int try9=2000*pow(2, 9);
                int try10=2000*pow(2, 10);
                int try11=2000*pow(2, 11);
                int try12=2000*pow(2, 12);
                int try13=2000*pow(2, 13);
                int try14=2000*pow(2, 14);
                int try15=2000*pow(2, 15);
                int try16=2000*pow(2, 16);
                int try17=2000*pow(2, 17);
                int try18=2000*pow(2, 18);
                int try19=2000*pow(2, 19);
                double try20=2000*pow(2, 20);
                double try21=2000*pow(2, 21);
                double try22=2000*pow(2, 22);
                double try23=2000*pow(2, 23);
                double try24=2000*pow(2, 24);
                double try25=2000*pow(2, 25);
                double try26=2000*pow(2, 26);
				
				 if(frodoXP>=pretry){
					frodoLevel=0;
				 }
                 if(frodoXP>=try1){
                     frodoLevel=1;
                 }
                 if(frodoXP>=try2){
                     frodoLevel=2;
                 }
                 if(frodoXP>=try3){
                     frodoLevel=3;
                 }
                 if(frodoXP>=try4){
                     frodoLevel=4;
                 }
                 if(frodoXP>=try5){
                     frodoLevel=5;
                 }
                 if(frodoXP>=try6){
                     frodoLevel=6;
                 }
                 if(frodoXP>=try7){
                     frodoLevel=7;
                 }
                 if(frodoXP>=try8){
                     frodoLevel=8;
                 }
                 if(frodoXP>=try9){
                     frodoLevel=9;
                 }
                 if(frodoXP>=try10){
                     frodoLevel=10;
                 }
                 if(frodoXP>=try11){
                     frodoLevel=11;
                 }
                 if(frodoXP>=try12){
                     frodoLevel=12;
                 }
                 if(frodoXP>=try13){
                     frodoLevel=13;
                 }
                 if(frodoXP>=try14){
                     frodoLevel=14;
                 }
                 if(frodoXP>=try15){
                     frodoLevel=15;
                 }
                 if(frodoXP>=try16){
                     frodoLevel=16;
                 }
                 if(frodoXP>=try17){
                     frodoLevel=17;
                 }
                 if(frodoXP>=try18){
                     frodoLevel=18;
                 }
                 if(frodoXP>=try19){
                     frodoLevel=19;
                 }
                 if(frodoXP>=try20){
                     frodoLevel=20;
                 }
                 if(frodoXP>=try21){
                     frodoLevel=21;
                 }
                 if(frodoXP>=try22){
                     frodoLevel=22;
                 }
                 if(frodoXP>=try23){
                     frodoLevel=23;
                 }
                 if(frodoXP>=try24){
                     frodoLevel=24;
                 }
                 if(frodoXP>=try25){
                     frodoLevel=25;
                 }
                 if(frodoXP>=try26){
                     frodoLevel=26;
                 }
				 frodoLevel++;
				 printf("%s is now level %d!\n", name, frodoLevel);
                 frodoHp=20+(frodoLevel-1)*5;
				 printf("[%s: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", name, frodoHp, play1ArmName, play1WeapName, frodoLevel, frodoXP);

				 if(enemy==1){
				 orc1arm=damage(4);
				 orc1w=damage(4);
				 orc1l=damage(frodoLevel);
				 if(orc1l==0){
					 while(orc1l==0){
					 orc1l=damage(frodoLevel);
				 }}
					 
				
                orc1hp=20+(orc1l-1)*5;
				orc1l--;
				orc1xp=2000*pow(2, orc1l);
				orc1l++;
				}
				 
				 if(enemy==2){
				 orc2arm=damage(4);
				 orc2w=damage(4);
				 orc2l=damage(frodoLevel);
				 if(orc2l==0){
					 while(orc2l==0){
					 orc2l=damage(frodoLevel);
					 }}
					  orc2hp=20+(orc2l-1)*5;
				orc2l--;
				orc2xp=2000*pow(2, orc2l);
				orc2l++;
				 }
				 if(enemy==3){
				 orc3arm=damage(4);
				 orc3w=damage(4);
				 orc3l=damage(frodoLevel);
				 if(orc3l==0){
					 while(orc3l==0){
					 orc3l=damage(frodoLevel);
					 }}
					  orc3hp=20+(orc3l-1)*5;
				orc3l--;
				orc3xp=2000*pow(2, orc3l);
				orc3l++;
				 }
				 if(enemy==4){
				 orc4arm=damage(4);
				 orc4w=damage(4);
				 orc4l=damage(frodoLevel);
				 if(orc4l==0){
					 while(orc4l==0){
					 orc4l=damage(frodoLevel);
					 }}
					  orc4hp=20+(orc4l-1)*5;
				orc4l--;
				orc4xp=2000*pow(2, orc4l);
				orc4l++;
				 }
				 if(enemy==5){
				 orc5arm=damage(4);
				 orc5w=damage(4);
				 orc5l=damage(frodoLevel);
				 if(orc5l==0){
					 while(orc5l==0){
					 orc5l=damage(frodoLevel);
					 }}
					  orc5hp=20+(orc5l-1)*5;
				orc5l--;
				orc5xp=2000*pow(2, orc5l);
				orc5l++;
				 }
				 if(enemy==6){
				 orc6arm=damage(4);
				 orc6w=damage(4);
				 orc6l=damage(frodoLevel);
				 if(orc6l==0){
					 while(orc6l==0){
					 orc6l=damage(frodoLevel);
					 }}
					  orc6hp=20+(orc6l-1)*5;
				orc6l--;
				orc6xp=2000*pow(2, orc6l);
				orc6l++;
				 }
				 if(enemy==7){
				 orc7arm=damage(4);
				 orc7w=damage(4);
				 orc7l=damage(frodoLevel);
				 if(orc7l==0){
					 while(orc7l==0){
					 orc7l=damage(frodoLevel);
					 }}
					  orc7hp=20+(orc7l-1)*5;
				orc7l--;
				orc7xp=2000*pow(2, orc7l);
				orc7l++;
				 }
				 if(enemy==8){
				 orc8arm=damage(4);
				 orc8w=damage(4);
				 orc8l=damage(frodoLevel);
				 if(orc8l==0){
					 while(orc8l==0){
					 orc8l=damage(frodoLevel);
					 }}
					  orc8hp=20+(orc8l-1)*5;
				orc8l--;
				orc8xp=2000*pow(2, orc8l);
				orc8l++;
				 }
				 
				 
				 if(orc1arm==0){
        orc1armName="cloth";
        orc1AC=10;
    }
	
    if(orc1arm==1){
        orc1armName="studded leather";
        orc1AC=12;
    }
    if(orc1arm==2){
        orc1armName="ring mail";
        orc1AC=14;
    }
    if(orc1arm==3){
        orc1armName="chain mail";
        orc1AC=16;
    }
    if(orc1arm==4){
        orc1armName="plate";
        orc1AC=18;
    }
    
    if(orc1w==0){
        orc1wName="dagger";
    }
    if(orc1w==1){
        orc1wName="short sword";
    }
    if(orc1w==2){
        orc1wName="long sword";
    }
    if(orc1w==3){
        orc1wName="great sword";
    }
    if(orc1w==4){
        orc1wName="great axe";
    }
    if(orc2arm==0){
        orc2armName="cloth";
        orc2AC=10;
    }
    if(orc2arm==1){
        orc2armName="studded leather";
        orc2AC=12;

    }
    if(orc2arm==2){
        orc2armName="ring mail";
        orc2AC=14;

    }
    if(orc2arm==3){
        orc2armName="chain mail";
        orc2AC=16;

    }
    if(orc2arm==4){
        orc2armName="plate";
        orc2AC=18;

    }
    
    if(orc2w==0){
        orc2wName="dagger";
    }
    if(orc2w==1){
        orc2wName="short sword";
    }
    if(orc2w==2){
        orc2wName="long sword";
    }
    if(orc2w==3){
        orc2wName="great sword";
    }
    if(orc2w==4){
        orc2wName="great axe";
    }
    if(orc3arm==0){
        orc3armName="cloth";
        orc3AC=10;
    }
    if(orc3arm==1){
        orc3armName="studded leather";
        orc3AC=12;
    }
    if(orc3arm==2){
        orc3armName="ring mail";
        orc3AC=14;
    }
    if(orc3arm==3){
        orc3armName="chain mail";
        orc3AC=16;
    }
    if(orc3arm==4){
        orc3armName="plate";
        orc3AC=18;
    }
    
    if(orc3w==0){
        orc3wName="dagger";
    }
    if(orc3w==1){
        orc3wName="short sword";
    }
    if(orc3w==2){
        orc3wName="long sword";
    }
    if(orc3w==3){
        orc3wName="great sword";
    }
    if(orc3w==4){
        orc3wName="great axe";
    }
    
    
    if(orc4arm==0){
        orc4armName="cloth";
        orc4AC=10;
    }
    if(orc4arm==1){
        orc4armName="studded leather";
                orc4AC=12;

    }
    if(orc4arm==2){
        orc4armName="ring mail";
                orc4AC=14;

    }
    if(orc4arm==3){
        orc4armName="chain mail";
                orc4AC=16;

    }
    if(orc4arm==4){
        orc4armName="plate";
                orc4AC=18;

    }
    
    if(orc4w==0){
        orc4wName="dagger";
    }
    if(orc4w==1){
        orc4wName="short sword";
    }
    if(orc4w==2){
        orc4wName="long sword";
    }
    if(orc4w==3){
        orc4wName="great sword";
    }
    if(orc4w==4){
        orc4wName="great axe";
    }
    
    
    if(orc5arm==0){
        orc5armName="cloth";
                orc5AC=10;

    }
    if(orc5arm==1){
        orc5armName="studded leather";
        orc5AC=12;
    }
    if(orc5arm==2){
        orc5armName="ring mail";
        orc5AC=14;
    }
    if(orc5arm==3){
        orc5armName="chain mail";
        orc5AC=16;
    }
    if(orc5arm==4){
        orc5armName="plate";
        orc5AC=18;
    }
    
    if(orc5w==0){
        orc5wName="dagger";
    }
    if(orc5w==1){
        orc5wName="short sword";
    }
    if(orc5w==2){
        orc5wName="long sword";
    }
    if(orc5w==3){
        orc5wName="great sword";
    }
    if(orc5w==4){
        orc5wName="great axe";
    }
    
	if(orc6arm==0){
        orc6armName="cloth";
        orc6AC=10;
    }
    if(orc6arm==1){
        orc6armName="studded leather";
        orc6AC=12;
    }
    if(orc6arm==2){
        orc6armName="ring mail";
        orc6AC=14;
    }
    if(orc6arm==3){
        orc6armName="chain mail";
        orc6AC=16;
    }
    if(orc6arm==4){
        orc6armName="plate";
        orc6AC=18;
    }
    
    if(orc6w==0){
        orc6wName="dagger";
    }
    if(orc6w==1){
        orc6wName="short sword";
    }
    if(orc6w==2){
        orc6wName="long sword";
    }
    if(orc6w==3){
        orc6wName="great sword";
    }
    if(orc6w==4){
        orc6wName="great axe";
    }
	if(orc7arm==0){
        orc7armName="cloth";
        orc7AC=10;
    }
    if(orc7arm==1){
        orc7armName="studded leather";
        orc7AC=12;
    }
    if(orc7arm==2){
        orc7armName="ring mail";
        orc7AC=14;
    }
    if(orc7arm==3){
        orc7armName="chain mail";
        orc7AC=16;
    }
    if(orc7arm==4){
        orc7armName="plate";
        orc7AC=18;
    }
    
    if(orc7w==0){
        orc7wName="dagger";
    }
    if(orc7w==1){
        orc7wName="short sword";
    }
    if(orc7w==2){
        orc7wName="long sword";
    }
    if(orc7w==3){
        orc7wName="great sword";
    }
    if(orc7w==4){
        orc7wName="great axe";
    }if(orc8arm==0){
        orc8armName="cloth";
        orc8AC=10;
    }
    if(orc8arm==1){
        orc8armName="studded leather";
        orc8AC=12;
    }
    if(orc8arm==2){
        orc8armName="ring mail";
        orc8AC=14;
    }
    if(orc8arm==3){
        orc8armName="chain mail";
        orc8AC=16;
    }
    if(orc8arm==4){
        orc8armName="plate";
        orc8AC=18;
    }
    
    if(orc8w==0){
        orc8wName="dagger";
    }
    if(orc8w==1){
        orc8wName="short sword";
    }
    if(orc8w==2){
        orc8wName="long sword";
    }
    if(orc8w==3){
        orc8wName="great sword";
    }
    if(orc8w==4){
        orc8wName="great axe";
    }
	
	
	gollumhp=10;

	if(enemy==0){
	printf("Respawning %s...", play2name);
	
	printf("\n[%s: hp=%d, armor=plate, weapon=great axe, level=%d, xp=%d]", play2name, sauronhp, sauronl, sauronxp);
	}
	if(enemy==1){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name, orc1hp, orc1wName, orc1armName, orc1l, orc1xp);
	}
	if(enemy==2){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc2hp, orc2wName, orc2armName, orc2l, orc2xp);
	}
	if(enemy==3){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc3hp, orc3wName, orc3armName, orc3l, orc3xp);
	}
	if(enemy==4){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc4hp, orc4wName, orc4armName, orc4l, orc4xp);
	}
	if(enemy==5){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc5hp, orc5wName, orc5armName, orc5l, orc5xp);
	}
	if(enemy==6){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc6hp, orc6wName, orc6armName, orc6l, orc6xp);
	}
	if(enemy==7){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc7hp, orc7wName, orc7armName, orc7l, orc7xp);
	}
	if(enemy==8){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc8hp, orc8wName, orc8armName, orc8l, orc8xp);
	}
	if(enemy==9){
	printf("Respawning %s...", play2name);
	printf("\n[Gollum: hp=10, armor=cloth, weapon=dagger, level=1, xp=2000]");
	}
         }else{
             printf("\n\n%s and %s kill eachother.\n", name, play2name);
             
             
			 printf("Respawning %s...", name, play2name,name);
             frodoXP=2000*pow(2, frodoLevel);
			 frodoHp=20+(frodoLevel-1)*5;
             printf("\n[%s: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", name, frodoHp, play1ArmName, play1WeapName, frodoLevel, frodoXP);

			 gollumhp=10;

	if(enemy==0){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, armor=plate, weapon=great axe, level=%d, xp=%d]", play2name, sauronhp, sauronl, sauronxp);
	}
	if(enemy==1){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name, orc1hp, orc1wName, orc1armName, orc1l, orc1xp);
	}
	if(enemy==2){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc2hp, orc2wName, orc2armName, orc2l, orc2xp);
	}
	if(enemy==3){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc3hp, orc3wName, orc3armName, orc3l, orc3xp);
	}
	if(enemy==4){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc4hp, orc4wName, orc4armName, orc4l, orc4xp);
	}
	if(enemy==5){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc5hp, orc5wName, orc5armName, orc5l, orc5xp);
	}
	if(enemy==6){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc6hp, orc6wName, orc6armName, orc6l, orc6xp);
	}
	if(enemy==7){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc7hp, orc7wName, orc7armName, orc7l, orc7xp);
	}
	if(enemy==8){
	printf("Respawning %s...", play2name);
	printf("\n[%s: hp=%d, weapon=%s, armor=%s, level=%d, xp=%d]", play2name,orc8hp, orc8wName, orc8armName, orc8l, orc8xp);
	}
	if(enemy==9){
	printf("Respawning %s...", play2name);
	printf("\n[Gollum: hp=10, armor=cloth, weapon=dagger, level=1, xp=2000]");
	}
			 
			 
         }
        int result=1;
        
    }
     result=strcmp(comm, "stats");
    if(result==0){
        
    printf("\n[%s: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]", name, frodoHp, play1ArmName, play1WeapName, frodoLevel, frodoXP);

int result=1;
        
    }
    result=strcmp(comm, "look");
    if(result==0){
        
	    printf("\nAll is peaceful in the land of Mordor.\nSauron and his minions are blissfully going about their business:\n");

        printf("0: [Sauron: hp=115, armor=plate, weapon=great axe, level=20, xp=1048576000]\n");
    printf("1: [Orc 1: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc1hp, orc1armName, orc1wName, orc1l, orc1xp);
    printf("2: [Orc 2: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc2hp, orc2armName, orc2wName, orc2l, orc2xp);
    printf("3: [Orc 3: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc3hp, orc3armName, orc3wName, orc3l, orc3xp);
    printf("4: [Orc 4: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc4hp, orc4armName, orc4wName, orc4l, orc4xp);
    printf("5: [Orc 5: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc5hp, orc5armName, orc5wName, orc5l, orc5xp);
    printf("6: [Orc 6: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc6hp, orc6armName, orc6wName, orc6l, orc6xp);
    printf("7: [Orc 7: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc7hp, orc7armName, orc7wName, orc7l, orc7xp);
    printf("8: [Orc 8: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc8hp, orc8armName, orc8wName, orc8l, orc8xp);
    printf("9: [Gollum: hp=10, armor=cloth, weapon=dagger, level=1, xp=2000]");
    printf("\nAlso at the scene are some adventurers looking for trouble:");
    printf("\n[%s: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]", name, frodoHp, play1ArmName, play1WeapName, frodoLevel, frodoXP);
    int result=1;
    }
    
     result=strcmp(comm, "quit");
    if(result==0){
        savefunc(result);
        return 0;
    }
    
    }
    return 0;
}

void earthquake(int sig){
	printf("\nEARTHQUAKE!!!\n");
		sauronhp=-20;
		orc1hp=-20;
		orc2hp=-20;
		orc3hp=-20;
		orc5hp=-20;
		orc4hp=-20;
		orc6hp=-20;
		orc7hp=-20;
		orc8hp=-20;
		gollumhp=-20;
		
		if(sauronhp<=0){
			
		}else{
			printf("Sauron suffers -20 damage but survives.\n");
		}
		if(orc1hp<=0){
			printf("Orc 1 suffers -20 damage and dies. Respawning ...\n");
			orc1arm=damage(4);
				 orc1w=damage(4);
				 orc1l=damage(frodoLevel);
				 if(orc1l==0){
					 while(orc1l==0){
					 orc1l=damage(frodoLevel);
				 }}
					 
				
                orc1hp=20+(orc1l-1)*5;
				orc1l--;
				orc1xp=2000*pow(2, orc1l);
				orc1l++;
		
	if(orc1arm==0){
        orc1armName="cloth";
        orc1AC=10;
    }
	
    if(orc1arm==1){
        orc1armName="studded leather";
        orc1AC=12;
    }
    if(orc1arm==2){
        orc1armName="ring mail";
        orc1AC=14;
    }
    if(orc1arm==3){
        orc1armName="chain mail";
        orc1AC=16;
    }
    if(orc1arm==4){
        orc1armName="plate";
        orc1AC=18;
    }
    
    if(orc1w==0){
        orc1wName="dagger";
    }
    if(orc1w==1){
        orc1wName="short sword";
    }
    if(orc1w==2){
        orc1wName="long sword";
    }
    if(orc1w==3){
        orc1wName="great sword";
    }
    if(orc1w==4){
        orc1wName="great axe";
    }
		
		printf("[Orc 1: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc1hp, orc1armName, orc1wName, orc1l, orc1xp);

			
					}else{
			printf("Orc 1 suffers -20 damage but survives.\n");
		}
		if(orc2hp<=0){
			printf("Orc 2 suffers -20 damage and dies. Respawning ...\n");
		
			orc2arm=damage(4);
				 orc2w=damage(4);
				 orc2l=damage(frodoLevel);
				 if(orc2l==0){
					 while(orc2l==0){
					 orc2l=damage(frodoLevel);
				 }}
					 
				
                orc2hp=20+(orc2l-1)*5;
				orc2l--;
				orc2xp=2000*pow(2, orc2l);
				orc2l++;
		
	if(orc2arm==0){
        orc2armName="cloth";
        orc2AC=10;
    }
	
    if(orc2arm==1){
        orc2armName="studded leather";
        orc2AC=12;
    }
    if(orc2arm==2){
        orc2armName="ring mail";
        orc2AC=14;
    }
    if(orc2arm==3){
        orc2armName="chain mail";
        orc2AC=16;
    }
    if(orc2arm==4){
        orc2armName="plate";
        orc2AC=18;
    }
    
    if(orc2w==0){
        orc2wName="dagger";
    }
    if(orc2w==1){
        orc2wName="short sword";
    }
    if(orc2w==2){
        orc2wName="long sword";
    }
    if(orc2w==3){
        orc2wName="great sword";
    }
    if(orc2w==4){
        orc2wName="great axe";
    }
		
	printf("[Orc 2: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc2hp, orc2armName, orc2wName, orc2l, orc2xp);

		
		}else{
			printf("Orc 2 suffers -20 damage but survives.\n");
		}
		if(orc3hp<=0){
			printf("Orc 3 suffers -20 damage and dies. Respawning ...\n");
		orc3arm=damage(4);
				 orc3w=damage(4);
				 orc3l=damage(frodoLevel);
				 if(orc3l==0){
					 while(orc3l==0){
					 orc3l=damage(frodoLevel);
				 }}
					 
				
                orc3hp=20+(orc3l-1)*5;
				orc3l--;
				orc3xp=2000*pow(2, orc3l);
				orc3l++;
		
	if(orc3arm==0){
        orc3armName="cloth";
        orc3AC=10;
    }
	
    if(orc3arm==1){
        orc3armName="studded leather";
        orc3AC=12;
    }
    if(orc3arm==2){
        orc3armName="ring mail";
        orc3AC=14;
    }
    if(orc3arm==3){
        orc3armName="chain mail";
        orc3AC=16;
    }
    if(orc3arm==4){
        orc3armName="plate";
        orc3AC=18;
    }
    
    if(orc3w==0){
        orc3wName="dagger";
    }
    if(orc3w==1){
        orc3wName="short sword";
    }
    if(orc3w==2){
        orc3wName="long sword";
    }
    if(orc3w==3){
        orc3wName="great sword";
    }
    if(orc3w==4){
        orc3wName="great axe";
    }
		
	printf("[Orc 3: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc3hp, orc3armName, orc3wName, orc3l, orc3xp);

		
		}else{
			printf("Orc 3 suffers -20 damage but survives.\n");
		}
		if(orc4hp<=0){
			printf("Orc 4 suffers -20 damage and dies. Respawning ...\n");
		orc4arm=damage(4);
				 orc4w=damage(4);
				 orc4l=damage(frodoLevel);
				 if(orc4l==0){
					 while(orc4l==0){
					 orc4l=damage(frodoLevel);
				 }}
					 
				
                orc4hp=20+(orc4l-1)*5;
				orc4l--;
				orc4xp=2000*pow(2, orc4l);
				orc4l++;
		
	if(orc4arm==0){
        orc4armName="cloth";
        orc4AC=10;
    }
	
    if(orc4arm==1){
        orc4armName="studded leather";
        orc4AC=12;
    }
    if(orc4arm==2){
        orc4armName="ring mail";
        orc4AC=14;
    }
    if(orc4arm==3){
        orc4armName="chain mail";
        orc4AC=16;
    }
    if(orc4arm==4){
        orc4armName="plate";
        orc4AC=18;
    }
    
    if(orc4w==0){
        orc4wName="dagger";
    }
    if(orc4w==1){
        orc4wName="short sword";
    }
    if(orc4w==2){
        orc4wName="long sword";
    }
    if(orc4w==3){
        orc4wName="great sword";
    }
    if(orc4w==4){
        orc4wName="great axe";
    }
		
	printf("[Orc 4: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc4hp, orc4armName, orc4wName, orc4l, orc4xp);

		
		}else{
			printf("Orc 4 suffers -20 damage but survives.\n");
		}
		if(orc5hp<=0){
			printf("Orc 5 suffers -20 damage and dies. Respawning ...\n");
		orc5arm=damage(4);
				 orc5w=damage(4);
				 orc5l=damage(frodoLevel);
				 if(orc5l==0){
					 while(orc5l==0){
					 orc5l=damage(frodoLevel);
				 }}
					 
				
                orc5hp=20+(orc5l-1)*5;
				orc5l--;
				orc5xp=2000*pow(2, orc5l);
				orc5l++;
		
	if(orc5arm==0){
        orc5armName="cloth";
        orc5AC=10;
    }
	
    if(orc5arm==1){
        orc5armName="studded leather";
        orc5AC=12;
    }
    if(orc5arm==2){
        orc5armName="ring mail";
        orc5AC=14;
    }
    if(orc5arm==3){
        orc5armName="chain mail";
        orc5AC=16;
    }
    if(orc5arm==4){
        orc5armName="plate";
        orc5AC=18;
    }
    
    if(orc5w==0){
        orc5wName="dagger";
    }
    if(orc5w==1){
        orc5wName="short sword";
    }
    if(orc5w==2){
        orc5wName="long sword";
    }
    if(orc5w==3){
        orc5wName="great sword";
    }
    if(orc5w==4){
        orc5wName="great axe";
    }
		
	printf("[Orc 5: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc5hp, orc5armName, orc5wName, orc5l, orc5xp);

		
		}else{
			printf("Orc 5 suffers -20 damage but survives.\n");
		
		}
		if(orc6hp<=0){
			printf("Orc 6 suffers -20 damage and dies. Respawning ...\n");
		orc6arm=damage(4);
				 orc6w=damage(4);
				 orc6l=damage(frodoLevel);
				 if(orc6l==0){
					 while(orc6l==0){
					 orc6l=damage(frodoLevel);
				 }}
					 
				
                orc6hp=20+(orc6l-1)*5;
				orc6l--;
				orc6xp=2000*pow(2, orc6l);
				orc6l++;
		
	if(orc6arm==0){
        orc6armName="cloth";
        orc6AC=10;
    }
	
    if(orc6arm==1){
        orc6armName="studded leather";
        orc6AC=12;
    }
    if(orc6arm==2){
        orc6armName="ring mail";
        orc6AC=14;
    }
    if(orc6arm==3){
        orc6armName="chain mail";
        orc6AC=16;
    }
    if(orc6arm==4){
        orc6armName="plate";
        orc6AC=18;
    }
    
    if(orc6w==0){
        orc6wName="dagger";
    }
    if(orc6w==1){
        orc6wName="short sword";
    }
    if(orc6w==2){
        orc6wName="long sword";
    }
    if(orc6w==3){
        orc6wName="great sword";
    }
    if(orc6w==4){
        orc6wName="great axe";
    }
		
	printf("[Orc 6: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc6hp, orc6armName, orc6wName, orc6l, orc6xp);

		
		}else{
			printf("Orc 6 suffers -20 damage but survives.\n");
		}
		if(orc7hp<=0){
			printf("Orc 7 suffers -20 damage and dies. Respawning ...\n");
		orc7arm=damage(4);
				 orc7w=damage(4);
				 orc7l=damage(frodoLevel);
				 if(orc7l==0){
					 while(orc7l==0){
					 orc7l=damage(frodoLevel);
				 }}
					 
				
                orc7hp=20+(orc7l-1)*5;
				orc7l--;
				orc7xp=2000*pow(2, orc7l);
				orc7l++;
		
	if(orc7arm==0){
        orc7armName="cloth";
        orc7AC=10;
    }
	
    if(orc7arm==1){
        orc7armName="studded leather";
        orc7AC=12;
    }
    if(orc7arm==2){
        orc7armName="ring mail";
        orc7AC=14;
    }
    if(orc7arm==3){
        orc7armName="chain mail";
        orc7AC=16;
    }
    if(orc7arm==4){
        orc7armName="plate";
        orc7AC=18;
    }
    
    if(orc7w==0){
        orc7wName="dagger";
    }
    if(orc7w==1){
        orc7wName="short sword";
    }
    if(orc7w==2){
        orc7wName="long sword";
    }
    if(orc7w==3){
        orc7wName="great sword";
    }
    if(orc7w==4){
        orc7wName="great axe";
    }
		
	printf("[Orc 7: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc7hp, orc7armName, orc7wName, orc7l, orc7xp);

		
		}else{
			printf("Orc 7 suffers -20 damage but survives.\n");
		}
		if(orc8hp<=0){
			printf("Orc 8 suffers -20 damage and dies. Respawning ...\n");
		orc8arm=damage(4);
				 orc8w=damage(4);
				 orc8l=damage(frodoLevel);
				 if(orc8l==0){
					 while(orc8l==0){
					 orc8l=damage(frodoLevel);
				 }}
					 
				
                orc8hp=20+(orc8l-1)*5;
				orc8l--;
				orc8xp=2000*pow(2, orc8l);
				orc8l++;
		
	if(orc8arm==0){
        orc8armName="cloth";
        orc8AC=10;
    }
	
    if(orc8arm==1){
        orc8armName="studded leather";
        orc8AC=12;
    }
    if(orc8arm==2){
        orc8armName="ring mail";
        orc8AC=14;
    }
    if(orc8arm==3){
        orc8armName="chain mail";
        orc8AC=16;
    }
    if(orc8arm==4){
        orc8armName="plate";
        orc8AC=18;
    }
    
    if(orc8w==0){
        orc8wName="dagger";
    }
    if(orc8w==1){
        orc8wName="short sword";
    }
    if(orc8w==2){
        orc8wName="long sword";
    }
    if(orc8w==3){
        orc8wName="great sword";
    }
    if(orc8w==4){
        orc8wName="great axe";
    }
		
	printf("[Orc 8: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", orc8hp, orc8armName, orc8wName, orc8l, orc8xp);

		
		}else{
			printf("Orc 8 suffers -20 damage but survives.\n");
		}
		if(gollumhp<=0){
			printf("Gollum suffers -20 damage and dies. Respawning ...\n");
			gollumhp=10;
			printf("[Gollum: hp=10, armor=cloth, weapon=dagger, level=1, xp=2000]\n");
		}else{
			
		}
		if(frodoHp<=0){
			printf("%s suffers -20 damage and dies. Respawning ...\n",name);
			frodoXP=2000*pow(2, frodoLevel);
			 frodoHp=20+(frodoLevel-1)*5;
		printf("[%s: hp=%d, armor=%s, weapon=%s, level=%d, xp=%d]\n", name, frodoHp, play1ArmName, play1WeapName, frodoLevel, frodoXP);
		}else{
			printf("%s suffers -20 damage but survives.\n",name);
		
	}
	
}
void savefunc(int input){
fptr = fopen("rpg.save.txt","w");
		//fprintf(fptr,"%s", name);
		
		fprintf(fptr,"%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",name,play1Armour, saveWeapon, frodoLevel, frodoHp, frodoXP,orc1arm, orc2arm, orc3arm, orc4arm, orc5arm, orc6arm, orc7arm, orc8arm, orc1w , orc2w , orc3w , orc4w , orc5w , orc6w , orc7w , orc8w , orc1l, orc2l, orc3l, orc4l, orc5l, orc6l, orc7l, orc8l, orc1xp, orc2xp, orc3xp, orc4xp, orc5xp, orc6xp, orc7xp, orc8xp);
		//fprintf(fptr,"%d",play1Armour);
		fclose(fptr);
}

//Function to get randomized values for dice rolls 
int damage(int weap){
    
    
  
    
   // int finalDamage= rand() % weap + 1;
    

     char randomNumber = (char) weap;
	 
    write(dice, &randomNumber, 1);
	
    read(dice, &randomNumber, 1);
    
    return (int) randomNumber;
   
   
    
  //  return finalDamage;
}

