#include <iostream>
#include <string>
using namespace std;

class Message {
private:
    string internalMessage;

public:
   
    Message(const string& defaultMessage = "Default Message") 
	: internalMessage(defaultMessage) {}

   
    void print() {
       cout << internalMessage <<endl;
    }

    void print(const std::string& additionalMessage) {
        cout << internalMessage << " " << additionalMessage << endl;
    }
};
int main() {
    
    Message myMessage("Hello");
    myMessage.print();
    myMessage.print("World");
    return 0;
}

