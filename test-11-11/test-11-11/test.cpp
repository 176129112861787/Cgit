//��������Ϸ
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//#include <time.h>
//int main()
//{
//	int i; 
//	int r;
//	srand((unsigned)time(NULL));
//	r = rand() % 100 + 1;
//	
//	while (1)
//	{
//		printf("��������Ҫ�µ����֣�\n");
//		scanf_s("%d", &i);
//		if (i == r)
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		if (i > r)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else
//		{
//			printf("��С�ˣ�\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

//���ַ��������в���Ԫ��
//#include<stdio.h>
//#include<windows.h>
//int binary_search(int arr[], int key, int left, int right)
//{
//	while (left <= right)
//	{
//        int mid = left + (right - left);
//	    if (key > arr[mid])
//	    {
//		   left = mid + 1;
//	    }
//	    else if (key < arr[mid])
//	    {
//		   right = mid - 1;
//	    }
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int left = 0;
//	int ret = 0;
//	int sz = 0;
//	int k = 8;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	ret=binary_search(arr, k, left, right);
//	if (ret == -1)
//	{
//      printf("�Ҳ���");
//	}
//	else
//	{
//      printf("�ҵ��ˣ�%d", ret);
//	}
//	system("pause");
//	return 0;
//}

//ģ����������
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i = 0;
//	int m = 0;
//	for (i = 1; i <= 3; i++)
//	{
//        printf("���������룺");
//	    scanf_s("%d", &m);
//	    if (m == 1787)
//	    {
//		  printf("��½�ɹ�\n");
//		  break;
//	    }
//	}
//	if (i > 3)
//	{
//		printf("�����������ξ�����ȷ���˳�����\n");
//	}
//	system("pause");
//	return 0;
//}

//�����ַ�
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	char ch;
//	printf("�������ַ���");
//	ch=getchar();
//	if (ch >= '0'&&ch <= '9');
//	if (ch >= 'a'&&ch <= 'z')
//	{
//		ch -=  32;
//		printf("%c\n", ch);
//	}
//	else if (ch >= 'A'&&ch <= 'Z')
//	{
//		ch +=  32;
//		printf("%c\n", ch);
//	}
//	system("pause");
//	return 0;
//}

//�˷��ھ���
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	printf("������˷��ھ����������������");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//	    {
//		   printf("%d*%d=%d  ",i,j,i*j);
//	    }
//		printf("\n");
//	}
//	
//	system("pause");
//	return 0;
//}

//����ʵ����������
//#include<stdio.h>
//#include<windows.h>
//void Swap(int* p1, int* p2)
//{
//	int temp;
//	temp =* p1;
//	* p1 =* p2;
//	* p2 = temp;
//}
//int main()
//{
//	int x = 5;
//	int y = 3;
//	Swap(&x, &y);
//	printf("x=%d,y=%d\n", x, y);
//	system("pause");
//	return 0;
//}

//�����ж�����
//#include<stdio.h>
//#include<windows.h>
//int is_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 100) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int n = 0;
//	int year = 0;
//	printf("��������ݣ�");
//	scanf_s("%d", &year);
//	n = is_year(year);
//	if (n == 1)
//	{
//		printf("%d������\n",year);
//	}
//	else
//	{
//		printf("%d��������\n",year);
//	}
//	system("pause");
//	return 0;
//}


//���麯��
//#include<stdio.h>
//#include<windows.h>
//void Init(int arr[], int sz)
//{
//    int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void empty(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp;
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);
//	printf("��ʼ�������飺\n");
//	print(arr, sz);
//	empty(arr,sz);
//	printf("��պ�����飺\n");
//	print(arr, sz);
//	printf("���³�ʼ������\n");
//	Init(arr, sz);
//	print(arr, sz);
//	reverse(arr,sz);
//	printf("���õ�����Ϊ��\n");
//	print(arr, sz);
//	system("pause");
//	return 0;
//}

//�����ж�����
//#include<stdio.h>
//#include<windows.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	 int m = 0;
//	 int num = 0;j
//	 printf("���������֣�");
//	 scanf_s("%d", &num);
//	 m = is_prime(num);
//	 if (m == 1)
//	 {
//		printf("%d������\n",num);
//	 } 
//	 else
//	 {
//		printf("%d��������\n",num);
//	 }
//	system("pause");
//	return 0;
//}