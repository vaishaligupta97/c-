#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<iomanip>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input fronos STDIN. Print output to STDOUT */   
    int n,a[10],f[10],i,s[50],j,k,b[i],c[i],m;
    float median_q1,median_q3;
    int nos=0; //no of elements in s.
    cout<<"Enter the no of elements in array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of array : "<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	cout<<"Enter the frequency of each elenosent:"<<endl;
	for(i=0;i<n;i++)
    {
    	cin>>f[i];
	}
	cout<<"Array elements  frequency"<<endl;
	for(i=0;i<n;i++)
    {
    	cout<<a[i]<<"    ";
    	cout<<f[i]<<endl;
	}
	k=0;
	for(i=0;i<n;i++)
    {
    	for(j=0;j<f[i];j++)
    	{
    		s[k]=a[i];
    		k++;
		}
	}
	for(i=0;i<n;i++)
		nos+=f[i];
	
	for(i=0;i<nos;i++)
	{
		cout<<s[i]<<" ";
	}
	for(i=0;i<nos-1;i++)
    {
       bool issorted=true;
        for(j=0;j<nos-i-1;j++)
        {
            if(s[j+1]<s[j])
            {
               int temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                issorted=false;
            }
        }
        if(issorted==true)
        	break;
    }
    cout<<"Array [s] elements are: "<<endl;
    for(int i=0;i<nos;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    
    if(nos%2!=0)  //odd no of elements in s[].
    {
		int k=(nos-1)/2;
  //      median_q2=a[(nos-1)/2];
        for(i=0;i<((nos-1)/2);i++)
        {
        	b[i]=s[i];
        }
        
		for(i=0;i<((nos-1)/2);i++)
			cout<<" b["<<i<<"]:"<<b[i]<<" ";
		cout<<endl;	
		
		for(i=(nos+1)/2,m=0;i<nos;i++,m++)
        {
        	c[m]=s[i];
       	}

		for(m=0;m<k;m++)
			cout<<" c["<<m<<"]:"<<c[m]<<" ";
		cout<<endl;
		
		if(k%2!=0)
		{
			median_q1=b[(k-1)/2];
			median_q3=c[(k-1)/2];
		}
		else
		{
			int first_s=b[(k-1)/2]+b[k/2];
        	median_q1=first_s/2.0;
        	
        	int last_s=c[(k-1)/2]+c[k/2];
        	median_q3=last_s/2.0;
		}
	/*	cout<<"median_q1= "<<fixed<<setprecision(1)<<median_q1<<endl;
		cout<<"median_q3= "<<fixed<<setprecision(1)<<median_q3<<endl;*/
		
    }
    else
    {
    	int k=nos/2;
    	
    //    int s=a[(nos-1)/2]+a[nos/2];
	//    median_q2=s/2.0;
        
        for(i=0;i<nos/2;i++)
        	b[i]=s[i];
        
   		for(i=0;i<(nos/2);i++)
			cout<<" b["<<i<<"]:"<<b[i]<<" ";
		cout<<endl;
        
        for(i=nos/2,m=0;i<nos;i++,m++)
        {
        	c[m]=s[i];
		}
		
		for(m=0;m<k;m++)
			cout<<" c["<<m<<"]:"<<c[m]<<" ";
		cout<<endl;
		
		if(k%2!=0)
		{
			median_q1=b[(k-1)/2];
			median_q3=c[(k-1)/2];
		}
		else
		{
			int first_s=b[(k-1)/2]+b[k/2];
        	median_q1=first_s/2.0;
        	
        	int last_s=c[(k-1)/2]+c[k/2];
        	median_q3=last_s/2.0;
		}
	/*	cout<<"median_q1= "<<fixed<<setprecision(1)<<median_q1<<endl;
		cout<<"median_q3= "<<fixed<<setprecision(1)<<median_q3<<endl;*/
	
    }
  //  cout<<"median_q2= "<<fixed<<setprecision(1)<<median_q2<<endl;
   
    cout<<fixed<<setprecision(1)<<median_q1<<endl;
   // cout<<fixed<<setprecision(1)<<median_q2<<endl;
	cout<<fixed<<setprecision(1)<<median_q3<<endl;
	float inquartile_range=median_q3-median_q1;
	cout<<"inquartile_range = "<<fixed<<setprecision(1)<<inquartile_range<<endl;
    
    return 0;
}

