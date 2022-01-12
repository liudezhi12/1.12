#include <stdio.h>
#include<string.h>
#include<math.h>
#include"标头.h"  //.h头文件放声明，.c文件放功能。
int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}

//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//           //本质上这个arr是指针
//int sb(int arr[], int k ,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	
//	while(left<=right)
//	{
//		int mid = (right + left) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else if(k==arr[mid])
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 70;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int ret = sb(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("zhaobudao");
//	}
//	else
//		printf("%d\n", ret);
//	return 0;
//}
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000;i <= 2000; i++)
//	{
//		if(1==is_leap_year(i))
//			printf("%d ", i);
//	}
//	return 0;
//}
//int is_prime(int n)
//{
//	int x = 0;
//	for (x = 2; x <=sqrt(n); x++)
//	{
//		if (n % x == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//void swap1(int x,int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void swap2(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 100;
//	int b = 200;
//	printf("a=%d b=%d\n", a, b);
//	swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	swap2(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//}
//int main()
//{
//	char arr[] = { "dddd fgggggggg"};
//	memset(arr, 'g', 5);
//	printf("%s\n", arr);
//}