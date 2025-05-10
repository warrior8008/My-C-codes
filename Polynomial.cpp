#include <iostream>
#include <string>
using namespace std;
class Page {
public:
 int pageNumber;
 string content;
 void setPage(int num, string cont) {
 pageNumber = num;
 content = cont;
 }
 void displayPage() {
 cout << "Page " << pageNumber << ": " << content << endl;
 }
};
class Book {
public:
 Page pages[10]; // Array of 10 pages
 void createBook() {
 for (int i = 0; i < 10; ++i) {
 string content;
 cout << "Enter content for page " << i + 1 << ": ";
 getline(cin, content); // Get page content from the user
 pages[i].setPage(i + 1, content);
 }
 }
 void displayBook() {
 cout << "\nBook Contents:" << endl;
 for (int i = 0; i < 10; ++i) {
 pages[i].displayPage();
 }
 }
};
int main() {
 Book myBook;
 myBook.createBook(); // Create the book with 10 pages
 myBook.displayBook(); // Display the book content
 return 0;
}