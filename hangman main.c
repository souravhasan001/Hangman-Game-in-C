#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include<windows.h>
#include<MMsystem.h>

void gamefunction(char *wordingame, char *userwordingame, int words);
void userword(char *userwordingame,int words);
void figure(int wrong);
int main()
{
	system("color F5");
	int num=9;
	PlaySound(TEXT(":\\Monkeys-Spinning_2.wav"),NULL,SND_ASYNC);
	FILE *fptr;
	fptr = fopen("hangmanwords.txt","r");

	if(fptr== NULL)
	{
		printf("hangmanwords.txt couldn't found");
		return 0;
	}
	char readfile[500];

	while(!feof(fptr))
	{
		fgets(readfile, 300, fptr);
	}

	fclose(fptr);

	srand(time(NULL));

	int restartGame= 1;
	while(restartGame==1)
	{

    int level;
    printf("\t\t\t\t*\t*");
	printf("\t\t\t\t*\t*");
    printf("\t\t\t\t**\t**");
    printf("\t\t\t\t***\t***");
    printf("\t\t\t\t****\t****");
    printf("\t\t\t\t*****\t*****");
    printf("\t\t\t\t******\t******");
    printf("\t\t\t\t*******\t*******");
    printf("\t\t\t\t*******\t*******");
    printf("\t\t\t\t******\t******");
    printf("\t\t\t\t*****\t*****");
    printf("\t\t\t\t****\t****");
    printf("\t\t\t\t***\t***");
    printf("\t\t\t\t**\t**");
    printf("\t\t\t\t*\t*");
    printf("\t\t\t\t\t");

 printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
 printf("\n\t\t\t\t\t       >->o-] Hangman Game!");
 printf("\n\t\t\t\t         You have %d tries to try and guess.",num);

 printf("\n\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
 printf("\t\t\t\t*\t       Choose a game\t\t\t    *\n\t\t\t\t*\t    1.EASY(Six Letters Game)\t\t    *\n\t\t\t\t*\t    2.MEDIUME(Seven Letters Game)\t    *\n\t\t\t\t*\t    3.HARD(Random letters)\t\t    *");
 printf("\n\t\t\t\t*****************************************************");
 printf("\n\t\t\t\t\t    Enter level :");
 scanf("%d", &level);

while(level != 1 && level!= 2 && level !=3)
        {
    system("cls");
    printf("\t\t\t\t*\t*");
	printf("\t\t\t\t*\t*");
    printf("\t\t\t\t**\t**");
    printf("\t\t\t\t***\t***");
    printf("\t\t\t\t****\t****");
    printf("\t\t\t\t*****\t*****");
    printf("\t\t\t\t******\t******");
    printf("\t\t\t\t*******\t*******");
    printf("\t\t\t\t*******\t*******");
    printf("\t\t\t\t******\t******");
    printf("\t\t\t\t*****\t*****");
    printf("\t\t\t\t****\t****");
    printf("\t\t\t\t***\t***");
    printf("\t\t\t\t**\t**");
    printf("\t\t\t\t*\t*");
    printf("\t\t\t\t\t");

  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
  printf("\n\t\t\t\t\t        >->o-] Hangman Game!");
  printf( "\n\t\t\t\t         You have %d tries to try and guess.",num);

 printf("\n\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
 printf("\t\t\t\t*\t       Choose a game\t\t\t    *\n\t\t\t\t*\t    1.EASY(Six Letters Game)\t\t    *\n\t\t\t\t*\t    2.MEDIUME(Seven Letters Game)\t    *\n\t\t\t\t*\t    3.HARD(Random letters)\t\t    *");
 printf("\n\t\t\t\t*****************************************************");
 printf("\n\t\t\t\t\t    Enter level :");
 scanf("%d", &level);
		}

		system("cls");

		if(level == 3)
		{
			level = 1+rand() % 2;
		}

    int category;
    printf("\t\t\t\t*\t*");
	printf("\t\t\t\t*\t*");
    printf("\t\t\t\t**\t**");
    printf("\t\t\t\t***\t***");
    printf("\t\t\t\t****\t****");
    printf("\t\t\t\t*****\t*****");
    printf("\t\t\t\t******\t******");
    printf("\t\t\t\t*******\t*******");
    printf("\t\t\t\t*******\t*******");
    printf("\t\t\t\t******\t******");
    printf("\t\t\t\t*****\t*****");
    printf("\t\t\t\t****\t****");
    printf("\t\t\t\t***\t***");
    printf("\t\t\t\t**\t**");
    printf("\t\t\t\t*\t*");
    printf("\t\t\t\t\t");

  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
  printf("\n\t\t\t\t\t        >->o-] Hangman Game!!!");
  printf( "\n\t\t\t\t         You have %d tries to try and guess.",num);

 printf("\n\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
 printf("\t\t\t\t*\t       Choose a category\t\t    *\n\t\t\t\t*\t    1. Fruits and Vegetables\t\t    *\n\t\t\t\t*\t    2. Sports\t\t\t\t    *\n\t\t\t\t*\t    3. Technological Devices\t\t    *\n\t\t\t\t*\t    4. Countries\t\t\t    *");
 printf("\n\t\t\t\t*\t    5.HARD Level 1\t\t\t    *\n\t\t\t\t*\t    6.HARD level 2\t\t\t    *\n\t\t\t\t*\t    7.HArd level 3\t\t\t    *");
 printf("\n\t\t\t\t*****************************************************");
 printf("\n\t\t\t\t\t    Enter category :");
		scanf("%d", &category);

		while(category!= 1 && category!= 2 && category!= 3 && category!= 4 && category!= 5&& category!= 6 && category!= 7)
		{
    system("cls");
    printf("\t\t\t\t*\t*");
	printf("\t\t\t\t*\t*");
    printf("\t\t\t\t**\t**");
    printf("\t\t\t\t***\t***");
    printf("\t\t\t\t****\t****");
    printf("\t\t\t\t*****\t*****");
    printf("\t\t\t\t******\t******");
    printf("\t\t\t\t*******\t*******");
    printf("\t\t\t\t*******\t*******");
    printf("\t\t\t\t******\t******");
    printf("\t\t\t\t*****\t*****");
    printf("\t\t\t\t****\t****");
    printf("\t\t\t\t***\t***");
    printf("\t\t\t\t**\t**");
    printf("\t\t\t\t*\t*");
    printf("\t\t\t\t\t");

  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
  printf("\n\t\t\t\t\t        >->o-] Hangman Game!!!");
  printf( "\n\t\t\t\t         You have %d tries to try and guess.",num);

 printf("\n\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
 printf("\t\t\t\t*\t       Choose a category\t\t    *\n\t\t\t\t*\t    1. Fruits and Vegetables\t\t    *\n\t\t\t\t*\t    2. Sports\t\t\t\t    *\n\t\t\t\t*\t    3. Technological Devices\t\t    *\n\t\t\t\t*\t    4. Countries\t\t\t    *");
 printf("\n\t\t\t\t*\t    5.HARD Level 1\t\t\t    *\n\t\t\t\t*\t    6.HARD level 2\t\t\t    *\n\t\t\t\t*\t    7.HARD level 3\t\t\t    *");
 printf("\n\t\t\t\t*****************************************************");
 printf("\n\t\t\t\t\t    Enter category :");
 scanf("%d", &category);
		}

		if(category== 5)
		{
			category= 1+rand()%2;
		}
		if(category== 6)
		{
			category= 1+rand()%3;
		}
		if(category== 7)
		{
			category= 1+rand()%4;
		}


		char word[8];
		char userword[8]= {'_','_','_','_','_','_','_'};

		int random = rand()%5;

		if(category== 1)      //Category for Fruits and Vegetables
		{
			if(level== 1)
			{
				for(int i= 0; i< 7; i++)
				{
					word[i]= readfile[(35*0)+ (random*7)+ i];
				}

			}

			else
			{
				for(int i= 0; i< 7; i++)
				{
					word[i]= readfile[(35*1)+ (random*7)+ i];
				}

			}
		}

		else if(category == 2) //Category for Sports
		{
			if(level==1)
			{
				for(int i= 0; i< 7; i++)
				{
					word[i]= readfile[(35*2)+ (random*7)+ i];
				}

			}

			else
			{
				for(int i= 0; i< 7; i++)
				{
					word[i]= readfile[(35*3)+ (random*7)+ i];
				}

			}
		}

		else if(category== 3) //Category for Technological Devices
		{
			if(level==1)
			{
				for(int i= 0; i< 7; i++)
				{
					word[i]= readfile[(35*4)+ (random*7)+ i];
				}

			}

			else
			{
				for(int i= 0; i< 7; i++)
				{
					word[i]= readfile[(35*5)+ (random*7)+ i];
				}

			}
		}

		else			        //Category for Countries
		{
			if(level==1)
			{
				for(int i= 0; i< 7; i++)
				{
					word[i]= readfile[(35*6)+ (random*7)+ i];
				}

			}

			else
			{
				for(int i= 0; i< 7; i++)
				{
					word[i]= readfile[(35*7)+ (random*7)+ i];
				}

			}
		}

		gamefunction(word, userword, (level+ 5));

		printf("\n\n\t\t\t\t\t  Enter 1 to restart game\n\t\t\t\t\t  Enter any other number to exit\n");
		scanf(" %d", &restartGame);
		PlaySound(TEXT("F:\\Monkeys-Spinning.wav"),NULL,SND_ASYNC);
		system("cls");
	}
}

void gamefunction(char *wordingame, char *userwordingame, int words)
{
	int correct=0;
	int wrong= 0;
	char enterchar;

	while(wrong< 9)
	{
		figure(wrong);
		printf("\n\n\n");
		userword(userwordingame, words);
		printf("\n\t\t\t\t\t    Enter a character: ");
		scanf(" %c", &enterchar);

		enterchar=toupper(enterchar);

		int letterused= 1;
		while(letterused== 1)
		{
			for(int i=  0; i< words; i++)
			{
				if(userwordingame[i]!= enterchar)
				{
					letterused= 0;
				}

				else
				{
					letterused= 1;
					figure(wrong);
					printf("\n\n\n");
					userword(userwordingame, words);
					printf("\n\t\t\t\t\t    Letter already found!\n\t\t\t\t\t    Enter a new character: ");
					PlaySound(TEXT("F:\\ES_Bubble Blip 2.wav"),NULL,SND_ASYNC);
					scanf(" %c", &enterchar);

		            enterchar=toupper(enterchar);
					break;
				}
			}
		}

		int letter= 0;
		for(int i= 0; i< words; i++)
		{
			if(enterchar== wordingame[i])
			{
				userwordingame[i]= wordingame[i];
				letter++;
				correct++;
				PlaySound(TEXT("F:\\ES_Bubble Blip 2.wav"),NULL,SND_ASYNC);
			}
		}

		if(letter== 0)
		{
			wrong++;
			PlaySound(TEXT("F:\\ES_Evil Laugh 3.wav"),NULL,SND_ASYNC);
		}

		if(correct==words)
		{
			figure(wrong);
			printf("\n\n\n");
			userword(userwordingame, words);
			printf("\n\t\t\t\t\t\tYOU WON!");
			PlaySound(TEXT("F:\\ES_Voice Clip Male 119.wav"),NULL,SND_SYNC);
			return;
		}
	}

	figure(wrong);
	printf("\n\n\n");
	for(int j= 0; j< 1; j++)
    {
    printf("                                                 ");
	for(int i= 0; i< words; i++)
	{
    printf("%c", wordingame[i]);
	}
    }
	printf("\n\t\t\t\t\t\tYOU LOST!");
	PlaySound(TEXT("F:\\ES_Trumpet Sad.wav"),NULL,SND_ASYNC);
	return;

}

void userword(char *userwordingame,int words)
{

	for(int j= 0; j< 1; j++)
    {
    printf("                                               ");
	for(int i= 0; i< words; i++)
	{
    printf("%c ", userwordingame[i]);
	}
    }

}

void figure(int wrong)
{
    int num=9;
	system("cls");
    printf("\t\t\t\t*\t*");
	printf("\t\t\t\t*\t*");
    printf("\t\t\t\t**\t**");
    printf("\t\t\t\t***\t***");
    printf("\t\t\t\t****\t****");
    printf("\t\t\t\t*****\t*****");
    printf("\t\t\t\t******\t******");
    printf("\t\t\t\t*******\t*******");
    printf("\t\t\t\t*******\t*******");
    printf("\t\t\t\t******\t******");
    printf("\t\t\t\t*****\t*****");
    printf("\t\t\t\t****\t****");
    printf("\t\t\t\t***\t***");
    printf("\t\t\t\t**\t**");
    printf("\t\t\t\t*\t*");
    printf("\t\t\t\t\t");

  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
  printf("\n\t\t\t\t\t         >->o-] Hangman Game!");
  printf( "\n\t\t\t\t         You have lost %d lives.You have %d lives.\n",wrong,num-wrong);

 printf("\n\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");

	switch(wrong)
	{
		case 0:
		    printf("\n\t\t\t\t    MISTAKE :%d",wrong);
		    printf( "\n\t\t\t\t    You have lost %d lives.You have %d lives.\n",wrong,num-wrong);
			printf("\n\n\n\n\n        \n        \n        \n\t\t\t\t\t\t     __|__");
			break;
		case 1:
		    printf("\n\t\t\t\t    MISTAKE :%d",wrong);
		    printf( "\n\t\t\t\t    You have lost %d lives.You have %d lives.\n",wrong,num-wrong);
			printf("\n\n\n\n\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t     __|__");

			break;
		case 2:
		    printf("\n\t\t\t\t    MISTAKE :%d",wrong);
		    printf( "\n\t\t\t\t    You have lost %d lives.You have %d lives.\n",wrong,num-wrong);
			printf("\t\t\t\t\t\t _ _ _ _\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t     __|__ ");

			break;
		case 3:
		    printf("\n\t\t\t\t    MISTAKE :%d",wrong);
		    printf( "\n\t\t\t\t    You have lost %d lives.You have %d lives.\n",wrong,num-wrong);
			printf("\t\t\t\t\t\t _ _ _ _  \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t     __|__ ");

			break;
		case 4:
		    printf("\n\t\t\t\t    MISTAKE :%d",wrong);
		    printf( "\n\t\t\t\t    You have lost %d lives.You have %d lives.\n",wrong,num-wrong);
			printf("\t\t\t\t\t\t _ _ _ _  \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t( )    |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t     __|__ ");
           break;
		case 5:
		    printf("\n\t\t\t\t    MISTAKE :%d",wrong);
		    printf( "\n\t\t\t\t    You have lost %d lives.You have %d lives.\n",wrong,num-wrong);
			printf("\t\t\t\t\t\t _ _ _ _  \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t( )    |\n\t\t\t\t\t\t/      |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t     __|__ ");

			break;
		case 6:
		    printf("\n\t\t\t\t    MISTAKE :%d",wrong);
		    printf( "\n\t\t\t\t    You have lost %d lives.You have %d lives.\n",wrong,num-wrong);
			printf("\t\t\t\t\t\t _ _ _ _  \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t( )    |\n\t\t\t\t\t\t/ \\    |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t     __|__ ");

			break;
		case 7:
		    printf("\n\t\t\t\t    MISTAKE :%d",wrong);
		    printf( "\n\t\t\t\t    You have lost %d lives.You have %d lives.\n",wrong,num-wrong);
			printf("\t\t\t\t\t\t _ _ _ _  \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t( )    |\n\t\t\t\t\t\t/|\\    |\n\t\t\t\t\t\t |     |\n\t\t\t\t\t\t |     |\n\t\t\t\t\t\t       |\n\t\t\t\t\t\t     __|__ ");

			break;
		case 8:
		    printf("\n\t\t\t\t    MISTAKE :%d",wrong);
		    printf( "\n\t\t\t\t    You have lost %d lives.You have %d lives.\n",wrong,num-wrong);
			printf("\t\t\t\t\t\t _ _ _ _  \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t( )    |\n\t\t\t\t\t\t/|\\    |\n\t\t\t\t\t\t |     |\n\t\t\t\t\t\t |     |\n\t\t\t\t\t\t/      |\n\t\t\t\t\t\t     __|__ ");

			break;
		case 9:
		    printf("\n\t\t\t\t    MISTAKE :%d",wrong);
		    printf( "\n\t\t\t\t    You have lost %d lives.You have %d lives.\n",wrong,num-wrong);
			printf("\t\t\t\t\t\t _ _ _ _  \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t |     | \n\t\t\t\t\t\t( )    |\n\t\t\t\t\t\t/|\\    |\n\t\t\t\t\t\t |     |\n\t\t\t\t\t\t |     |\n\t\t\t\t\t\t/ \\    |\n\t\t\t\t\t\t     __|__ ");
			break;
	}
    return;
}



