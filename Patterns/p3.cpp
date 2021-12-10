

#include <iostream>

int main(int argc, const char * argv[]) {
    int i,j,n=5;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            std::cout<<" *";
        }
    std::cout << "\n";
    }
    return 0;
}
