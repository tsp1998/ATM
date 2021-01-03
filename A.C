//ATM Machine
//Made by SGSK
//Royal King Team
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
int w=0,k[3]={5,5,5};
char bal[30];// strings to convert integer to string
	long int total;
	int choice,id,pin,temp2,wd;
	char name[30]={'a','d','m','i','n'};
	void init();//initialize graph
		void welcome1();//welcome message
		 void body2();//ATM Body
void Animation(int x,int y,int speed,char str[],int space,int color,int font,int dirn,int size,int mode);//Text animation
int userInfo3();//user account information //Flag pass
void count5(int);//Count of note //total pass
	void money6();//money animation //Pass count of notes
	void BalanceInquiry4(long int);//check balance //total pass
	void recipt(int);//pass Withdraw Cash //get recipt
	void its(long int);//integer to string
void moveString(char str[30]);//Move String Animation
  void bodyText();
int main()
{
	init();

	welcome1();
//BalanceInquiry4(40000);
//userInfo3();//user account information //Flag pass
getch();
closegraph();
return 0;
}



	void init()//initialize graph
	{
			int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
	}


void welcome1()
{
	cleardevice();
	if(w==0)
	{
   Animation(50,0,20,"WELCOME TO SKN BANK",30,10,1,0,1,1); //Text animation
	     Animation(150,50,10,"WELCOME TO SKN BANK",30,13,3,0,3,2); //Text animation
	     //int x,int y,int speed, char str[],int space,int color,int font,int dirn,int size,int mode
     Animation(140,200,10,"ENTER TO CONTINUE",30,10,1,0,4,2); //Text blink
	}
	w=1;;
settextstyle(1,0,2);
cleardevice();
body2();
Animation(150,50,10,"WELCOME TO SKN BANK",30,13,3,0,3,2); //Text
	setcolor(11);
	outtextxy(150,100,"1.New User");
	outtextxy(150,150,"2.Have Account");
		outtextxy(150,200,"3.Enter in Account");
	outtextxy(150,250,"4.EXIT");
	   //int x,int y,int speed, char str[],int space,int color,int font,int dirn,int size,int mode
	Animation(50,370,10,"Creation by ROYAL KING Team",20,6,1,0,1,1); //Text blink
	getch();
	userInfo3();//user account information //Flag pass
}

void Animation(int x,int y,int speed,char str[],int space,int color,int font,int dirn,int size,int mode) //Text animation
{
int i;char put[2];
setcolor(color);
if(mode==1)//moving text animation
{
settextstyle(font,dirn,size);
		for(i=0;i<strlen(str);i++)
		{
			put[0]=str[i];
				put[1]='\0';
					outtextxy(x+space*i,y,put);
			delay(speed);
	}

		for(i=0;i<strlen(str);i++)
		{
			put[0]=str[i];
				put[1]='\0';
					outtextxy(x+space*i,y,put);
		delay(speed);
		//cleardevice();
		}
		}

if(mode==2)//blinking text animation
{
while(!kbhit())
{
	settextstyle(font,dirn,size);
	setcolor(0);
	outtextxy(x+space,y,str);
		delay(speed);
		setcolor(color);
		outtextxy(x+space,y,str);
			delay(speed);
		}
		}
}

	void body2()
	{
		int y=50;
	  setcolor(14);
 setfillstyle(11,11);
 //external edges
  line(400,400-y,600,400-y);
  line(400,50-y,600,50-y);
  line(400,50-y,400,400-y);
  line(600,50-y,600,400-y);


 //internal edges
  line(420,380-y,580,380-y);
  line(420,70-y,580,70-y);
  line(420,70-y,420,380-y);
  line(580,70-y,580,380-y);
  floodfill(410,100-y,14);

 line(440,90-y,560,90-y);
 line(440,210-y,560,210-y);
 line(440,90-y,440,210-y);
 line(560,90-y,560,210-y);

 line(420,230-y,580,230-y);
 line(420,250-y,580,250-y);
 line(420,270-y,580,270-y);
 line(500,250-y,500,270-y);
 rectangle(525,235-y,575,245-y);

 rectangle(450,280-y,550,280-y);
 rectangle(435,327-y,560,327-y);
 rectangle(450,280-y,435,327-y);
 rectangle(550,280-y,560,327-y);

  rectangle(425,130-y,435,140-y);
  rectangle(425,145-y,435,155-y);
  rectangle(425,160-y,435,170-y);
  rectangle(425,175-y,435,185-y);

  rectangle(565,130-y,575,140-y);
  rectangle(565,145-y,575,155-y);
  rectangle(565,160-y,575,170-y);
  rectangle(565,175-y,575,185-y);


  setcolor(11);
  rectangle(460,245,540,265);//Boundary

	setcolor(12);
 setfillstyle(11,11);

		rectangle(400,330,600,350);
			setcolor(11);
			 floodfill(470,340,12);

while(!kbhit())
{
	settextstyle(1,0,1);
	setcolor(0);
	outtextxy(465,80,"Welcome");
		delay(10);
		setcolor(14);
		outtextxy(465,80,"Welcome");
			delay(10);
		}

	}

	int userInfo3()//user account information
{
scanf("%d",&choice);
	if(choice==4)
	{
		exit(0);
	}
	else
	{
		cleardevice();
		settextstyle(1,0,1);//font direction size
		clrscr();
		init();
		body2();

		if(choice==2)//admin info
	{
			strcpy(name,"admin");
	id=12345;
	printf("Deposit (Multiple of 100):");
scanf("%ld",&total);
printf("%ld",total);
getch();
//	its(total1);
	pin=1234;
	welcome1();
	}
	if(choice==1)//user info
	{
printf("Enter Name:");
gets(name);
gets(name);
printf("Enter Account Number(5 Digits):");
scanf("%d",&id);
printf("Create Pin(4 Digits):");
scanf("%d",&pin);
printf("Deposit (Multiple of 100):");
scanf("%ld",&total);
printf("%ld",total);
getch();
//	its(total1);
cleardevice();
outtextxy(80,100,"Account Created Successfully");
while(!kbhit())
{
	setcolor(11);
	outtextxy(120,200,"ENTER TO CONTINUE");
	settextstyle(1,0,5);
	delay(100);
		setcolor(0);	outtextxy(120,200,"ENTER TO CONTINUE");
}

	welcome1();
	}//if 1 end

	if(choice==3)//verify while entering in account while Withdraw the cash
	{
		clrscr();
		init();
body2();
		while(1)// it is infinite loop
		{
		printf("Enter Your Account number(5 Digits):");
		UserId: //statement
scanf("%d",&temp2);//get user account number
if(temp2==0)//if u want to exit
exit(0);

if(id==temp2)//choice wheather Account no. is correct
{
		break;// exit this loop
	}
else{
			printf("ReEnter Account number(5 Digits):");//if account no. is wrong
			goto UserId;//re accept account no.
	}
	}
while(1)
		{
	printf("Enter Your Pin(4 Digits):");
	UserPin:
scanf("%d",&temp2);
if(pin==temp2)
break;
if(pin==0)
exit(0);
else{
			printf("ReEnter Pin(4 Digits):");
			goto UserPin;
	}
     }

cleardevice();
	body2();
	setcolor(6);
	settextstyle(1,0,2);
	outtextxy(50,100,"Hello");
		outtextxy(110,100,name);
getch();
setcolor(9);
		outtextxy(20,150,"1.Withdraw");
		outtextxy(20,200,"2.Deposit");
				outtextxy(20,250,"3.Check Balance");
								outtextxy(20,300,"4.EXIT");

scanf("%d",&choice);
setcolor(0);
	settextstyle(1,0,2);
	outtextxy(50,100,"Hello");
		outtextxy(110,100,name);
getch();
setcolor(0);
		outtextxy(20,150,"1.Withdraw");
		outtextxy(20,200,"2.Deposit");
				outtextxy(20,250,"3.Check Balance");
								outtextxy(20,300,"4.EXIT");
if(choice==1)
{

while(1)
		{
	printf("Enter Amount(Multiple of 100 & \nMax Limit=15600):");
	UserWithdraw:
scanf("%d",&wd);
	total-=wd;//total minus
if(wd%100==0 && wd<=15600)
{
	count5(wd);
break;
}
if(wd==0)
{
exit(0);
}
else{
	printf("Invalid Amount\n");
			printf("ReEnter Amount(Multiple of 100):");
			goto UserWithdraw;
	}
	}	
		settextstyle(2,0,5);
}

else if(choice==2)
{
while(1)
		{
		printf("Enter Amount(Multiple of 100):");
	UserDeposit:
scanf("%d",&wd);
if(wd%100==0 && ((wd+total)<=500000))
{
	total+=wd;//total plus withdraw
break;
}
if(wd==0)
{
exit(0);
}
else{
		printf("Your account Balance is High");
	getch();
			printf("ReEnter Amount(Multiple of 100):");
			goto UserDeposit;
	}
	}


	outtextxy(50,350,"Your Account Balance Updated Successfully");
		settextstyle(1,0,3);
			outtextxy(200,250,"Thank You");
	setcolor(9);
	outtextxy(170,300,"Enter to Continue");
		getch();
		cleardevice();
			settextstyle(5,0,8);
			outtextxy(200,200,"1.Continue");
				outtextxy(230,300,"2.Exit");
		scanf("%d",&temp2);
		if(temp2==1)
		{
	welcome1();
		}
		if(temp2==2)
		{
	exit(0);
		}
}

else if(choice==3)
{
	BalanceInquiry4(total);
}
else{
		printf("Invalid Choice");
	printf("ReEnter Your Choice:");
}
 end: 
 }
return 0;
}
}
      
      void count5(int wd)//count how many notes withdraw
	{
		if(wd<=12000)
		{
		k[0]=wd/2000;
		wd=wd%2000;
		}
		else
		{
		k[0]=6;
		wd=wd-12000;
	}
	
		if(wd<=3000)
		{
		k[1]=wd/500;
		wd=wd%500;
		}
		else
		{
		k[1]=6;
		wd=wd-3000;
	}
		
		k[2]=wd/100;
money6();// pass count of notes to money function
	
	}
	
		void money6()//k is count of notes
	{
		int i1,i;
		
			for(i1=0;i1<10;i1++)
		{
					for(i=0;i<10;i++)
		{
			setcolor(14);
		line(462,250+i,538,250+i);
		delay(10);
		if(i%2==0)
	{
		setcolor(0);
		line(462,250+i,538,250+i);
		delay(10);
	}
	setcolor(14);
		line(462,250+i,538,250+i);
		delay(10);
			if(i%2!=0)
	{
		setcolor(0);
		line(462,250+i,538,250+i);
		delay(10);
	}
	}
		}
				delay(10);
			for(i=0;i<10;i++)
		{
			setcolor(0);
		line(462,250+i,538,250+i);
		delay(10);
		}
		
		
			for(i=0;i<150;i++)
		{
			setcolor(14);
		rectangle(462,260+i,538,295+i);
		delay(10);
		setcolor(0);
		rectangle(462,260+i,538,295+i);
		delay(10);
		body2();
		}
		
	
		for(i=0;i<k[0]*80;i++)
		{
			if(i%80==0)
			{
				settextstyle(2,0,5);
						rectangle(462-i,370,538-i,395);
			outtextxy(470-i,375,"Rs.2000");
			}
					delay(10);
		}
		
			
		for(i=0;i<k[1]*80;i++)
		{
			if(i%80==0)
			{
			settextstyle(2,0,5);
						rectangle(462-i,410,538-i,435);
			outtextxy(475-i,415,"Rs.500");
			}
								delay(10);

		}
					body2();	
						
						
		for(i=0;i<k[2]*80;i++)
		{
			if(i%80==0)
			{
				settextstyle(2,0,5);
						rectangle(462-i,450,538-i,475);
			outtextxy(475-i,455,"Rs.100");
			}
								delay(10);

		}	

				
  setcolor(12);
 setfillstyle(11,11);
 
  	  	rectangle(400,330,600,350);
			setcolor(11);
			 floodfill(470,340,12);
			 getch();
			 	settextstyle(1,0,3);
			outtextxy(200,250,"Thank You");
	setcolor(9);
	outtextxy(170,300,"Enter to Continue");
		getch();
		cleardevice();
			settextstyle(5,0,8);
			outtextxy(200,200,"1.Continue");
				outtextxy(230,300,"2.Exit");
		scanf("%d",&temp2);
		if(temp2==1)
	welcome1();
		if(temp2==2)
	exit(0);
				}
				
				void BalanceInquiry4(long int t)// Check Balance // t is total
{
	cleardevice();
	Animation(200,100,10,"SKN Bank",30,11,6,0,3,1); //Text animation
	     //int x,int y,int speed, char str[],int space,int color,int font,int dirn,int size,int mode
					setcolor(15);
			settextstyle(1,0,4);
					outtextxy(130,200,"Your balance is:");
			setcolor(2);
			settextstyle(1,0,4);
						setcolor(13);
									its(t);
//		outtextxy(400,200,bal);
							Animation(400,210,100,bal,10,13,3,0,3,1); //Text animation
	     //int x,int y,int speed, char str[],int space,int color,int font,int dirn,int size,int mode
							//getch(0);
			setcolor(9);
	/*	outtextxy(230,300,"Thank You");
	setcolor(14);*/
	 	settextstyle(1,0,3);
			outtextxy(200,250,"Thank You");
	setcolor(14);
	outtextxy(170,300,"Enter to Continue");
		getch();
		cleardevice();
			settextstyle(5,0,8);
			outtextxy(200,200,"1.Continue");
				outtextxy(230,300,"2.Exit");
		scanf("%d",&temp2);
		if(temp2==1)
	welcome1();
		if(temp2==2)
	exit(0);
getch();
		closegraph();
		exit(0);
      }
      
      void its(long int t)//integer to string
{
	char temp[10];
	int i=0,j,rem,div;// this variables used for making integer to string in loop

for(i=0;i<10;i++)// make strings total empty
		{
		bal[i]='\0';
		temp[i]='\0';
	}

i=0;
	while(t!=0)
	{
		rem=t%10;// return reminder

		temp[i]='0'+rem;//connect reminder
		t=t/10;
		i++;
	}


	j=strlen(temp)-1;//length of string

	for(i=0;i<strlen(temp);i++)
		{
		bal[i]=temp[j];// reverse string
		j--;
	}
	
	bal[i]='\0';//close the string
	}