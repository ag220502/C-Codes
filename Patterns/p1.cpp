

#include <iostream>

int main() {
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            std::cout<<" "<<j;
        }
        std::cout<<std::endl;
    }
    return 0;
}
