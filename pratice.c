#include<stdio.h>
int score(int figure ) { //��������
		if (figure >= 60 && figure < 80) //��֧�ṹ�жϵȼ�
			return 1;
		else if (figure < 90 && figure >= 80)
			return 2;
		else if (figure <= 100 && figure >= 90) //������
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
		switch (score(figure[i])) //���ú���
		{
		case 1 :
			printf("��%d��ͬѧ�����Ƚ�\n", i + 1);
			break;
		case 2 :
			printf("��%d��ͬѧ�Ƕ��Ƚ�\n", i + 1);
			break;
		case 3:
			printf("��%d��ͬѧ��һ�Ƚ�\n", i + 1);
			break;
		case 4:
			printf("��%d��ͬѧû��\n", i + 1);
			break;
		default:
			printf("��������!\n");
			break;
		}
		
	}
}