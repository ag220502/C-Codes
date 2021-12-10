// Hotel Management

#include <iostream>
using namespace std;
class Hotel
{
    int roomno;
    char name[20];
    float charges;
    int days;
    float calculate()
    {
        float x;
        x=charges*days;
        if(x>10000)
            return(1.05*x);
        else
            return(x);
    }
public:
    void insertinfo(){
        cout<<"***********************************"<<endl;
        cout<<"*********** Enter Details *********"<<endl;
        cout<<"***********************************"<<endl;
        cout<<"Enter Room No. : ";
        cin>>roomno;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Charges : ";
        cin>>charges;
        cout<<"Enter Days : ";
        cin>>days;
        charges=calculate();
    }
    void showinfo()
    {
        cout<<"Room No. : "<<roomno<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Days : " <<days<<endl;
        cout<<"Amount : "<<charges<<endl;
    }
    
};
int main(int argc, const char * argv[]) {
    Hotel h1;
    h1.insertinfo();
    h1.showinfo();
    
    return 0;
}
