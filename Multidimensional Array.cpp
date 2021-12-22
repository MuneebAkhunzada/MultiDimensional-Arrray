
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3][3];
	cout<<"\n Enter values of Mltidimensional arrays. "<<endl;
	for(int i=0; i<3;i++)
	{
		for(int j=0; j<3;j++)
		{
			for(int k=0; k<3; k++)
			{
				cin>>arr[i][j][k];
			}
		}
	}
	cout<<"\n Your Enter Values of array are given below."<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				cout<<"\t"<<arr[i][j][k];
			}
			cout<<endl;
		}
	}
}
