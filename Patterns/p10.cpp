
#include <iostream>

int main(int argc, const char * argv[]) {
    int i,j,k,n=5;
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            std::cout<<" ";
        }
        
        for(k=1;k<=i;k++)
        {
            std::cout<<ch;
        }
        ch++;
        std::cout<<"\n";
    }
    //std::cout << "Hello, World!\n";
    return 0;
}
