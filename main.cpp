#include <iostream>
#include <vector>
#include <string>

using namespace std;

class EmployeeInfo {
public:
    vector<string> employees;
    vector<double> prices;

    EmployeeInfo() {
        employees = {"W1", "W2", "W3", "W4", "W5", "W6", "W7"};
        prices = {4.00, 5.50, 10.00, 4.00, 7.00, 2.00, 3.25};
    }
};

void reOrder(vector<string>& employees, vector<double>& prices){

    for (int i = 0; i < 7; i++)
    {
        for (int l = 0; l < 7; l++) 
        {
            if (prices[i] > prices[l]) 
            {
            double check = prices[i];
            string check2 = employees[i];
            prices[i] = prices[l];
            employees[i] = employees[l]; 
            prices[l] = check;
            employees[l] = check2;
            }
        }
    }
return;
}

string assignPerson(vector<string>& employees_f, vector<double>& price_f) {

    int flip = 0;
    vector<string> same;
    srand(time(NULL));
    int chance = rand() % 100 + 1;

        if (chance >= (100 - ((price_f[6]*10)))){
            for(int i=0; i <= 6; i++){
                if(price_f[6] == price_f[i]){
                    same.push_back(employees_f[i]);
                }
            }
        flip = rand() % same.size();
        return same[flip];
        }
        else if (chance >= (100 - ((price_f[5]*10)))){
            for(int i=0; i <= 6; i++){
                if(price_f[5] == price_f[i]){
                    same.push_back(employees_f[i]);
                }
            }
        flip = rand() % same.size();
        return same[flip];
        }
        else if (chance >= (100 - ((price_f[4]*10)))){
            for(int i=0; i <= 6; i++){
                if(price_f[4] == price_f[i]){
                    same.push_back(employees_f[i]);
                }
            }
        flip = rand() % same.size();
        return same[flip];
        }
        else if (chance >= (100 - ((price_f[3]*10)))){
            for(int i=0; i <= 6; i++){
                if(price_f[3] == price_f[i]){
                    same.push_back(employees_f[i]);
                }
            }
        flip = rand() % same.size();
        return same[flip];
        }
        else if (chance >= (100 - ((price_f[2]*10)))){
            for(int i=0; i <= 6; i++){
                if(price_f[2] == price_f[i]){
                    same.push_back(employees_f[i]);
                }
            }
        flip = rand() % same.size();
        return same[flip];
        }
        else if (chance >= (100 - ((price_f[1]*10)))){
            for(int i=0; i <= 6; i++){
                if(price_f[1] == price_f[i]){
                    same.push_back(employees_f[i]);
                }
            }
        flip = rand() % same.size();
        return same[flip];
        }
        else if (chance >= 0){
            for(int i=0; i <= 6; i++){
                if(price_f[0] == price_f[i]){
                    same.push_back(employees_f[i]);
                }
            }
        flip = rand() % same.size();
        return same[flip];
        }  
return "Error";
}

int main() {
    string input;
    EmployeeInfo my;
    for (size_t i = 0; i < my.employees.size(); ++i) {
        cout << my.employees[i] << ": $" << my.prices[i] << " | ";
        }
    cout << endl;
    reOrder(my.employees, my.prices); 
    do {    
        cout << assignPerson(my.employees, my.prices) << " has been assigned to pay for today's coffees!" << endl;

        cout << "Type exit to escape. Else type anything to continue!" << endl;
        cin >> input;
    } while (input != "exit");

return 0;
}
