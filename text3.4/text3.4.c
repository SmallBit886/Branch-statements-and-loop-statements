#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////��һ�����������в��Ҿ����ĳ������n�������ֲ��ң�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//n=7��ʱ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int lift = 0;
//	int right = sz - 1;
//	while (lift <= right)
//	{
//		int mid = (lift + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			lift = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}	 
//	}
//	if (lift > right)
//	{
//		printf("�Ҳ���\n");
//
//	}
//	return 0;
//}
// 
////���� 1!+2!+3!+����+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	//scanf("%d", &n);
//	int x = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		//x=1;
//		//for (i = 1; i <= n; i++)
//		//{
//		//	x = x * i;
//		x = x * n;
//	//	}
//		sum = sum + x;//1+2+6=9
//	}
//	printf("%d\n", sum);//4037913
//	return 0;
//}

// ���� n�Ľ׳�
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);//n=3
	int x = 1;
	for (i = 1; i <= n; i++)
	{	
		x = x * i;//1*1 1*2 2*3
		
	}
	printf("%d\n", x);//6 24

	return 0;
}