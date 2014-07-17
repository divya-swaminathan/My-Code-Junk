#include <iostream>

using namespace std;
int is_prime(int num)
{
    int flag=0;
    if(num==2||num==3)
    return num;
    else if(num==1)
    return 0;
    else
    {
       for(int i=2;i<num;i++)
       {
           if(num%i==0)
            flag++;
            if(flag>=2)
            return 0;
       }
       if(flag==0)
            return num;
        else
            return 0;
    }
}
int main()
{
    int nfp=0;
    int num=2;
    int temp;
    int sum=0;
    while(nfp<1000)
    {
        temp=is_prime(num);
        if(temp==num)
         {
           ++nfp;
           ++num;
           sum=sum+temp;
         }
          else
          {
            ++num;
          }

    }
    cout<<endl<<sum;
}
