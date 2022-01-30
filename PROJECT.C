#include<stdio.h>
#include<conio.h>
void Option(int)
struct pp
{
	char name[20];
	char surname[20];
	int pno;
	int age;
        char add[100];
	char issue;
	char pwd[20];
	int applno;
}u1;
void main()
{
 char uname[20], pd[20];
 FILE *ptr;
 int i=0;
 clrscr();
 ptr = fopen("userlogin.txt","a+");

 printf("Enter username:");
 scanf("%s", uname);
 printf("\nEnter password:");
 scanf("%s", pd);
 fscanf(ptr,"%s %s",u1.name,u1.pwd);

 do {
     if(!strcmp(uname, u1.name) && !strcmp(pd, u1.pwd))
	 {
	  f=1;
	  Option(i);
	 }
     else
	break;
    }while(1);
 getch();
}
 
void Option(int i)
 {
 int a;
 FILE *ptr;
 ptr=fopen("passport.txt","a");
	  printf("\nEnter your option from the menu below:");
	  printf("\n1.New Application\n2.Renewal\n3.Change of address\n4.Change of name\n5.Display passport\n6.Exit");
	  printf("\nYour option:");
	  scanf("%d",&a);
	  switch(a)
	   {
	   case 1:i++;
		  printf("\nEnter name:");
		  scanf("%s",u1.name);
		  printf("\nEnter surname:");
		  scanf("%s",u1.surname);
		  printf("\nEnter address:");
		  gets(u1.add);
		  printf("\nEnter age:");
		  scanf("%d",&u1.age);
		  u1.issue='F';
		  u1.applno=i;
		  fprintf(ptr,"%s %s %s",u1.name,u1.surname,u1.add);

		  printf("\nYour application has been processed );
		  break;

	   }
 }