// Write a program to take marks of 5 subjects from the user. Assume marks are given
//out of 100 and passing marks is 33. Now display whether the candidate passed the
//examination or failed.
#include <stdio.h>
int main() {
int math,phy,chm,bio,eng;
int max=100;
printf("Enter marks of math,phy,chm,bio and eng:");
scanf("%d%d%d%d%",&math,&phy,&chm,&bio,&eng);
int total=0;
total=math+phy+chm+bio+eng;
if(total>=165)
{
if(math>=33 & phy>=33 & chm>=33 & bio>=33 & eng>=33)
{
printf("student is pass ");
}
else
printf("student is fail ");
}
return 0;
}
