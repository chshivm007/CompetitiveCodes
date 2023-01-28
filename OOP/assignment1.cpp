#include <bits/stdc++.h>
using namespace std;
/* 
struct KYC {
    string name, DOB, pan, aadhar, address;
    float annual, saving, incomeTax = 0;

    void input_data() {
        cout << "Enter Name :\n";
        getline(cin, name);
        cout << "Enter Address\n";
        getline(cin, address);
        cout << "Enter Date of Birth in Format DD-MM-YYYY\n";
        cin >> DOB;
        cout << "Enter PAN Number \n";
        cin >> pan;
        cout << "Enter Aadhar Number\n";
        cin >> aadhar;
        cout << "Enter Annual Income (in Lakhs)\n";
        cin >> annual;
        cout << "Enter Savings under Tax Scheme \n";
        cin >> saving;
        cin.ignore();
    }

    void output_data() {
        cout << endl;
        cout << "Details of the Applicant are as Follows : " << endl;
        cout << "Name : " << name << endl;
        cout << "Date of Birth (DD-MM-YYYY) : " << DOB << endl;
        cout << "PAN Number : " << pan << endl;
        cout << "Aadhar Number : " << aadhar << endl;
        cout << "Address : " << address << endl;
        cout << "Annual Income : " << annual << endl;
        cout << "Savings Under Tax-Scheme : " << saving << endl;
    }

    void computeIncomeTax() {
        float minSave = (saving > 1.5) ? 1.5 : saving;
        if (annual < 5)
            incomeTax = 0;
        else if (annual < 10)
            incomeTax = (annual - minSave)/10;
        else incomeTax = (annual - minSave)/5;

        cout << "Income Tax as per Above Calculation is : " << incomeTax << "Lacs" << endl << endl;
    }
};

int main () {
    KYC applicant[7];
    for (int i = 0; i < 2; ++i) {
        cout << "Enter the Input of " << i+1 << "th Applicant \n"; 
        applicant[i].input_data();
        cout << "Information of " << i+1 << "th Applicant \n"; 
        applicant[i].output_data();
        applicant[i].computeIncomeTax();

    }
}
// Question 1 Completed .. 

struct Product {
    string productID, prodName;
    int discount, price, rating, salesPrice, GST = 0;

    void inputDetails() {
        cout << endl;
        cout << "Enter Product Name \n";
        getline(cin, prodName);
        cout << "Enter Product ID \n";
        cin >> productID;
        cout << "Enter Current Discount Percentage \n";
        cin >> discount;
        cout << "Enter Product Label Price \n";
        cin >> price;
        cout << "Enter Rating of the Product \n";
        cin >> rating;
        cin.ignore();
    }
    void outputDetails() {
        cout << endl;
        cout << "Name : " << prodName << endl;
        cout << "Product ID : " << productID << endl;
        cout << "Current Discount Percentage : " << discount << endl;
        cout << "Product Label Price : " << price << endl;
        cout << "User Rating : " << rating << endl;
        cout << endl;
    }
    void computeSalesPrice() {
        salesPrice = ((100 - discount) * price / 100) + GST;
        cout <<"Sales Price after Discount : " <<  salesPrice << endl;
    }
};

int main () {
    Product products[5];
    for (int i = 0; i < 5; ++i) {
        cout << "Enter Input for " << i+1 << " Product \n";
        products[i].inputDetails();
        cout << "Information of " << i+1 << " Product \n";
        products[i].outputDetails();
        products[i].computeSalesPrice();
    }
}
// Question 2 Completed ..
// Question 3, 4 Completed by Bhupinder

string binaryEquivalent (int &num) {
    string result;
    while (num != 0) {
        result += to_string(num % 2);
        num = num / 2;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int num;
    cout << "Enter a Number.. " << endl;
    cin >> num;
    cout << binaryEquivalent(num);
}
// Question 5 Complete 
*/


