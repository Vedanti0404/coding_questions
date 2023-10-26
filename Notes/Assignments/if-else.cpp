#include<bits/stdc++.h>
using namespace std;
int main(){
    
//The Greatest Number Among the Given Three Number
// int a,b,c;
// cout<<"Enter 3 numbers: ";
// cin>>a>>b>>c;
// if (a>=b && a>=c) {
//     cout <<"greatest number is: "<<a<< endl;
//     } else if (b>=a &&  b>=c) {
//        cout <<"greatest number is: "<<b<< endl;
//     } else {
//        cout <<"greatest number is: "<<c<< endl;
//     }



//The Number Is Positive or Negative                                         

// int n;
// cout<<"Enter a number: ";
// cin>>n;
// if(n==0){
//     cout<<"Number is zero"<<endl;
// } 
// else if(n<0){
//     cout<<"Number is negative"<<endl;
// }
//    else{
//     cout<<"Number is positive"<<endl;
//    } 




//Character Is Vowel or Consonant

// char c;
// cout<<"Enter a character: ";
// cin>>c;
// if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
//     cout<<c<<" is a vowel"<<endl;
// }
// else{
//     cout<<c<<" is a consonant"<<endl;
// }




//A Character Is an Alphabet or Not

// char c;
// cout<<"Enter a character: ";
// cin>>c;

// if(c>=97 && c<=122 || c>=65 && c<=90){
//     cout<<c<<" is an alphabet"<<endl;
// }else{
//     cout<<c<<" is not an alphabet"<<endl;
// }




//Uppercase, Lowercase, Special Character, or Digit
 
//  char c;
//  cout<<"Enter a character: ";
//  cin>>c;
// if (c>= 65 && c<= 90) {
//     cout<<c<<" is uppercase " << endl;
//     } else if (c>=97 && c<=122) {
//     cout<<c<<" is lowercase" << endl;
//     } else if (c>=48 && c<=57) {
//         cout<<c<<" is a digit."<< endl;
//     } else {
//         cout<<c<<" is a special character." << endl;
//     }




//date is correct or not

//  int d,m,y;
//  cout<<"Enter day, month, year in format [25 8 2023]: ";
//  cin>>d>>m>>y;
//  if(m==2)
//  {
//     if(d>=1 && d<=29)
//     {
//         cout<<"the date is: "<<d<<"/"<<m<<"/"<<y<<endl;  
//     }
//     else
//     {
//       cout<<"invalid date"<<endl;
//     }
// }
// else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
// {
//     if(d>=1 && d<=31)
//     {
//         cout<<"the date is: "<<d<<"/"<<m<<"/"<<y<<endl;
     
//     }
//     else
//     {
//        cout<<"invalid date"<<endl; 
//     }
// }
// else if(m==4 || m==6 || m==9 || m==11 )
// {
//     if(d>=1 && d<=30)
//     {
//         cout<<"the date is: "<<d<<"/"<<m<<"/"<<y<<endl;
     
//     }
//     else
//     {
//        cout<<"invalid date"<<endl; 
//     }
// } 
// else if(d>31 || m>12 || y<0)
// {
//  cout<<"invalid date"<<endl; 
// }




//Input week number and print weekday.


// int week;
// cout<<"Enter number of day"<<endl;
// cin>>week;
// if (week==1){
// cout<<"Monday";
// }
// else if (week==2)
// {
// cout<<"Tuesday";
// }
// else if (week==3)
// {
// cout<<"Wednesday";
// }
// else if(week==4)
// {
// cout<<"Thursday";
// }
// else if(week==5)
// {
// cout<<"Friday";
// }
// else if(week==6)
// {
// cout<<"Saturday";
// }
// else if(week==7)
// {
// cout<<"Sunday";
// }
// else
// {
// cout<<"number is invalid";
// }



//Input month number and print number of days in that month.

//     int monthno;

//    cout << "Enter month number from 1 to 12: ";
//    cin >> monthno;

//     int daysinm;

//     if (monthno == 1 || monthno == 3 || monthno == 5 || monthno == 7 || monthno == 8 || monthno == 10 || monthno == 12)
//      {
//         daysinm= 31;
//      } 
//      else if (monthno == 4 || monthno == 6 || monthno == 9 || monthno == 11)
//     {
//         daysinm = 30;
//     } 
//     else 
//     {
//         daysinm = 28; 
//     }
//     if (monthno < 1 || monthno > 12) 
//     {
//         cout << "Invalid month number" << naendl;
//         return 1;
//     }

//    cout << "Month " << monthno << " has " << daysinm << " days." << naendl;




// Input angles of a triangle and check whether the triangle is valid or not.

// int a,b,c;
// cout<<"Enter sides of triangle: ";
// cin>>a>>b>>c;

// if(a!=0 && b!=0 && c!=0)
// {
//     cout<<"It is a triangle"<<endl;

// }
// else
// {
// cout<<"It is not a triangle"<<endl;
// }


//profit loss

//Profit or Gain = Selling price – Cost Price
//Loss = Cost Price – Selling Price


// int cost,sell,profit,loss;
// cout<<"Enter cost price: ";
// cin>>cost;
// cout<<"Enter selling price: ";
// cin>>sell;

// if(sell>cost)
// {
//     profit=sell-cost;
//     cout<<"profit is: "<<profit<<endl;
// }
// else if(cost>sell)
// {
//     loss=cost-sell;
//     cout<<"Loss is: "<<loss<<endl;
// }


//Check whether the triangle is an equilateral, isosceles or scalene triangle.

int a,b,c;
cout<<"Enter sides of triangle: ";
cin>>a>>b>>c;

if(a==b && b==c)
{
    cout<<"It is isosceles triangle"<<endl;
}
else if(a==b || b==c ||c==a)
{
    cout<<"It is equilateral triangle"<<endl;
}
else
 {
cout<<"It is a Scalene triangle"<<endl;
}
    return 0;
}






