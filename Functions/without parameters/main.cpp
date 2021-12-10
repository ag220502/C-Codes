#include <iostream>
#include <math.h>
#include <iomanip>

float avg();
int main (){
    std::cout<<"\n Average Percent : "<<std::setprecision(2)<<avg();
    return 0;
}
float avg()
{       float a,b,c;
    std::cout<<"Enter 3 sub marks : ";
    std::cin>>a>>b>>c;
    std::cout<<"Total of 3 sub marks : "<<a+b+c<<"\n";
    return (a+b+c)/3;
    
}
