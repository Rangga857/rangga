#include <iostream>
using namespace std;

double mean (double x, double y){
    return (x+y)/2;
}

string status (double z){
    if (z >= 60)
        return "lulus";
    else 
        return "tidaK lulus";
}

int main(){
    double nilM, nilB;
    cout << "masukan nilai matematika = ";
    cin >> nilM;
    cout << "masukan nilai Bahasa Indonesia = ";
    cin >> nilB;
    cout << "status kelulusan = " << status (mean(nilM, nilB));
    return 0;
}