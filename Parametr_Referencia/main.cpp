#include <iostream>
#include <limits>

using namespace std;

bool readInt(int &value){

    cout << "&value: " << &value << endl;
    cin >> value;
    if (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        return false;
    }
    return true;
}

int main(){

    int v = 0;

    cout << "&v: " << &v << endl;
    cout << "Type number: " << endl;
    if(!readInt(v)){
        cout << "Invalid input!\n";
    } else {
        cout << "The Number is: " << v << endl;
    }

    return 0;
}

