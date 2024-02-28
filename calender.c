#include<stdio.h>
#include<stdlib.h>
struct day
{
char*dayname;
char *date;
char *activitydescription;
};
struct day *createcalender(int size)
{
struct day *calender=(struct day*)malloc(size*sizeof(struct day));
if(calender==NULL)
{
printf("memory allocation faild");
exit(1);
}
return calender;
}
void readdata(struct day *calender,int size)
{
int i;
for(i=0;i<size;i++)
{
printf("\n enter details of day %d",i+1);
printf("dayname:");
calender[i].dayname=(char*)malloc(50*sizeof(char));
scanf("%s",calender[i].dayname);
printf("date:");
calender[i].date=(char*)malloc(50*sizeof(char));
scanf("%s",calender[i].date);
printf("activitydescription:");
calender[i].activitydescription=(char*)malloc(50*sizeof(char));
scanf("%s",calender[i].activitydescription);
}
}
void displaycalender(struct day*calender,int size)
{
printf("\n details of the day is\n");
printf("dayname\tdate\tactivitydescription\n");
int i;
for(i=0;i<size;i++)
{
printf("%s\t%s\t%s\n",calender[i].dayname,calender[i].date,calender[i].activitydescription);
}
}
void freememory(struct day*calender,int size)
{
int i;
for(i=0;i<size;i++)
{
free(calender[i].dayname);
free(calender[i].activitydescription);
}
free(calender);
}
int main()
{
int size;
printf("\nenter the number of days in calender");
scanf("%d",&size);
struct day *calender=createcalender(size);
readdata(calender,size);
displaycalender(calender,size);
freememory(calender,size);
}
