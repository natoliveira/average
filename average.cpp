#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;


double normal_distribution_pdf(double x, double mu, double std_dev){
    double result = (1/sqrt(2 * PI * pow(std_dev, 2))) * (exp((-1) * pow(x - mu,2)/2 * pow(std_dev, 2)));
    return result;
}

double normal_distribution_pdf(double x){

    double result = (1/sqrt(2 * PI)) * (exp((-1) * pow(x,2)/2));
    return result;
}

int main() {

    double normal_distribuition1 = normal_distribution_pdf(1, 1, 0.2);
    double normal_distribuition2 = normal_distribution_pdf(1);
    cout<<"Distribuicao Normal 1: " << normal_distribuition1 <<endl;
    cout<<"Distribuicao Normal 2: " << normal_distribuition2 << endl;

    return 0;
}
