#include<iostream>
using namespace std;

void  isort(int* a, int size);//��������
int main()
{
	int a[] = { 55,2,6,32,12,9,73,26,37 };
	int len = sizeof(a) / sizeof(int);//Ԫ�ظ���
	for (int i = 0; i < len; i++)
		cout << a[i] << ",";
	cout << endl << endl;//���Ԫ��
	isort(a, len);//����������
}
	void isort(int a[], int size)//���庯������������
{
		int inserter, index;//������������
	
	for (int i = 1; i < size; i++)//��ִ��size-1��
	{
		inserter = a[i];
		index = i - 1;
		while (index >= 0 && inserter < a[index])//Ѱ�Ҳ����
		{
			a[index + 1] = a[index];//��Ųһ��λ��
			index--;
		}
		a[index + 1] = inserter;//����
		for (int j = 0; j < size; j++)//�Ƚ�һ�ֺ�����
		{
			cout << a[j] << ",";
			if (j == i)//��������δ����ķֽ���
				cout << '|';
		}
		cout << endl;
	}
}