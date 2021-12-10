#include <iostream>
#include <iomanip>
void Pattern1();
void Pattern1(int);
void Pattern1(int, char);

int main(int argc, const char * argv[]){
 //   Pattern1();
 //   Pattern1(8);
    Pattern1(15,'&');
}

void Pattern1()
{
    int i,j,k,n=5;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            std::cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            std::cout<<" ";
        }
        std::cout<<"\n";
    }
}

void Pattern1(int n)
{
    int i,j,k;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            std::cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            std::cout<<" *";
        }
        std::cout<<"\n";
    }
}

void Pattern1(int n, char c)
{
    int i,j,k;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            std::cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            std::cout<<" "<<c;
        }
        std::cout<<"\n";
    }
}
