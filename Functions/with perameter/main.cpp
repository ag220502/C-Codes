
#include <iostream>
#include <math.h>
#include <iomanip>

float avg(float, float, float);
int main (){
    float s1,s2,s3,ans;
    std::cout<<"Enter 3 sub marks : ";
    std::cin>>s1>>s2>>s3;
    ans=avg(s1,s2,s3);
    std::cout<<"\n Average Percent : "<<ans;
    return 0;
}
float avg(float a, float b, float c)
{       float d=(a+b+c)/3;
    std::cout<<"Total of 3 sub marks : "<<a+b+c<<"\n";
    return d;
    
}

