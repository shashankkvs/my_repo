#include<stdio.h>
int main()
{
FILE *fr=fopen("/home/km/practice/python/files/File.txt","r+");
char ch;int i=0;
fseek(fr,0,SEEK_END);
while((ch=getchar())!=EOF)
{
	fputc(ch,fr);
}
fclose(fr);
}
