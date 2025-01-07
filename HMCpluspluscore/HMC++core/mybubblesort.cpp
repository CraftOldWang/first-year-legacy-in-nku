#include"mybubblesort.h"
//注意到编写的东西...头文件与源文件名字不一定要相同,起作用的是
//"在头文件中写函数声明"这一件事
//但是为了规范,方便查找,我们会把同一个函数的头文件和源文件写成一样的
//不过对于那种包含好多东西的头文件...那当然是自己想命名喽.
//有点像mc的整合包.

//已知长度的整数数组版本
//传入的参数为一个整数数组(数组名类似一个const pointer)和长度
//从0到n-1是从小到大
void bubblesort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j=0;j<n-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				
			}
		}
	}
}

//以下部分对分文件编写没有任何贡献....
void bubblesort(int a[], int b);
//注意,参数名称可以在定义时省略,就算写,也可随便取名字;不过一般就写一样的
void bubblesort(int[], int);