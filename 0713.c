#include <stdio.h>
#include <stdlib.h>

//#define F(x,y) ((x)+(y))
//#pragma pack(4)

//int main()
//{

	/*char a[20];
	char *p1 = (char *)a;
	char *p2 = (char *)(a + 5);
	int n = p2 - p1;
	printf("%d ", n);*/

	//int a = 3, b = 4;
	//printf("%d\n", F(a++, b++));//((a++)+(b++))

	/*int x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
	printf("%d ", x);*/

	/*int i = 1, sum = 0;
	while (i < 10)
	{
		sum = sum + 1;
		i++;
	}
	printf("i=%d,sum=%d", i, sum);*/
	//system("pause");
	//return 0;
//}
//int main(int argc, char * argv[])
//{
//	struct tagTest1
//	{
//		short a;
//		char d;
//		long b;
//		long c;
//	};
//	struct tagTest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//	struct tagTest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));//12   12   16
//	system("pause");
//	return 0;
//}
//#pragma pack() 

//enum ENUM_A
//{
//	x1,
//	y1,
//	z1=5,
//	A1,
//	B1
//};
//enum ENUM_A enumA = y1;
//enum ENUM_A enumB = B1;
//int main()
//{
//	printf("%d %d", y1, B1);
//	system("pause");
//	return 0;
//}

//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//void main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d ", k);
//	k = fun(j, m);
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//
//}

int num(unsigned int x)
{
	int count = 0;
	while (x)
	{
		if (1 == x % 2)
		{
			count++;
		}
		x = x / 2;
	}
	return count;
}
int main()
{
	int n = num(-1);
	printf("%d\n", n);
	system("pause");
	return 0;
}