#include <iostream>
using namespace std;

class Book
{
    public:
        string title;
        string aouthr;
        int price;
        int pages;
    
};
int main(){
    // objiect 1
    Book bok1 ;
    bok1.title="algorithm";
    bok1.aouthr="ahmad";
    bok1.price=1200;
    bok1.pages=899;
    // end object2 1

    cout<<"title :"<<bok1.title<<endl;
    cout<<"authr :"<<bok1.aouthr<<endl;
    cout<<"price :"<<bok1.price<<endl;
    cout<<"pages :"<<bok1.pages<<endl;




    return 0;

}
