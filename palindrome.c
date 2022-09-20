#include<stdio.h>
void main()
{
int i , j , num , reverse , temp , more , less;

printf("Enter Number for Palindrome ");
scanf("%d",&num);

for(i=num;i>0;i--)
{
    j=i;
    reverse=0;
    while(j!=0)
    {
        temp=j%10;
        reverse=reverse*10+temp;
        j=j/10;
    }
    if(i==reverse)
    {
        less=reverse;
        break;
    }
}
i=num;

while(1)
{
    j=i;
    reverse=0;
    while(j!=0)
    {
        temp=j%10;
        reverse=reverse*10+temp;
        j=j/10;
    }
    if(i==reverse)
    {
        more=reverse;
        break;
    }
    i++;
}

if(i==num)
{
    printf("%d is a palindrome",num);
}
else if((num-less)>=(more-num))
{
    printf("%d is nearest palindrome",more);
}
else if((num-less)<=(more-num))
{
    printf("%d is nearest palindrome",less);
}

}
