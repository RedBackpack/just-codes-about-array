#include<iostream>
using namespace std;

void  isort(int* a, int size);//声明函数
int main()
{
	int a[] = { 55,2,6,32,12,9,73,26,37 };
	int len = sizeof(a) / sizeof(int);//元素个数
	for (int i = 0; i < len; i++)
		cout << a[i] << ",";
	cout << endl << endl;//输出元素
	isort(a, len);//调用排序函数
}
	void isort(int a[], int size)//定义函数，插入排序
{
		int inserter, index;//定义两个变量
	
	for (int i = 1; i < size; i++)//共执行size-1轮
	{
		inserter = a[i];
		index = i - 1;
		while (index >= 0 && inserter < a[index])//寻找插入点
		{
			a[index + 1] = a[index];//后挪一个位置
			index--;
		}
		a[index + 1] = inserter;//插入
		for (int j = 0; j < size; j++)//比较一轮后就输出
		{
			cout << a[j] << ",";
			if (j == i)//已排序与未排序的分界线
				cout << '|';
		}
		cout << endl;
	}
}
