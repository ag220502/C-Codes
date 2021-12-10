
#include <iostream>
#include <iomanip>

struct stu{
    int cost,bookid;
    char name[20],author[30];
};
stu s;
void getdata() {
    // insert code here...
    std::cout << "Enter the Book ID :";
    std::cin>>s.bookid;
    std::cout<<"Enter name : ";
    std::cin>>gets(s.name);
    std::cout<<"Enter name of Author : ";
    std::cin>>gets(s.author);
    std::cout<<"Enter cost of the book : ";
    std::cin>>s.cost;
}
void display(){
    std::cout<<"Name Of the book     : "<<s.name<<std::endl;
    std::cout<<"Book ID              : "<<s.bookid<<std::endl;
    std::cout<<"Name Of the Author   : "<<s.author<<std::endl;
    std::cout<<"Cost Of Book         : "<<s.cost<<std::endl;
}
int main(){
    getdata();
    display();
    return 0;
}

