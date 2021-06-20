//
//  main.cpp
//  hackathon project
//
//  Created by Marcelo Lopez on 6/20/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int numOfPeople;
    int servingSize;
    int numOfBatches;
    string dish;
    int numOfIngredients;
    string ingredient1;
    string ingredient2;
    string ingredient3;
    
    int ingredient1_size;
    int ingredient2_size;
    int ingredient3_size;
    
    
    cout << "What is the dish you are making?" << endl;
    cin >> dish;
    
    cout << "How many people do you need to serve?" << endl;
    cin >> numOfPeople;
    
    cout << "What is the serving size of your dish?" << endl;
    cin >> servingSize;
    
    
    
    
    if (numOfPeople <= servingSize) {
        numOfBatches = 1;
    } else {
        numOfBatches = ceil(static_cast<double>(numOfPeople) / servingSize );
    }
    
    if (numOfBatches == 1) {
        cout << "You need to make: " << numOfBatches
        << " batch" << " of " << dish << endl << endl;
        
    } else {
        
        cout << "You need to make: " << numOfBatches
        << " batches" << " of " << dish << endl << endl;
    }
    
    cout << "How many ingriendients are in your dish? You may have a max of three" << endl;
    cin >> numOfIngredients;
    
    if (numOfIngredients > 3 || numOfIngredients ==  0) {
        cout << "Error you entered 0 ingredients or more than 3, please restart the program" << endl;
        
    } else {
        
        if (numOfIngredients == 1) {
            cout << "Enter your first ingredient" << endl;
            cin >> ingredient1;
            
            cout << "How much of " << ingredient1 << " is needed for a batch that makes your serving size of " << dish << "?" << endl;
            cout << "Please enter a number only" << endl;
            cin >> ingredient1_size;
            
            cout << "You need " << ceil(servingSize/ingredient1_size) << " of " << ingredient1
            << " to make enough " << dish << endl << endl;
            
            
            
            
            
            
        } else if (numOfIngredients == 2) {
            cout << "Enter your first ingredient" << endl;
            cin >> ingredient1;
            cout << "Enter your second ingredient" << endl;
            cin >> ingredient2;
            
            cout << "How much of " << ingredient1 << " is needed for a batch that makes your serving size of " << dish << "?" << endl;
            cout << "Please enter a number only" << endl;
            cin >> ingredient1_size;
            
            cout << "How much of " << ingredient2 << " is needed for a batch that makes your serving size of " << dish << "?" << endl;
            cout << "Please enter a number only" << endl;
            cin >> ingredient2_size;
            
            
            cout << "You need " << ceil(servingSize/ingredient1_size) << " of " << ingredient1
            << " to make enough " << dish << endl;
            
            
            cout << "You need " << ceil(servingSize/ingredient2_size) << " of " << ingredient2
            << " to make enough " << dish << endl << endl;
            
            
            
            
            
            
        } else {
            cout << "Enter your first ingredient" << endl;
            cin >> ingredient1;
            cout << "Enter your second ingredient" << endl;
            cin >> ingredient2;
            cout << "Enter your third ingredient" << endl;
            cin >> ingredient3;
            
            
            cout << "How much of " << ingredient1 << " is needed for a batch that makes your serving size of " << dish << "?" << endl;
            cout << "Please enter a number only" << endl;
            cin >> ingredient1_size;
            
            cout << "How much of " << ingredient2 << " is needed for a batch that makes your serving size of " << dish << "?" << endl;
            cout << "Please enter a number only" << endl;
            cin >> ingredient2_size;
            
            cout << "How much of " << ingredient3 << " is needed for a batch that makes your serving size of " << dish << "?" << endl;
            cout << "Please enter a number only" << endl;
            cin >> ingredient3_size;
        
            
            
            
            cout << "You need " << ceil(servingSize/ingredient1_size) << " of " << ingredient1
            << " to make enough " << dish << endl;
            
            
            cout << "You need " << ceil(servingSize/ingredient2_size) << " of " << ingredient2
            << " to make enough " << dish << endl;
            
            
            cout << "You need " << ceil(servingSize/ingredient3_size) << " of " << ingredient3
            << " to make enough " << dish << endl << endl;
            
        }
        
        
        cout << "Thank you for using EZ Recipe Calculator, enjoy your " << dish << "!" << endl;
            
            
            
            
        }

    return 0;
}
