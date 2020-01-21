#include<iostream>
#include<string>
using namespace std;

void RecieveAsset(string &status, long condition, string status1, string status2) {
    long asset;
    cout << "Input asset: ";
    cin >> asset;
    
    status = asset > condition ? status1 : status2;
}

int main() {
    short age;
    string status = "";
    cout << "Input age: ";
    cin >> age;
    
    if (age <= 20) {
        int height;
        cout << "Input height: ";
        cin >> height;
        
        if (height < 160) status = "UNFREIND";
        else if (height < 175) status = "FRIEND";
        else RecieveAsset(status, 69e+6, "MARRIED", "ONE-NIGHT-STAND");
    }
    else if (age < 30) {
        RecieveAsset(status, 1e+7, "BEST FREIND", "UNFREIND");
    }
    else {
        status = "UNFREIND";
    }
    
    cout << status;
    
    return 0;
}