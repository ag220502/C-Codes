

#include <iostream>

int main(int argc, const char * argv[]) {
    int i,j,n=5;
    char ch;
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=1;j<=i;j++)
        {
            std::cout<<ch;
            ch++;
        }
        std::cout<<std::endl;
    }
    return 0;
}
