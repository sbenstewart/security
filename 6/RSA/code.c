#include<stdio.h>
#include<math.h>
int gcd(int a,int h)
{
    int temp;
    while(1)
    {
            temp=a%h;
            if(temp==0)
            {
                       return h;
            }
            a=h;
            h=temp;
    }
}
int main()
{
    double p=3;
    double q=7;
    double n=p*q;
    printf("p = %lf\n",p);
    printf("q = %lf\n",q);
    printf("n = %lf\n",n);
    double e=2;
    double phi=(p-1)*(q-1);
    printf("phi = %lf\n",phi);
    while(e<phi)
    {
                if(gcd(e,phi)==1)
                break;
                else
                e++;
    }
    printf("e = %lf\n",e);
    int k=2;
    double d=(1+(k*phi))/e;
    printf("d = %lf\n",d);
    double msg=12;
    printf("Message data = %lf\n",msg);
    double c=pow(msg,e);
    printf("pow\(msg,e\) = %lf\n",c);
    c=fmod(c,n);
    printf("c = %lf\n",c);
    printf("Encrypted data = %lf\n",c);
    double m=pow(c,d);
    printf("pow\(c,d\) = %lf\n",m);
    m=fmod(m,n);
    printf("Original message sent = %lf",m);
    getch();
    return 0;
}
