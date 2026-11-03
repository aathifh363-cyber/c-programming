#include <stdio.h>
#include <conio.h>
extern unsigned _floatconvert;
#pragma extref _floatconvert

#define MAX 100

struct Student {
char name[50];
int roll;
float marks;
char dream[100];
};

void main()
{
struct Student students[MAX];
int n, i;

clrscr();

printf("Enter number of students (1-%d): ", MAX);
scanf("%d", &n);
fflush(stdin);

if (n < 1) {
printf("Enter a number from 1 to %d.", MAX);
getch();
return;
}

if (n > MAX) {
printf("Enter a number from 1 to %d.", MAX);
getch();
return;
}

for (i = 0; i < n; i++) {
printf("\nStudent %d\n", i + 1);

printf("Name: ");
gets(students[i].name);

printf("Roll number: ");
scanf("%d", &students[i].roll);

printf("Marks: ");
scanf("%f", &students[i].marks);
fflush(stdin);

printf("Dream: ");
gets(students[i].dream);
}

printf("\n--- Student Information ---\n");

for (i = 0; i < n; i++) {
printf("\nStudent %d\n", i + 1);
printf("Name: %s\n", students[i].name);
printf("Roll: %d\n", students[i].roll);
printf("Marks: %.2f\n", students[i].marks);
printf("Dream: %s\n", students[i].dream);
}

getch();
}
