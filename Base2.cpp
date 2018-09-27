#include<stdio.h>
#include<math.h>


int main()
{
	int b1=0,b2=0;
	char ques[80];
	char ans[80];
	int count=0,i=0,equ=0,dec=0,c=0,count2=0;
	
	printf("Enter the original base : ");
	scanf("%d",&b1);
	printf("Enter the question : ");
	scanf("%s",ques);
	printf("Enter the final base : ");
	scanf("%d",&b2);
	
	for(count=0;ques[count]!='\0';count++);

	count2=count;
	count-=1;
	while(count>=0)
	{
		if(ques[count]>='0' && ques[count]<='9')
		equ=ques[count]-48;
		
		else if(ques[count]>='A' && ques[count]<='Z')
		equ=ques[count]-55;
		
		dec+=equ*pow(b1,c);
		c++;
		
		count--;
		
	}
	
	/* printf("The question in decimal is : %d ",dec); */
	int rem=0,q=0;
	while(dec!=0)
	{
		rem=dec%b2;
		if(rem>=10)
		{
			ans[q]=rem+55;
		}
		else
		{
			ans[q]=rem+48;
		}
		dec/=b2;
		q++;
	}
	int j=0;
	printf("The answer in required base is : ");
	for(j=q-1;j>=0;j--)
	printf("%c",ans[j]);
		
	return 0;
}

