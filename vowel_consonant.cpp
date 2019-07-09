#include<iostream>
using namespace std;
int main()
{
    char z;
    cin>>z;

    if (z=='a' || z=='e' || z=='i' || z=='o'|| z=='u'){
        cout<<"Vowel";
    }
    else if(z>='a' & z<='z'){
        cout<<"Consonant";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}


