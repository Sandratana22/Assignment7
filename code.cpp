//Assignment-7 

#include <iostream> 
#include <string>

//Performing an Array 
int main(){

//Storing the array
   string names[3]; 

//Function of finding the 1st name
   for(int i = 0; i < 3; ++i){
    cout << "Enter the names: " << (i+1)<< endl; 
    getline(cin, names[i]); 
   }

//Print the result 
   cout << "The 1st name is: " << names[0] << endl; 

    return 0; 
}
