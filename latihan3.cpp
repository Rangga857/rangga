#include <iostream>
using namespace std;

double mean (double x, double y){
    return (x+y)/2;
}

string status(double z){
    if (z >= 50)
        return "lulus";
    else
        return "tidak lulus";
}

string status2(double z,double nil){
    if (z >= 50 || nil >= 90)
        return "lulus";
    else 
        return "tidak lulus";
}

int main(){
    double nilB, nilM;
    cout << "masukan nilai psikotes = ";
    cin >> nilB;
    cout << "masukan nilai kebugaran jasmani = ";
    cin >> nilM;
    cout << "status kelulusan = " << status(mean(nilB, nilM));
    cout << "\nstatus kelulusan ke 2 = " << status2(mean(nilB, nilM),nilB);
    return 0;
}