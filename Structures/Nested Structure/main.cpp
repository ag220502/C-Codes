#include <iostream>
#include <iomanip>
struct address{
    int houseno;
    int pin;
    char street1[20],street2[20],area[20],city[20];
};
struct emp{
    int empid;
    char name[20];
    float basic;
    address a;
}e;
void getdata() {
    std::cout << "Enter house no. :";
    std::cin>>e.a.houseno;
    std::cout<<"Enter Street 1 :  ";
    std::cin>>gets(e.a.street1);
    std::cout<<"Enter Sreet 2 : ";
    std::cin>>gets(e.a.street2);
    std::cout<<"Enter Area : ";
    std::cin>>gets(e.a.area);
    std::cout<<"Enter City : ";
    std::cin>>gets(e.a.city);
    std::cout<<"Enter Emp ID : ";
    std::cin>>e.empid;
    std::cout<<"Enter Name : ";
    std::cin>>e.name;
    std::cout<<"Enter Salary : ";
    std::cin>>e.basic;
}
void display(){
    std::cout<<"Name : "<<e.name<<std::endl;
    std::cout << "House no. :"<<e.a.houseno<<std::endl;
    std::cout<<"Street 1 :  "<<e.a.street1<<std::endl;
    std::cout<<"Sreet 2 : "<<e.a.street2<<std::endl;
    std::cout<<"Area : "<<e.a.area<<std::endl;
    std::cout<<"City : "<<e.a.city<<std::endl;
    std::cout<<"Emp ID : "<<e.empid<<std::endl;
    std::cout<<"Salary : "<<e.basic<<std::endl;
   
}
int main(){
    getdata();
    display();
    return 0;
}


