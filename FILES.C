#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    // 1. WRITE MODE: Saves original postulates
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("error");
        return 1;
    }
    fprintf(fp, "\n1.C program is very fast and reliable\n2.it is developed by dennis ritche\n3.it is a middle level language\n4.its first name is BPCL\n");
    fclose(fp);

    // 2. APPEND MODE: Adds mentor details without erasing
    fp = fopen("data.txt", "a");
    if (fp == NULL) {
	printf("error");
	return 1;
    }
    fprintf(fp, "\n1.Mr  explains concepts clearly with great examples.\n2.He is vert kind\n3.He teaches very well");
    fclose(fp);

    // 3. READ MODE: Prints everything together
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
	printf("ERROR");
	return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}