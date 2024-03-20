#include<iostream>
using namespace std;

class Book
{
public:
    char name;
    int price;
    int cbooks;

    int countBooks(int p){
        if(price<p){
            return 1;
        }else{
            return 0;
        }
    }
    bool isBookPresent(char n){
        if(name==n) return true;
        else return false;
    }
};


int main(){

    Book hcverma;
    hcverma.name='H';
    hcverma.price=100;
    hcverma.cbooks=200;
    cout<<hcverma.countBooks(200)<<endl;
    cout<<hcverma.isBookPresent('m');

}