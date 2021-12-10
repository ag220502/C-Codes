
#include <iostream>
using namespace std;
class lcd
{
    int model_no;
    char manufacturer[30];
    int cost;
    int sold;
    float sale_amt;
    float calculate()
    {
        float x;
        x=sold*cost;
        return(x);
    }
    
public:
    void input()
    {
        
        cout<<"Enter ModelNo.       : ";
        cin>>model_no;
        cout<<"Enter manufacturer   : ";
        cin>>manufacturer;
        cout<<"Enter cost per piece : ";
        cin>>cost;
        cout<<"Enter piece sold     : ";
        cin>>sold;
        sale_amt = calculate();
    }
    
    void display()
    {
        cout<<"ModelNo. : "<<model_no<<endl;
        cout<<"Manufacturer  : "<<manufacturer<<endl;
        cout<<"Cost per piece : "<<cost<<endl;
        cout<<"Piece sold : "<<sold<<endl;
        cout<<"Total Amount : "<<sale_amt<<endl;
        
    }
};
int main(int argc, const char * argv[]) {
    lcd l1;
    l1.input();
    l1.display();
    return 0;
}
