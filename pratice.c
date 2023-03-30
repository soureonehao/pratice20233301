#include<stdio.h>
int score(int figure ) { //声明函数
		if (figure >= 60 && figure < 80) //分支结构判断等级
			return 1;
		else if (figure < 90 && figure >= 80)
			return 2;
		else if (figure <= 100 && figure >= 90) //函数体
			return 3;
		else if (figure  < 60)
			return 4;
		else
			return 5;
}
void main() {
	int figure[10], i ;
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &figure[i]);
	}
	for(i = 0; i < 10 ; i++){
		switch (score(figure[i])) //调用函数
		{
		case 1 :
			printf("第%d名同学是三等奖\n", i + 1);
			break;
		case 2 :
			printf("第%d名同学是二等奖\n", i + 1);
			break;
		case 3:
			printf("第%d名同学是一等奖\n", i + 1);
			break;
		case 4:
			printf("第%d名同学没获奖\n", i + 1);
			break;
		default:
			printf("输入有误!\n");
			break;
		}
		
	}
}