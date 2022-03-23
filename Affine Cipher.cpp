#include <iostream>
using namespace std;
#include <string>
#include <istream>
// FCAI – Programming 1 – 2022 - Assignment 2
// Program Name: problem 5- page 138.cpp
// Program Description: program to compare between capacity of room meeting and attendees and see if the meeting will be hold or no.
// Last Modification Date: 23/3/2022
// Author1 and ID and group: 20210140 - s13, s14
// Purpose: know if we will hold the meeting or no.
int z =0, b = 8, x = 0,  y = 0;
string input_text ;
char alpha[26] = {'a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
// we use an array to determine the location of the letters, so we can change,encrypt and decrypt easily

void encrypt_text(){           // function that encrypt the text
    int a = 5;
    cout << " please enter a text"<< endl;
    cin.get();
    getline(cin , input_text);
    for (int i = 0 ; i < input_text.length(); i++ ){
        if (input_text[i] == 'a'){
            x = 0;            // the value of x is determined from the index of the array
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'b'){
            x = 1;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ]; // this equation is dealing with the negative and positive numbers as it can also be (a * x + b)% 26) if the divided is positive
        }
        else if (input_text[i] == 'c'){
            x = 2;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'd'){
            x = 3;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'e'){
            x = 4;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'f'){
            x = 5;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'g'){
            x = 6;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'h'){
            x = 7;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'i'){
            x = 8;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'j'){
            x = 9;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'k'){
            x = 10;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'l'){
            x = 11;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'm'){
            x = 12;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'n'){
            x = 13;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'o'){
            x = 14;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'p'){
            x = 15;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'q'){
            x = 16;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'r'){
            x = 17;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 's'){
            x = 18;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 't'){
            x = 19;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'u'){
            x = 20;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'v'){
            x = 21;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'w'){
            x = 22;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'x'){
            x = 23;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'y'){
            x = 24;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }
        else if (input_text[i] == 'z'){
            x= 25;
            input_text[i] = alpha[(((a * x + b)% 26) + 26) % 26 ];
        }


    }
}
void decrypt_text() {           // function that decrypt the text
    int c = 21;
    cout << " please enter a text"<< endl;
    cin.get();
    getline(cin , input_text);
    for (int i = 0; i < input_text.length(); i++) {
        if (input_text[i] == 'a') {
            y = 0;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];/* this equation is dealing with the negative and positive numbers
 *                                                             as it can also be (c * (y - b)) % 26) if the divided is positive,
 *                                                             but it is negative if y < 8, so we can use it in the first 8 condition */
        }
        else if (input_text[i] == 'b') {
            y = 1;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'c') {
            y = 2;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'd') {
            y = 3;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'e') {
            y = 4;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'f') {
            y = 5;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'g') {
            y = 6;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'h') {
            y = 7;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'i') {
            y = 8;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'j') {
            y = 9;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'k') {
            y = 10;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'l') {
            y = 11;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'm') {
            y = 12;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'n') {
            y = 13;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'o') {
            y = 14;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'p') {
            y = 15;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'q') {
            y = 16;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'r') {
            y = 17;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 's') {
            y = 18;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 't') {
            y = 19;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'u') {
            y = 20;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'v') {
            y = 21;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];

        }
        else if (input_text[i] == 'w') {
            y = 22;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'x') {
            y = 23;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'y') {
            y = 24;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
        else if (input_text[i] == 'z') {
            y = 25;
            input_text[i] = alpha[(26 + ((c * (y - b)) % 26)) % 26];
        }
    }
}

int main(){ //  this is the main function that we ask user to choose then enter the text
    cout << " hello user, what do like to do today 1 or 2 or 3? " << endl;
    cout << " 1-Cipher a message." << endl;
    cout << " 2-Decipher a message." << endl;
    cout << " 3-End." << endl;
    cin >> z;
    if (z == 1) {
        encrypt_text();
        cout << input_text << endl;
    }
    else if (z == 2) {
        decrypt_text();
        cout << input_text << endl;
    }

    else (z == 3);
    {
        cout << " thank you for using our app.";
    }
}