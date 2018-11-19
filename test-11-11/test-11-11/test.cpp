猜数字游戏
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include <time.h>
int main()
{
	int i; 
	int r;
	srand((unsigned)time(NULL));
	r = rand() % 100 + 1;
	
	while (1)
	{
		printf("请输入你要猜的数字：\n");
		scanf_s("%d", &i);
		if (i == r)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		if (i > r)
    {
			printf("猜大了！\n");
		}
		else
		{
			printf("猜小了！\n");
		}
	}
	system("pause");
	return 0;
}

二分法在数组中查找元素
#include<stdio.h>
#include<windows.h>
int binary_search(int arr[], int key, int left, int right)
{
	while (left <= right)
	{
        int mid = left + (right - left);
	    if (key > arr[mid])
	    {
		   left = mid + 1;
	    }
	    else if (key < arr[mid])
	    {
		   right = mid - 1;
	    }
		else
		{
       return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left = 0;
	int ret = 0;
	int sz = 0;
	int k = 8;
	sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	ret=binary_search(arr, k, left, right);
	if (ret == -1)
	{
      printf("找不到");
	}
	else
	{
      printf("找到了：%d", ret);
	}
	system("pause");
	return 0;
}

模拟密码输入
#include<stdio.h>
#include<windows.h>
int main()
{
	int i = 0;
	int m = 0;
	for (i = 1; i <= 3; i++)
	{
        printf("请输入密码：");
	    scanf_s("%d", &m);
	    if (m == 1787)
	    {
		  printf("登陆成功\n");
      break;
	    }
	}
	if (i > 3)
	{
    printf("密码输入三次均不正确，退出程序\n");
	}
	system("pause");
	return 0;
}

接受字符
#include<stdio.h>
#include<windows.h>
int main()
{
	char ch;
  printf("请输入字符：");
  ch=getchar();
	if (ch >= '0'&&ch <= '9');
	if (ch >= 'a'&&ch <= 'z')
	{
		ch -=  32;
	  printf("%c\n", ch);
	}
	else if (ch >= 'A'&&ch <= 'Z')
	{
		ch +=  32;
		printf("%c\n", ch);
	}
	system("pause");
	return 0;
}

乘法口诀表
#include<stdio.h>
#include<windows.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	printf("请输入乘法口诀表的行数，列数：");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
	    {
		   printf("%d*%d=%d  ",i,j,i*j);
	    }
		printf("\n");
	}
	system("pause");
	return 0;
}

函数实现两数交换
#include<stdio.h>
#include<windows.h>
void Swap(int* p1, int* p2)
{
	int temp;
	temp =* p1;
	* p1 =* p2;
	* p2 = temp;
}
int main()
{
	int x = 5;
	int y = 3;
	Swap(&x, &y);
	printf("x=%d,y=%d\n", x, y);
	system("pause");
	return 0;
}

函数判断闰年
#include<stdio.h>
#include<windows.h>
int is_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 100) || (y % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n = 0;
	int year = 0;
	printf("请输入年份：");
	scanf_s("%d", &year);
	n = is_year(year);
	if (n == 1)
	{
		printf("%d是闰年\n",year);
	}
	else
	{
		printf("%d不是闰年\n",year);
	}
	system("pause");
	return 0;
}


数组函数
#include<stdio.h>
#include<windows.h>
void Init(int arr[], int sz)
{
    int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
}
void empty(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp;
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = {0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr,sz);
	printf("初始化的数组：\n");
	print(arr, sz);
	empty(arr,sz);
	printf("清空后的数组：\n");
	print(arr, sz);
	printf("重新初始化数组\n");
	Init(arr, sz);
	print(arr, sz);
	reverse(arr,sz);
	printf("逆置的数组为：\n");
	print(arr, sz);
	system("pause");
	return 0;
}

函数判断素数
#include<stdio.h>
#include<windows.h>
int is_prime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	 int m = 0;
	 int num = 0;j
	 printf("请输入数字：");
	 scanf_s("%d", &num);
	 m = is_prime(num);
	 if (m == 1)
	 {
		printf("%d是素数\n",num);
	 } 
	 else
  {
		printf("%d不是素数\n",num);
	 }
	system("pause");
	return 0;
}
