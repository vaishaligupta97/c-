#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,a[10],i;
	float sum=0.0; 
    float mean; 
    float median;
    float mode;
    cout<<"Enter the no of elements in ARRAY:"<<endl;
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    for( i=0;i<n;i++)
    {
        cout<<"Enter the"<<i<<" element"<<endl;
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean=sum/n;
    cout<<"mean is= "<<fixed<<setprecision(1)<<mean<<endl;
    for(int i=0;i<n-1;i++)
    {
       bool issorted=true;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
               int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                issorted=false;
            }
        }
        if(issorted==true)
        	break;
    }
    cout<<"Array elements are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(n%2!=0)
    {
        median=a[(n-1)/2];
    }
    else
    {
        int s=a[(n-1)/2]+a[n/2];
        median=s/2.0;
    }
    cout<<"median= "<<setprecision(1)<<median<<endl;
	
	int freq[10]={0};
	int pos,j;
	for(i=0;i<n;i++)
	{
		freq[i]++;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			freq[i]++;
			a[j]='\0';
		}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!='\0')
		{
			cout<<"Array elements  its frequency"<<endl;
			cout<<a[i]<<"      "<<freq[i]<<endl;
		}
	}
	int max=freq[0];
	for(i=1;i<n;i++)
	{
		if(freq[i]>max)
		{
			max=freq[i];
			pos=i;
		}
	}
	cout<<"mode= "<<a[pos]<<endl;
    return 0;
}

