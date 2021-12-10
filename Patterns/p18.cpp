
#include <iostream>

int main() {
    int i,j,n=5;
    char ch;
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=1;j<=n;j++)
        {
            std::cout<<ch;
            ch++;
        }
        std::cout<<std::endl;
    }
    return 0;
}
