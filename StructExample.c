#include<stdio.h>

char getStatus(int);

struct student
{
unsigned long int roll;
char name[15];
int MCS011,MCS012,MCS013,MCS014,MCS015,MCS016,MCS017;
}STUD[20]={
{1,"AJINKYA",83,67,78,78,45,18,33},
{2,"HITSH",76,14,56,14,51,11,61},
{3,"AMAN",98,12,75,13,16,14,98},
{4,"AYUSH",78,10,79,14,74,14,54},
{5,"SATYAM",74,17,65,15,45,13,41},
{6,"SUNIL",19,13,64,12,68,10,67},
{7,"TAMAL",55,11,78,19,45,17,56},
{8,"RAGHAV",55,10,78,12,45,11,56},
{9,"TARA",55,16,78,17,45,11,56},
{10,"SANJAY",55,13,78,14,45,11,56},
{11,"VIJAY",55,15,78,17,45,11,44},
{12,"SUMIT",55,17,78,15,45,11,56},
{13,"VANDANA",55,17,78,15,45,11,55},
{14,"ARJUN",55,17,78,15,45,11,31},
{15,"POONAM",55,17,78,65,45,31,55},
{16,"BANTU",55,17,80,15,45,11,56},
{17,"CHINTU",55,17,76,15,62,11,51},
{17,"VINDU",55,17,78,15,45,11,56},
{17,"SINDU",55,17,78,15,45,45,34},
{20,"KARISHMA",55,17,78,15,45,39,55}
};
int main()
{
unsigned long int ENROL_NO;
void gen_result(unsigned long int);
//clrscr();
printf("ENTER THE Enroll bwtn 1 to 20 : ");
scanf("%ld",&ENROL_NO);
if(ENROL_NO>0 && ENROL_NO<21)
gen_result(ENROL_NO);
else
printf("\nYOU HAVE ENTERED WRONG ENROLMENT NO. !!");
//getch();
return 0;
}
void gen_result(unsigned long int ENROL)
{
char STATUS;

printf("\n\t\tINDIRA GANDHI NATIONAL OPEN UNIVERSITY");
printf("\n\t\t\t(ASSIGNMENT - 2020-2021)");
printf("\n\n\tENROLMENT NO.\t: %ld",ENROL);
printf("\n\tNAME\t\t: %s",STUD[ENROL].name);
printf("\n\tPROGRAMME CODE \t: MCA");
printf("\n\t_______________________________________________________________");
printf("\n\tCOURSE\t\tTOTAL");
printf("\n\t CODE \t\t(100%)\tSTATUS");
printf("\n\t_______________________________________________________________");
if(STUD[ENROL].MCS011<40) STATUS='N'; else STATUS='S';
printf("\n\tMCS011\t\t%d\t%cC",STUD[ENROL].MCS011,STATUS);
if(STUD[ENROL].MCS012<40) STATUS='N'; else STATUS='S';
printf("\n\n\tMCS012\t\t%d\t%cC",STUD[ENROL].MCS012,STATUS);
if(STUD[ENROL].MCS013<40) STATUS='N'; else STATUS='S';
printf("\n\n\tMCS013\t\t%d\t%cC",STUD[ENROL].MCS013,STATUS);
if(STUD[ENROL].MCS014<40) STATUS='N'; else STATUS='S';
printf("\n\n\tMCS014\t\t%d\t%cC",STUD[ENROL].MCS014,STATUS);
if(STUD[ENROL].MCS015<40) STATUS='N'; else STATUS='S';
printf("\n\n\tMCS015\t\t%d\t%cC",STUD[ENROL].MCS015,STATUS);
if(STUD[ENROL].MCS016<40) STATUS='N'; else STATUS='S';
printf("\n\n\tMCS016\t\t%d\t%cC",STUD[ENROL].MCS016,STATUS);
if(STUD[ENROL].MCS017<40) STATUS='N'; else STATUS='S';
printf("\n\n\tMCSL017\t\t%d\t%cC",STUD[ENROL].MCS017,STATUS);
printf("\n\t_______________________________________________________________");
printf("\n\t\tSC :- SUCCESSFULL COMPLETED\tNC :- NOT COMPLETED");
}


