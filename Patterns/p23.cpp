#include <iostream>
#include <iomanip>
void Pattern1(int);
void Pattern2(int);
void Pattern3(int);
int main(){
    int n,ch;
    do{
    std::cout<<"Menu of Patterns\n";
    std::cout<<"0. Exit\n";
    std::cout<<"1. Pattern1\n";
    std::cout<<"2. Pattern2\n";
    std::cout<<"3. Pattern3\n";
    std::cout<<"Enter your choice: ";
    std::cin>>ch;
    if(ch)
    {
        std::cout<<"Enter N: ";
        std::cin>>n;
    }
    switch(ch)
    {
        case 1: Pattern1(n); break;
        case 2: Pattern2(n); break;
        case 3: Pattern3(n); break;
    }
        std::cin.get();
    }while(ch);
}

void Pattern1(int n){
int i,j;
    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=i;j++)
                std::cout<<" *";
        }
        else
        {
            for(j=1;j<=n*2-i;j++)
                std::cout<<" *";
        }
        std::cout<<std::endl;
    }
}

void Pattern2(int n){
    int i,j;
    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=i;j++)
                std::cout<<j;
        }
        else
        {
            for(j=1;j<=n*2-i;j++)
                std::cout<<j;
        }
        std::cout<<std::endl;
    }
}
void Pattern3(int n){
    int i,j;
    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=n-i;j++)
                std::cout<<j;
        }
        else
        {
            for(j=1;j<=n-i;j++)
                std::cout<<j;
        }
        std::cout<<std::endl;
    }
}

