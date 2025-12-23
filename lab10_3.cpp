#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
    ifstream source ;
    source.open("score.txt");
    string textline;
    double x = 0,mean,sum,std,summ;
    while(getline(source,textline)){
        x++;
        sum+= atof(textline.c_str());
        summ+= pow(atof(textline.c_str()),2);
    }
    mean = sum/x;
    std = sqrt((summ/x)-pow(mean,2));
    cout << "Number of data = " << x << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean << "\n";
    cout << "Standard deviation = " << std;
}