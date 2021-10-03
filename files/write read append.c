#include<stdio.h>
#include<stdlib.h>
void write(char data[100]);
void read();
void append(char data[100]);
int main()
{
 char data[100];
 printf("Enter the data to be written on the file\n");
 fgets(data,100,stdin);
 write(data);

 read();
 printf("\nEnter the data to be appended on the file\n");
 fgets(data,100,stdin);
 append(data);
 return 0;
}
void write(char data[100])
{
 FILE *fp;
 fp=fopen("write_file.txt","w");
 fputs(data,fp);
 fclose(fp);
}
void read()
{
 FILE *fp;
 fp=fopen("write_file.txt","r");
 printf("The  contents of file are\n");
 int ch=getc(fp);
 while(ch!=EOF)
 {
   putchar(ch);
   ch=getc(fp);
 }
 fclose(fp);
}
void append(char data[100]) 
{
 FILE *fp;
 fp=fopen("write_file.txt","a+");
 fputs(data,fp);
 fclose(fp);
}