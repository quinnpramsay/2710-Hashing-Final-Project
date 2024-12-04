#include <iostream>
#include <cstring> // makes it so we can use functions that work with text
using namespace std;

void encrypt(char input[], int shift, int EncryptedNumbers[]) {
   for (size_t i = 0; i < strlen(input); ++i) { // goes through each letter in the text one by one until it reaches the end
       EncryptedNumbers[i] = static_cast<int>(input[i]) + shift; // this uses the ASCII key and changes each letter to a set number and then adds the shift value to make it a number only known by the user
   }
   EncryptedNumbers[strlen(input)] = -1; // sets -1 at the end to further encrypt it but also to help the decryption know when the message is over
}

void decrypt(int EncryptedNumbers[], int shift, char output[]) {
   int i = 0;
   while (EncryptedNumbers[i] != -1) { // runs through the numbers until it finds the -1 from the encryption that indicates that the message is done
       output[i] = static_cast<char>(EncryptedNumbers[i] - shift); // sets the numbers back to the ASCII letters and removes the specific shift number given by the user to get to the correct letters
       ++i;
   }
}

int main() {
   int shift, x;
   int EncryptedNumbers[300];
   char input[100];
   char decryptedMessage[100]; // storage for decrypted message

   cout << "Choose an option below: " << endl;
   cout << "1. Encrypt a message" << endl;
   cout << "2. Decrypt a message" << endl;
   cin >> x;
   cin.ignore(); // clears the leftover input so then there's no issues in the next part

   if (x == 1) {
       cout << "Please enter the message you would like to encrypt: " << endl;
       cin.getline(input, 100); 

       cout << "Enter the shift value for this message: " << endl;
       cin >> shift;

       encrypt(input, shift, EncryptedNumbers);
       cout << "Here is your encrypted message: ";
       for (int i = 0; EncryptedNumbers[i] != -1; ++i) {
           cout << EncryptedNumbers[i] << " ";
       }
       cout << "-1" << endl; 
   } else if (x == 2) {
       cout << "Enter the encrypted message: ";
       int value, i = 0;
       while (cin >> value && value != -1) {
           EncryptedNumbers[i++] = value;
       }
       EncryptedNumbers[i] = -1; 

       cout << "Enter the shift value used for encryption: " << endl;
       cin >> shift;

       decrypt(EncryptedNumbers, shift, decryptedMessage);
       cout << "Here is your decrypted message: " << decryptedMessage << endl;
   } else {
       cout << "Invalid option." << endl;
   }

   return 0;
}
