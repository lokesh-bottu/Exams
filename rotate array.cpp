#include<iostream>
using namespace std;
int main()
{
	int n = 4;
	int arr[n][n];
	for(int i=0;i<4;i++)
	{
		for(int j =0;j<4;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	
	cout<<endl;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=i-1;j>=0;j--)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	
	for(int j=0;j<n;j++)
	{
		int last = n-1;
		for(int i=0;i<n/2;i++)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[last][j];
			arr[last][j] = temp;
			last--;
		}
	}
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
}






//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[4][4];
//	int n = 4;
//	for(int i=0;i<4;i++)
//	{
//		for(int j =0;j<4;j++)
//		{
//			cin>>arr[i][j];
//		}
//	}
//	
//	
//	for(int i=0;i<4;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	cout<<endl;
//	
//	
//	for(int i=0;i<4;i++)
//	{
//		for(int j=i+1;j<4;j++)
//		{
//			int temp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = temp;
//		}
//	}
//	
//	
//	
//	
//	for(int i=0;i<n;i++)
//	{
//		int last = n-1;
//		for(int j=0;j<n/2;j++)
//		{
//			int value = arr[i][j];
//			arr[i][j] = arr[i][last];
//			arr[i][last] = value;
//			last--;
//		}
//	}
//	
//	for(int i=0;i<4;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	cout<<endl;
//}
