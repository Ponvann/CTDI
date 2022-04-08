#include <iostream>

using namespace std;

int main(){
int i,j,k,temp;
int n=10;
int a[10];
//cout<<" the no of array elements:";
//cin>>n;
cout <<"enter the array elements";
for(i=0;i<n;i++){
   cin>>a[i];
}
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]>a[j])
        {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
         //break;
        }
    }

cout<<"enter the elements";
for(i=0;i<n;i++)
{
 cout<<("enter the sorted values;");
 cout<<a[i];
 }
}
 return 0;        
    }