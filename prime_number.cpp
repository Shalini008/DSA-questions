
#include <bits/stdc++.h>
using namespace std;


int main() {
int count=0;

int n;

cin>>n;
for(int i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==0)
{
cout<<"yes"<<endl;
}
else
{
cout<<"no"<<endl;
}
return 0;
}
