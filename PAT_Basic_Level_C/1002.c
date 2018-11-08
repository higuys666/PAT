/*
1002 写出这个数 （20 分）
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
*/
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n=12,i,m,count=2;
//	for(i=0;i<count;i++){
//		m=n%10;
//		printf("%d   ",m);
//		n=n/10;
//	}
//	system("pause");
//	return 0;	
//}
 ///printf("%d\n",2%10);
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  i,n=0,count=0,m;
	//int s;
	char string[100],*p[5],a='0';
	char *py[]= {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	scanf_s("%s",string,101);
	//s=sizeof(string)/sizeof(string[0]);
	//strlen是不计算最后的字符串结束符'\0
	//s=strlen(string);
	//printf("%s\n%d\n",string,s);
	for(i=0;string[i]!='\0';i++){	
	/*for(i=0;i<s;;i++){*/
		n+=(int)string[i]-(int)a;	
	}
	printf("%d\n",n);
	m=n;
    while(m!=0)
    {
        m/=10;
        count++;
    }
	printf("%d\n",count);
	printf("%d\n",n);
	for(i=0;i<count;i++){
//	for(i=0;n>0;i++){
		m=n%10;
		printf("%d   ",m);
		p[i]=py[m];
		n=n/10;
	}
	printf("%d\n",count);
	printf("%s\n",py[3]);
	printf("%s\n",py[2]);
	printf("%s\n",py[n%10]);
	printf("%s\n",py[(n/10)%10]);
	printf("%s\n",p[1]);
	printf("%s\n",p[0]);
	for(i=(count-1);i>=0;i--){
	printf("%s ",p[i]);
	}
	printf("%c",8);
	system("pause");
	return 0;	
}



























