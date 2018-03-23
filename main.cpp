#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float weight,height,BMR;
    int number;
    int age;
    int numbercalaories;
    cout<<"1- is female"<<endl;
     cout<<"2- is male"<<endl;
    cout<<"enter your identity"<<endl;
    cin>>number;
    if(number==1){
        cout<<"enter your weight in pounds"<<endl;
        cin>>weight;
        cout<<"enter your height in inch"<<endl;
        cin>>height;
        cout<<"enter your age"<<endl;
        cin>>age;
        BMR=655+(4.3*weight)+(4.7*height)-(6.8*age);
        numbercalaories=BMR/230;
        cout<<"the number of calaories ="<<int(BMR/230);
    }
     else if(number==2){
        cout<<"enter your weight in pounds"<<endl;
        cin>>weight;
        cout<<"enter your height in inch"<<endl;
        cin>>height;
        cout<<"enter your age"<<endl;
        cin>>age;
        BMR=655+(6.3*weight)+(12.9*height)-(6.8*age);
         numbercalaories=BMR/230;
        cout<<"the number of calaories ="<<int(BMR/230);
    }
    return 0;
}
