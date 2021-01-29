#include <iostream>

using namespace std;

int main()
{
    string name;
    int id;
    string item;
    int quantity;

    string item1;
    string item2;
    string item3;

    item1 = "printer";
    item2 = "phone";
    item3 = "table";

    float priceprinter;
    float pricephone;
    float pricetable;
    float itemprice;
    float totalprice;
    float amountpayed;
    int balance;

    priceprinter = 50;
    pricephone = 40;
    pricetable = 20;

    float vat;
    vat = 0.12;
    float vatamt;

    cout << "SUPERMARKET" << endl;
    cout << "------------------------------------" << endl;
    cout << "Items been sold            Price" << endl;
    cout << "------------------------------------" << endl;
    cout << "printer                    " <<"GHC"<<priceprinter<<endl;
    cout << "phone                      " <<"GHC"<<pricephone<<endl;
    cout << "table                      " <<"GHC"<<pricetable<<endl;
    cout << "------------------------------------" << endl;
    cout << "                                    " << endl;
    cout << "Please enter your name: ";
    cin >> name ;
    cout << "Please enter your Unique ID : ";
    cin >> id;
    cout << "Please enter what you want to buy: ";
    cin >> item;
    cout << "Please enter the quantity you want to buy: ";
    cin >> quantity;
    //cout << "Please enter price of item: GHC ";
    //cin >> itemprice;


    if (item == item1) {
        cout << "The Price of a Printer is: GHC" << priceprinter<<endl;
        itemprice = priceprinter;
    }
        if (item == item2) {
            cout << "The price of a Phone is: GHC"<< pricephone<<endl;
            itemprice = pricephone;
        }
        if (item == item3)
        {

            cout << "The price of a table is: GHC"<< pricetable<<endl;
            itemprice = pricetable;
        }

    vatamt = itemprice * vat;

   totalprice = itemprice * quantity + vatamt;
   cout << "Your total amount to pay is: GHC "<<totalprice<<endl;
   cout << "Please enter amount payed: GHC ";
   cin >> amountpayed;

   balance = amountpayed - totalprice;


   if (amountpayed > totalprice) {

            cout << "   "<<endl;
            cout << "-------------------------------------"<<endl;
            cout << "       Receipt of Transaction" <<endl;
            cout << "-------------------------------------" <<endl;
            cout << "Customer: "<<name<<"     Unique ID: "<<id<<endl;
            cout << "-------------------------------------"<<endl;
            cout << "  "<<endl;
            cout << "Item                     Quantity"<<endl;
            cout << "-------------------------------------"<<endl;
            cout << item <<"                      "<<quantity <<endl;
            cout << "  " <<endl;
            cout << "Vat Amount is: GHC "<<vatamt<<endl;
            cout << "Total Cost is: GHC "<<totalprice<<endl;
            cout << "Total Amount paid is: GHC "<<amountpayed<<endl;
            cout << "Balance given is: GHC "<<balance<<endl;
            cout << "-------------------------------------"<<endl;
            cout << "Thank you for transacting with us!"<<endl;
            cout << "-------------------------------------";


   }
        else
            cout << "Sorry, your money isn't sufficient.";








    return 0;
}
