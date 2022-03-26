#include <stdio.h>
#include<math.h>
int main()
{
  float a,b,c,desc,root1,root2,realpart,imgpart;
  printf("enter the values of a,b,c: ");
  scanf("%f%f%f",&a,&b,&c);

  if(a==0)
 {
   printf("coeffecient of a cannot be zero.\n");
   printf("please try again.\n");
   return 1;
  }
desc=(b*b)-(4*a*c);
if(desc==0)
{
  printf("Roots are real and equal\n");
  root1=root2=(-b)/(2.0*a);
  printf("the roots are root1 =root2= %f\n",root1);
}
else if (desc>0)
{
  printf("roots are real and distinct\n");
  root1=(-b+sqrt(desc))/(2.0*a);
  root2=(-b-sqrt(desc))/(2.0*a);
  printf("the roots are: \n");
  printf("root1= %f\n",root1);
  printf("root2= %f\n",root2);
}
else{
printf("the roots are imaginery\n");
realpart=(-b)/(2.0*a);
imgpart=sqrt(-desc)/(2.0*a);
printf("the roots are:\n");
printf("root1=%f + i %f\n",realpart,imgpart);
printf("root2= %f - i %f\n",realpart,imgpart);
}
return 0;
}

