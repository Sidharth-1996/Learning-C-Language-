#include<stdio.h>
int main()
{
    int nstudents=5;
    int nsubjects=3;
    // int marks[5][3];
     int marks[nstudents][nsubjects];
    for(int i=0;i<nstudents;i++){
        for(int j=0;j<nsubjects;j++){
             printf("Enter the marks of student %d in subject %d\n",i+1,j+1);
             scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<nstudents;i++){
        for(int j=0;j<nsubjects;j++){
             printf("Enter the marks of student %d in subject %d is %d\n\n",i+1,j+1,marks[i][j]);
        }
    }
    return 0;
}