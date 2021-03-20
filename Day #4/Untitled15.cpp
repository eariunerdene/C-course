#include <stdio.h>

main()
{
int a, b, c, e, f;
scanf("%d %d %d", &a, &b, &c);
if(c%b>0)
{
e=c/b+1;
}
else
e=c/b;
if(c%b<=0)
{
f=b;
}
else f=c%b;
printf("%d %d", e, f);
return 0;
}
