#include<stdio.h>

#define N 100

struct Student
{
    int rollno;
    char name[10];
    char class[10];
    int m1,m2,m3,total;
    float percentage;
};

struct Student std[N];


void main()
{
    int i,n;
    printf("Enter the number of student to display the data: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter %d Student record:\n", i+1);
       printf("\nStudent  Roll No:\t");
       scanf("%d", &std[i].rollno);
        printf("\nStudent  name:\t");
        scanf("%s", &std[i].name);
        printf("\nStudent  class:\t");
        scanf("%s", &std[i].class);

		printf("\nEnter 3 Subject Marks:\n");
		scanf("%d%d%d", &std[i].m1,&std[i].m2,&std[i].m3);
		std[i].total=std[i].m1+std[i].m2+std[i].m3;
		std[i].percentage=(std[i].total/300)*100;

	  }

    printf("\nDisplaying Student record:\n");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent roll no is %d", std[i].rollno);
        printf("\nStudent name is %s", std[i].name);
        printf("\nStudent class is %s", std[i].class);
        printf("\nStudent subject marks are %d,%d,%d",std[i].m1,std[i].m2,std[i].m3);
        printf("\nStudent subject percentage is %.2f%\n", std[i].percentage);
    }
}
