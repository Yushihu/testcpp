#include<iostream>
using namespace std;

class CC{
public:
    CC(int c = 0){
        this->c = c;
        cout << "create cc " << this->c << endl;
    }
    ~CC(){
        cout << "delete cc " << this->c << endl;
    }
    CC(const CC& src){
        this->c = src.c;
        cout << "copy src " << this->c << endl;
    }
    CC& operator = (const CC& src){
        cout << "= cc " << this->c << endl;
    }
    int c;
};

int main(){
    cout << "CC c1" << endl;
    CC c1;
    cout << "CC c2(1) " << endl;
    CC c2(1);
    cout << "CC c3 = c2" << endl;
    CC c3 = c2;
    cout << "c4 = c3" << endl;
    CC c4;
    c4 = c3;
}