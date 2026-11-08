#include<stdio.h>
int main()
{
FILE*fp;
char buffer[1000];
fp=fopen("FEEDBACK.txt","w");
if(fp==NULL)
{
printf("file cannot be opened");
return 0;
}
fprintf(fp,"Feedback of c programming\n");
fprintf(fp,"1.Difficult compare to python\n");
fprintf(fp,"2.Difficulty in solving errors\n");
fprintf(fp,"3.Interseting to learn\n");
fprintf(fp,"4.Difficult to memorize some syntax and function\n");
fprintf(fp,"5.It is helpfull for learnimg other programming language\n");
fclose(fp);
fp=fopen("FEEDBACK.txt","a");
if(fp==NULL)
{
printf("file cannot be opened");
return 0;
}
fprintf(fp,"Feedback about c trainer\n");
fprintf(fp,"1.Trainer clears our doubt patiently\n");
fprintf(fp,"2.Trainer should explain difficult concept more slowly\n");
fprintf(fp,"3.Trainer responds well to student question\n");
fprintf(fp,"4.Trainer should give alternative solution\n");
fprintf(fp,"5.Trainer maintains good balance between theory and practicals\n");
fclose(fp);
fp=fopen("FEEDBACK.txt","r");
if(fp==NULL)
{
printf("file cannot be opened");
return 0;
}
while(fgets(buffer,sizeof(buffer),fp)!=NULL)
{
printf("%s",buffer);
}
fclose(fp);
return 0;
}
