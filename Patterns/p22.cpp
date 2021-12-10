#include<iomanip>
#include<iostream>
void Pattern(int);
int main(){
    Pattern(10);
}
void Pattern(int n){
    int i,j;
    for(i=1;i<=n*2;i++)
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
