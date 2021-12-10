

#include <iostream>

int main(int argc, const char * argv[]) {
    int i,j,k,n=5;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            std::cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            std::cout<<n+1-k;
        }
        std::cout<<"\n";
    }
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}
