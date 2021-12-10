#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void add()
{
    int a,b,c;
    std::cout<<"Enter the numbers you want to add : "<<std::endl;
    std::cout<<"Enter first number : ";
    std::cin>>a;
    std::cout<<"Enter second number : ";
    std::cin>>b;
    c=a+b;
    std::cout<<"The addition of "<<a<<" and "<<b<<" is : "<<c<<std::endl;
}
void sub()
{
    int a,b,c;
    std::cout<<"Enter the numbers you want to subtract : "<<std::endl;
    std::cout<<"Enter first number : ";
    std::cin>>a;
    std::cout<<"Enter second number : ";
    std::cin>>b;
    c=a-b;
    std::cout<<"The subtraction of "<<a<<" and "<<b<<" is : "<<c<<std::endl;
}
void mul()
{
    float a,b,c;
    std::cout<<"Enter the numbers you want to multiply : "<<std::endl;
    std::cout<<"Enter first number : ";
    std::cin>>a;
    std::cout<<"Enter second number : ";
    std::cin>>b;
    c=a*b;
    std::cout<<"The multiplication of "<<a<<" and "<<b<<" is : "<<c<<std::endl;
}
void div()
{
    float a,b,c;
    std::cout<<"Enter the numbers you want to divide : "<<std::endl;
    std::cout<<"Enter first number : ";
    std::cin>>a;
    std::cout<<"Enter second number : ";
    std::cin>>b;
    c=a/b;
    std::cout<<"The division of "<<a<<" and "<<b<<" is : "<<c<<std::endl;
}
void square()
{
    float a;
    std::cout<<"Enter the number you want to square : ";
    std::cin>>a;
    std::cout<<"The square of "<<a<<" is :  "<<a*a<<std::endl;
}
void cube()
{
    float a;
    std::cout<<"Enter the number you want to cube : ";
    std::cin>>a;
    std::cout<<"The square of "<<a<<" is :  "<<a*a*a<<std::endl;
}
void anypower()
{
    float a,n;
    std::cout<<"Enter the number : ";
    std::cin>>a;
    std::cout<<"Enter the power of number you want to find : ";
    std::cin>>n;
    std::cout<<"The "<<n<<" power of "<<a<<" is :  "<<pow(a,n)<<std::endl;
}
void per()
{
    int per,rad,len,bre,a,b,c;
    float poc,pot,por,pos;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" **             Menu Of Perimeter Programs                    **"<<std::endl;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** 1. Circle                                                 **"<<std::endl;
    std::cout<<" ** 2. Rectangle                                              **"<<std::endl;
    std::cout<<" ** 3. Square                                                 **"<<std::endl;
    std::cout<<" ** 4. Triangle                                               **"<<std::endl;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** Enter your choice : ";
    std::cin>>per;
    switch (per) {
        case 1:
            std::cout<<"Enter Radius : ";
            std::cin>>rad;
            poc=2*3.14*rad;
            std::cout<<"The Perimeter of Circle is : "<<poc<<std::endl;
            break;
        case 2:
            std::cout<<"Enter Length and Breadth : ";
            std::cin>>len>>bre;
            por=2*(len+bre);
            std::cout<<"The Perimeter of Rectangle is : "<<por<<std::endl;
            break;
        case 3:
            std::cout<<"Enter Length : \n";
            std::cin>>len;
            pos=len*4;
            std::cout<<"The Perimeter of Square is : "<<pos<<std::endl;
            break;
        case 4:
            std::cout<<"Enter sides of Triangle : ";
            std::cin>>a>>b>>c;
            pot=a+b+c;
            std::cout<<"The Perimeter of Triangle is : "<<pot<<std::endl;
            break;
            std::cout<<"Oops !!... Wrong Choice !!"<<std::endl;
    }
}
void area()
{
    int area,rad,len,bre,bas,h;
    float aoc,aot,aor,aos;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" **                 Menu Of Area Programs                     **"<<std::endl;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** 1. Circle                                                 **\n";
    std::cout<<" ** 2. Rectangle                                              **\n";
    std::cout<<" ** 3. Square                                                 **\n";
    std::cout<<" ** 4. Triangle                                               **\n";
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** Enter your choice : ";
    std::cin>>area;
    switch (area) {
        case 1:
            std::cout<<"Enter Radius of Circle : ";
            std::cin>>rad;
            aoc=3.14*rad*rad;
            std::cout<<"The Area of Circle is : "<<aoc<<std::endl;
            break;
        case 2:
            std::cout<<"Enter Length and Breadth of Rectangle : ";
            std::cin>>len>>bre;
            aor=len*bre;
            std::cout<<"The Area of Rectangle is : "<<aor<<std::endl;
            break;
        case 3:
            std::cout<<"Enter Side of Square : \n";
            std::cin>>len;
            aos=len*len;
            std::cout<<"The Area of Square is : "<<aos<<std::endl;
            break;
        case 4:
            std::cout<<"Enter Base and Height : ";
            std::cin>>bas>>h;
            aot=bas*h/2;
            std::cout<<"The Area of Triangle is : "<<aot<<std::endl;
            break;
            std::cout<<"Oops !!... Wrong Choice !!"<<std::endl;
    }
}
void volume()
{
    int rad,vol,len,bre,h;
    float vos,voc,vocu,voco;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" **                 Menu Of Volume Programs                   **"<<std::endl;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** 1. Sphere                                                 **\n";
    std::cout<<" ** 2. Cuboid                                                 **\n";
    std::cout<<" ** 3. Cube                                                   **\n";
    std::cout<<" ** 4. Cone                                                   **\n";
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** Enter your choice : ";
    std::cin>>vol;
    switch (vol) {
        case 1:
            std::cout<<"Enter Radius : ";
            std::cin>>rad;
            vos=4*3.14*rad*rad*rad/3;
            std::cout<<"The Volume of Sphere is : "<<vos<<std::endl;
            break;
        case 2:
            std::cout<<"Enter Length and Breadth : ";
            std::cin>>len>>bre;
            std::cout<<"Enter Height : ";
            std::cin>>h;
            voc=len*bre*h;
            std::cout<<"The Volume of Cuboid is : "<<voc<<std::endl;
            break;
        case 3:
            std::cout<<"Enter Length : \n";
            std::cin>>len;
            vocu=pow(len,2);
            std::cout<<"The Volume of Cube is : "<<vocu<<std::endl;
            break;
        case 4:
            std::cout<<"Enter Radius and height : ";
            std::cin>>rad>>h;
            voco=3.14*rad*rad*h/3;
            std::cout<<"The Volume of Cone is : "<<voco<<std::endl;
            break;
        default:
            std::cout<<"Oops !!... Wrong Choice !!"<<std::endl;
            break;
    }
}
void factorial()
{
    float f=1,n,i;
    std::cout<<"Enter the value : ";
    std::cin>>n;
    for (i=1; i<=n; i++)
    {
        f=f*i;
    }
    std::cout<<"Factorial of "<<n<<" is "<<f<<std::endl;
}
void intofeet()
{
    float a,b;
    std::cout<<"Enter the measurment in Inches : "<<std::endl;
    std::cin>>a;
    b=a*0.0833;
    std::cout<<"The Measurment in Feet is : "<<b<<std::endl;
}
void fetoinches()
{
    float a,b;
    std::cout<<"Enter the measurment in Feet : "<<std::endl;
    std::cin>>a;
    b=a/0.0833;
    std::cout<<"The Measurment in Inches is : "<<b<<std::endl;
}
void fibonacci()
{
    float n,n1=1,n2=1,n3,i;
    std::cout<<"Enter number : ";
    std::cin>>n;
    std::cout<<n1<<"\t"<<n2<<"\t";
    for (i=1; i<=n-2; i++)
    {
        n3=n1+n2;
        std::cout<<n3<<"\t";
        n1=n2;
        n2=n3;
    }
}
void palindrome()
{
    int n,temp,rev,x;
    std::cout<<"Enter Value you want to check : ";
    std::cin>>n;
    x=n;
    while(n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if(x==rev)
    {
        std::cout<<" The Number you entered "<<x<<" is palindrome . "<<std::endl;
    }
    else
        std::cout<<" The Number you entered "<<x<<" is not palindrome . "<<std::endl;
}
void distance()
{
    float x1,x2,y1,y2,d;
    std::cout<<"Enter 1st coordinate of X : ";
    std::cin>>x1;
    std::cout<<"Enter 2nd coordinate of X : ";
    std::cin>>x2;
    std::cout<<"Enter 1st coordinate of Y : ";
    std::cin>>y1;
    std::cout<<"Enter 2nd coordinate of Y : ";
    std::cin>>y2;
    d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    std::cout<<"The distance between two Coordinates is : "<<d<<std::endl;
    
}
void slopeofline()
{
    float x1,x2,y1,y2,d;
    std::cout<<"Enter 1st coordinate of X : ";
    std::cin>>x1;
    std::cout<<"Enter 2nd coordinate of X : ";
    std::cin>>x2;
    std::cout<<"Enter 1st coordinate of Y : ";
    std::cin>>y1;
    std::cout<<"Enter 2nd coordinate of Y : ";
    std::cin>>y2;
    d=(y2-y1)/(x2-x1);
    std::cout<<"The slope of a line  between two Coordinates is : "<<d<<std::endl;
}
void table()
{
    float i=1,n,a;
    std::cout << "Enter any number : ";
    std::cin>>n;
    std::cout<<"Table of "<<n<<" is : \n";
    do{
        a=n*i;
        std::cout<<n<<" * "<<i<<" = "<<a<<"\n";
        i++;
    }
    while(i<=10);
}
void addmatrix()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    std::cout<<"Enetr Value for Matrix - A : "<<std::endl;
    for (i=0; i<3; i++)
    {
            for(j=0;j<3;j++)
            {
                std::cout<<" Enter Value Of Row "<<i+1<<" and column "<<j+1<<" : ";
                std::cin>>a[i][j];
            }
    }
    std::cout<<"Enetr Value for Matrix - B : "<<std::endl;
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<" Enter Value Of Row "<<i+1<<" and column "<<j+1<<" : ";
            std::cin>>b[i][j];
        }
    }
    std::cout<<"Values entered for Matrix-A is : \n";
        for (i=0; i<3; i++)
        {
            for(j=0;j<3;j++)
            {
                std::cout<<a[i][j]<<"\t";
            }
            std::cout<<"\n";
        }
    std::cout<<std::endl;
    std::cout<<"Values Entered for Matrix-B is : \n";
        for (i=0; i<3; i++)
        {
            for(j=0;j<3;j++)
            {
                std::cout<<b[i][j]<<"\t";
            }
            std::cout<<"\n";
        }
    std::cout<<std::endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    std::cout<<"The Sum Of Matrix-A and Matrix-B is : \n";
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                std::cout<<"   "<<c[i][j];
             }
             std::cout<<"\n";
        }
}
void submatrix()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    std::cout<<"Enetr Value for Matrix - A : "<<std::endl;
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<" Enter Value Of Row "<<i+1<<" and column "<<j+1<<" : ";
            std::cin>>a[i][j];
        }
    }
    std::cout<<"Enetr Value for Matrix - B : "<<std::endl;
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<" Enter Value Of Row "<<i+1<<" and column "<<j+1<<" : ";
            std::cin>>b[i][j];
        }
    }
    std::cout<<"Values entered for Matrix - A is : \n";
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<a[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    std::cout<<std::endl;
    std::cout<<"Values Entered for Matrix - B is : \n";
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<b[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    std::cout<<std::endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]-b[i][j];
    }
    std::cout<<"The Difference Of Matrix - A and Matrix - B is : \n";
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++) {
            std::cout<<"   "<<c[i][j];
        }
        std::cout<<"\n";
    }
}
void mulmatrix()
{
    float a[3][3],b[3][3],c[3][3];
    int i,j;
    std::cout<<"Enetr Value for Matrix - A : "<<std::endl;
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<" Enter Value Of Row "<<i+1<<" and column "<<j+1<<" : ";
            std::cin>>a[i][j];
        }
    }
    std::cout<<"Enetr Value for Matrix - B : "<<std::endl;
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<" Enter Value Of Row "<<i+1<<" and column "<<j+1<<" : ";
            std::cin>>b[i][j];
        }
    }
    std::cout<<"Values entered for Matrix - A is : \n";
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<a[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    std::cout<<std::endl;
    std::cout<<"Values Entered for Matrix - B is : \n";
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<b[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    std::cout<<std::endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]*b[i][j];
    }
    std::cout<<"The Multiplication Of Matrix - A and Matrix - B is : \n";
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            std::cout<<"   "<<c[i][j];
        }
        std::cout<<"\n";
    }
}
void tranmatrix()
{
    float a[3][3],b[3][3];
    int i,j;
    std::cout<<"Enetr Value for Matrix : "<<std::endl;
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<" Enter Value Of Row "<<i+1<<" and column "<<j+1<<" : ";
            std::cin>>a[i][j];
        }
    }
    std::cout<<"Values entered for Matrix - A is : \n";
    for (i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<a[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    std::cout<<std::endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            b[i][j]=a[j][i];
    }
    std::cout<<"The Transpose Of Matrix is : \n";
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++) {
            std::cout<<"   "<<b[i][j];
            
        }
        std::cout<<"\n";
    }

}
void matrix()
{
    int matrix;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" **                 Menu Of Matrix Programs                   **"<<std::endl;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** 1. Addition Of Matrix .                                   **\n";
    std::cout<<" ** 2. Subtraction Of Matrix .                                **\n";
    std::cout<<" ** 3. Multiplication Of Matrix .                             **\n";
    std::cout<<" ** 4. Transpose Of matrx .                                   **\n";
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** Enter your choice : ";
    std::cin>>matrix;
    switch (matrix) {
        case 1 : addmatrix();
            break;
        case 2 : submatrix();
            break;
        case 3 : mulmatrix();
            break;
        case 4 : tranmatrix();
            break;
        default : std::cout<<"Oops !!... Wrong Choice !!"<<std::endl;
            break;
    }
}
void divisors()
{
    int i,num;
    std::cout<<"Enter the number : ";
    std::cin>>num;
    for (i=1; i<=num/2;++i)
    {
        if(num%i==0)
            std::cout<<"\n"<<i;
    }
}
void trigo()
{
    float deg,value;
    int choice;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" **                 Menu Of Trigonometry Programs             **"<<std::endl;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** 1. Sin Series                                             **\n";
    std::cout<<" ** 2. Cos Series                                             **\n";
    std::cout<<" ** 3. Tan Series                                             **\n";
    std::cout<<" **                                                           **\n";
    std::cout<<" ** All Degrees Are Available                                 **\n";
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** Enter your choice : ";
    std::cin>>choice;
    switch (choice)
    {
        case 1 : std::cout<<"Enter degree you want to find : ";
            std::cin>>deg;
            value=sin(deg);
            std::cout<<"The value of Sin "<<deg<<" is : "<<value<<std::endl;
            break;
        case 2 : std::cout<<"Enter degree you want to find : ";
            std::cin>>deg;
            value=cos(deg);
            std::cout<<"The value of Cos "<<deg<<" is : "<<value<<std::endl;
            break;
        case 3 : std::cout<<"Enter degree you want to find : ";
            std::cin>>deg;
            value=tan(deg);
            std::cout<<"The value of Tan "<<deg<<" is : "<<value<<std::endl;
            break;
    }
}
void leap()
{
    int year;
    std::cout<<"Enter year : ";
    std::cin>>year;
    if (year%100==0)
    {
        if (year%400==0)
            std::cout<<"The year you entered is Leap year ."<<std::endl;
    }
    else if (year%4==0)
        std::cout<<"The year you entered is Leap year ."<<std::endl;
    else
        std::cout<<"The year you entered is not Leap year ."<<std::endl;
}
void cosine()
{
    float x,t,sum;
    int i,n=20;
    std::cout<<"Write the value of X : ";
    std::cin>>x;
    x=x*3.14/180;
    t=t+1;
    sum=1;
    for(i=1;i<=n;++i)
    {
        t=t*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i-1));
        sum+=t;
    }
    std::cout<<"cos(x)= "<<sum<<"\n";
}
void pythagoras()
{
    float a,b,c;
    std::cout<<"Enter the value of 1st side of triangle : ";
    std::cin>>a;
    std::cout<<"Enter the value of 2nd side of triangle : ";
    std::cin>>b;
    c = sqrt((pow(a,2))+(pow(b,2)));
    std::cout<<" The value of ongest side of triangle is :"<<c<<std::endl;
}
void currency()
{
    float usd,in,euro;
    int choice;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" **                 Menu Of Currency Programs                 **"<<std::endl;
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** 1. Indian To USD Dollar                                   **\n";
    std::cout<<" ** 2. Indian To Euro                                         **\n";
    std::cout<<" ** 3. USD Dollar To Indian                                   **\n";
    std::cout<<" ** 4. Euro To Indian                                         **\n";
    std::cout<<" ***************************************************************"<<std::endl;
    std::cout<<" ** Enter your choice : ";
    std::cin>>choice;
    switch (choice)
    {
        case 1 :
            std::cout<<"Enter Value in Inndian Rupees : ";
            std::cin>>in;
            usd=in/70.4;
            std::cout<<"The Value in Usd Dollar is : "<<usd<<std::endl;
            break;
        case 2 :
            std::cout<<"Enter Value in Inndian Rupees : ";
            std::cin>>in;
            euro=in/80;
            std::cout<<"The Value in Euro is : "<<euro<<std::endl;
            break;
        case 3 :
            std::cout<<"Enter Value in USD Dollar : ";
            std::cin>>usd;
            in=usd*70.4;
            std::cout<<"The Value in Indian Rupees is : "<<in<<std::endl;
            break;
        case 4 :
            std::cout<<"Enter Value in Euro : ";
            std::cin>>euro;
            in=euro*80;
            std::cout<<"The Value in Indian Rupees is : "<<in<<std::endl;
            break;
    }
}
void displaydata()
{
    std::cout<<" ************************************************************************************"<<std::endl;
    std::cout<<" **                                                                                **"<<std::endl;
    std::cout<<" **                                 All In One Calculator                          **"<<std::endl;
    std::cout<<" **                                                                                **"<<std::endl;
    std::cout<<" ************************************************************************************"<<std::endl;
    std::cout<<" **                                   Menu of Programs                             **"<<std::endl;
    std::cout<<" ************************************************************************************"<<std::endl;
    std::cout<<" **  1.Addition                  2.Subtraction                3.Multiplication     **"<<std::endl;
    std::cout<<" **  4.Division                  5.Square                     6.Cube               **"<<std::endl;
    std::cout<<" **  7.Power                     8.Perimeter Programs         9.Area Programs      **"<<std::endl;
    std::cout<<" **  10.Volume Programs         11.Inches to Feet            12.Feet to Inches     **"<<std::endl;
    std::cout<<" **  13.Factorial               14.Table Of No.              15.Fibonacci Series   **"<<std::endl;
    std::cout<<" **  16.Palindrome              17.Distance Formula          18.Currency change    **"<<std::endl;
    std::cout<<" **  19.Matrix Programs         20.Slope of line             21.Cosine Series      **"<<std::endl;
    std::cout<<" **  22.LeapYear                23.Pythagoras Theorem        24.Divisors           **"<<std::endl;
    std::cout<<" **  25.Trigonometry                                                               **"<<std::endl;
    std::cout<<" ************************************************************************************"<<std::endl;
}
int main()
{
        int choice ;
        char cont='y';
        do {
            displaydata();
    std::cout<<"Enter your choice : ";
    std::cin>>choice;
    switch (choice)
    {
            case 1:  add();
                break;
            case 2:  sub();
                break;
            case 3:  mul();
                break;
            case 4:  div();
                break;
            case 5:  square();
                break;
            case 6:  cube();
                break;
            case 7:  anypower();
                break;
            case 8:  per();
                break;
            case 9:  area();
                break;
            case 10: volume();
                break;
            case 11: intofeet();
                break;
            case 12: fetoinches();
                break;
            case 13: factorial();
                break;
            case 14: table();
                break;
            case 15: fibonacci();
                break;
            case 16: palindrome();
                break;
            case 17: distance();
                break;
            case 18: currency();
                break;
            case 19: matrix();
                break;
            case 20: slopeofline();
                break;
            case 21: cosine();
                break;
            case 22: leap();
                break;
            case 23: pythagoras();
                break;
            case 24: divisors();
                break;
            case 25: trigo();
                break;
            default:
            std::cout<<"Ooops !! ... Wrong Choice ."<<std::endl;
                break;
    }
            
        std::cout<<"Do you Want to continue (Y/N) : ";
        std::cin>>cont;
            } while (cont=='y');
    return 0;
}
