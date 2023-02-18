#include <stdio.h>
#include <string.h>

int voteVal();
int main()
{

    voteVal();
return 0;
}

int voteVal()
{
    int id;
	int passport;
	char kenyan;
	printf("are you kenyan=Yes(Y) or No(N)");
	scanf("%c",&kenyan);
	if((kenyan=='Y')||(kenyan=='y'))
	{
	printf("You have an id=Yes(1) or No(0)");
	scanf("%d",&id);
    if((id==1)&&(kenyan=='y'))
    {
	printf("you are eligible to vote\n");
    }
    else
    printf("you have a passport=Yes(1) or NO(0)");
    scanf("%d",&passport);
    if((passport==1)&&(kenyan=='y'))
    {
    printf("you are eligible to vote\n");
    }
    else
    printf("you are not eligible to vote");
    }
    else
    printf("you are not eligible to vote");
}