// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct student
{

char name[25];
int assigment_marks;
int end_term_marks;
} student[2] = {
    {"Shiv", 65, 390},
    {"Ram", 87, 467}
};

int main() {
    
    char option;
    int roll;
    printf("MCA STudent Semester End Result \n");
    while(1){
    printf ("1. Registration Status\n");
    printf ("2. Courses in Current Semester\n");
    printf ("3. Assignment Schedule\n");
    printf ("4. Assignment Marks\n");
    printf ("5. End Term Marks\n");
    printf ("6. Quit\n");
    
    printf ("Enter Option:: ");
    scanf("%c",&option);
    
    switch (option){
        
        case '1' :
            printf("Registration Status Complete for:\n");
            for (int i=0; i < 2 ;i++){
                printf("%d. %s\n", i+1, student[i].name);
            }
        break;
        case '2':
            printf("Courses in current Semester: MCS-011,MCS-012,MCS-013,MCS-014,MCS-015,MCSL-016,MCSL-017");
        break;
        case '3':
            printf("For July 2020 Session Last Date for submission is 15 Dec 2020");
        break;
        case '4':
            printf("Enter Student Roll from registered students list : ");
            scanf("%d",&roll);
            printf("Assigment Marks for roll %d is : %d", roll, student[roll-1].assigment_marks);
        break;
        case '5':
            printf("Enter Student Roll from registered students list : ");
            scanf("%d",&roll);
            printf("Assigment Marks for roll %d is : %d", roll, student[roll-1].end_term_marks);
        break;
        case '6':
            printf("\nEXITING CURRENT PROCESS" );
            exit(0);
            
        deafult:
            printf("\nInvalid OPtion");
        break;
    }
    
    printf("\n\n==========================\n");
}
    return 0;
}