#include <iostream>

using namespace std;

int main() {
    char user;
    do{
    double weight, height, bmi;
    cout<<"enter the weight:";
    cin>>weight;

    cout<<"enter the height:";
    cin>>height;

    bmi=weight/(height*height);
    cout<< "your bmi is:"<<bmi<<endl;

    if(bmi<18.5) {
        cout<<"underweight";

    } else if(bmi>=18.5 && bmi<24.9) {
        cout<<"normal weight";

    } else if(bmi>=25 && bmi<29.9) {
        cout<<"overweight";

    } else {
        cout<<"obesity";
    }

    return 0;

}
