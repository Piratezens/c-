#include<iostream>
using namespace std;

class fruits {
    string fruitsName[50] = {"Apple", "Banana", "Cherry", "Date", "Elderberry"};
public:
    void displayFruits() {
        cout << "List of Fruits:" << endl;
        for (int i = 0; i < 50 && !fruitsName[i].empty(); i++) {
            cout << fruitsName[i] << endl;
        }
    }
    void searchFruit(string fruitname);
    void addFruit(string fruitname);
};

void fruits::searchFruit(string fruitname)
{
    bool found = false;
    for (int i = 0; i < 50; i++) {
        if (fruitsName[i] == fruitname) {
            cout << fruitname << " is found in the list" << endl;
            found = true;
            break;
        }
    }
    if (!found) { cout << fruitname << " is not found in the list" << endl;
        cout<<"do you want to add "<<fruitname<<" to the list? (yes/no): ";
    string response;
    cin >> response;
    if (response == "yes" || response == "Yes") {
        
        addFruit(fruitname);
    }
}

}
void fruits::addFruit(string fruitname) {
    for (int i = 0; i < 50; i++) {
        if (fruitsName[i] == "") {
            fruitsName[i] = fruitname;
            cout << fruitname << " has been added to the list." << endl;
            return;
        }
    }
    cout << "Fruit list is full. Cannot add more fruits." << endl;
}

int main() {
    fruits myfruits;
    myfruits.displayFruits();
    string search;
    cout << "Enter the name of the fruit to search: ";
    cin >> search;
    myfruits.searchFruit(search);
    myfruits.displayFruits(); 
    return 0;
}