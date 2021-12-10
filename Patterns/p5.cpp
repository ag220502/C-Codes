

#include <iostream>

int main() {
    int i,k,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            std::cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
