

#include <iostream>

int main() {
    int i,j,n=5;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            std::cout<<" "<<n+9-i;
        }n--;
        std::cout<<"\n";
    }
    
    return 0;
}
