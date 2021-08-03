/* Mazhar Hussain   registration : 20MDELE098
email:20Mdele098@uetmardan.edu.pk  */
/* write a program to display LCM and HCF of two numbers */
#include<stdio.h>
int main ()
{
	int a, b, remainder;//variable declaration//
	printf("enter any two positive numbers:\n");
	scanf("%d %d",&a,&b);
	
	int anynum1, anynum2, LCM;//variable declaration//
	anynum1=a;// one variable value equals to other//
	anynum2=b;// one variable value equals to other//
	do{
		remainder=a%b;//calculating remainder//
		a=b;// value of a equals to b//
		b=remainder;// value of b equals to remainder//
	}
	while(remainder>0);
	{
		printf("HCF=%d\n",a);//displaying result//
		LCM=(anynum1*anynum2)/a;//calculation//
		printf("LCM=%d\n",LCM);//displaying result//
	}
	return 0;
}
