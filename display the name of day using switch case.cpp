#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"enter the value of day"<<endl;
    cin>>day;

switch(day)
{
    case 1: cout<<"Mon"<<endl;
    break;

    case 2: cout<<"Tues"<<endl;
    break;

    case 3: cout<<"Wed"<<endl;
    break;

    case 4: cout<<"thurs"<<endl;
    break;

    case 5: cout<<"fri"<<endl;
    break;
    
    case 6: cout<<"sat"<<endl;
    break;
    
    case 7:cout<<"sun"<<endl;

    default : cout<<"invalid value"<<endl;

}
    return 0;
}
