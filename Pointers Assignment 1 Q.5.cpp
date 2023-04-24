#include <iostream>
using namespace std;

void get_string_info(string input_str, char& first_char, char& last_char, int& t_count) {
    // Get the first and last character of the string
    first_char = input_str[0];
    last_char = input_str[input_str.length() - 1];
    
    // Count the number of occurrences of 't' in the string
    t_count = 0;
    for (int i = 0; i < input_str.length(); i++) {
        if (input_str[i] == 't' || input_str[i] == 'T') { // Count both lowercase and uppercase 't'
            t_count++;
        }
    }
}

int main() {
    string input_str;
    char first_char, last_char;
    int t_count;
    
    cout << "Enter a string: ";
    getline(cin, input_str);
    
    get_string_info(input_str, first_char, last_char, t_count);
    
    cout << "First character: " << first_char << endl;
    cout << "Last character: " << last_char << endl;
    cout << "Number of occurrences of 't': " << t_count << endl;
    
    return 0;
}
