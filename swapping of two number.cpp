#include <iostream>
using namespace std;
/*

int main()
{
    int a,b;
    cin>>a>>b;
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<a<<" "<<b<<endl;
}
*/
int main()
{
    int a,b;
    cin>>a>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}