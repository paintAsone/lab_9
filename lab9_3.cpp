#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    int n = 0;
    double sum = 0, dou = 0;
    string num;
    while(getline(source,num)){
        sum += stod(num);
        dou += stod(num)*stod(num);
        n++;
    }
    double mean = 1.0/n*sum;
    double stand = 1.0/n*dou-mean*mean;
    cout << "Number of data = "<<n<<endl;
    cout << setprecision(3) << "Mean = "<<mean<<endl;
    cout << setprecision(3) << "Standard deviation = "<<sqrt(stand)<<endl;
    source.close();
    return 0;
}