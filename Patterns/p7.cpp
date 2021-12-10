

#include <iostream>

int main() {
    int i,j,n=5;
    char ch='A';
    for(i=n;i>=1;i--)
    {
        
        for(j=1;j<=i;j++)
        {
            std::cout<<" "<<ch;
            ch++;
        }
        std::cout<<"\n";
            
    }
        
    return 0;
}
