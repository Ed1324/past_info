#include <bits/stdc++.h>
using namespace std;
#define MAXN 200005
#define ll long long
struct Book {
    string description;
    bool available;
    string ratingOfFive;
    ll quantity;
};

class MyLib {
private:
    unordered_map<string, Book> library;
public:
    MyLib(){ // initialize books
        addNewBook("1984", "This dystopian novel by George Orwell (1949) follows Winston Smith...", true, "4/5 (stars)", 2);
        addNewBook("To Kill a Mockingbird", "A novel by Harper Lee exploring themes of racial injustice...", false, "4.5/5 (stars)", 0);
        addNewBook("The Great Gatsby", "A classic novel by F. Scott Fitzgerald...", true, "4.5/5 (stars)", 1);
        addNewBook("Brave New World", "A dystopian novel by Aldous Huxley...", true, "4.5/5 (stars)", 1);
        addNewBook("Pride and Prejudice", "A classic novel by Jane Austen...", false, "5/5 (stars)", 0);
        addNewBook("A Court Of Thorns and Roses","Passionate, violent, sexy and daring ... A true page-turner By Sarah J. Maas", true, "5/5 (stars)", 1);
        addNewBook("Jane Eyre", "Sexy Jane", true, "5/5 (stars)", 1); // ts written by tony
        addNewBook("Withering Heights", "Wither skulls", true, "5/5 (stars)", 1); // ts written by tony
    }
    string findRating(string book){
        if (library.find(book) != library.end()) {
            return library[book].ratingOfFive;
        }
        return "Book Not Found";
    }
    string isBookFree(string book) {
        if (library.find(book) != library.end() && library[book].quantity != 0) {
            return "Free";
        }
        return "Book is Not Free";
    }
    string findBookDesc(string name){
        auto loc = library.find(name);
        if(loc != library.end()){
            return loc->second.description;
        } else {
            return "Book not found";
        }
    }
    void addNewBook(string name, string description, bool available, string rating, ll quantity){
        library[name] = {description, available, rating, quantity};
    }
    string borrowBook(string name){
        if (library.find(name) != library.end()) {
            if(library[name].quantity == 0){
                return "Book Already Taken";
            }
            else{
                library[name].quantity--;
                if(library[name].quantity == 0){
                    library[name].available = false;
                }
                return "Updated Value";
            }
        }
        return "Book Not Available";
    }
    string returnBook(string name){
        if (library.find(name) != library.end()) {
            if(library[name].quantity == 0){
                library[name].quantity++;
                library[name].available = true;
                return "Updated Value";
            }
            else if(library[name].quantity > 0){
                library[name].quantity++;
                return "Updated Value";
            }
        }
        return "Book Not Available";
    }
};

int main(){
    MyLib myLibrary; //we create the library
    
    cout << myLibrary.isBookFree("To Kill a Mockingbird") << endl;
    //myLibrary.addNewBook("Harry Potta", "Idk I havent't red harry potter", true, "4/5 (stars)");
    //cout << myLibrary.findBookDesc("Harry Potta") << endl;
    cout << myLibrary.findRating("1984") << endl;
    cout << myLibrary.borrowBook("To Kill a Mockingbird") << endl;
    cout << myLibrary.borrowBook("1984") << endl;
    cout << myLibrary.borrowBook("1984") << endl;
    cout << myLibrary.isBookFree("1984") << endl;
    cout << myLibrary.returnBook("1984") << endl;
    return 0;
}

