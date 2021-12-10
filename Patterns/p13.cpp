

#include <iostream>

int main(int argc, const char * argv[]) {
    int i,j,k,n=5;
    char ch='a';
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            std::cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            if(k%2==1)
                std::cout<<ch;
            else
                std::cout<<(char)toupper(ch);
            ch++;
        }
        std::cout<<"\n";
    }

    
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}
