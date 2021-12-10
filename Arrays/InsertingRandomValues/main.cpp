//
//  main.cpp
//  Random
//
//  Created by Akshay Garg on 17/12/18.
//  Copyright © 2018 Akshay Garg. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
   
    int sum=0,i,n,s[1000];
    std::cout << "Enter size of array (max:100): ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        s[i]=(unsigned int)(random())%93;
        std::cout<<s[i]<<"\t";
    }
    std::cout<<"\n";
    return 0;
}
