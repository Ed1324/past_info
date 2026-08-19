#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct info {
    bool overdue;
    vector<string> curBooks;
};

struct Book {
    bool availible;
    ll timesBorrowed;
};

class MyLib {
private:
    unordered_map<string, Book> library;
    unordered_map<string, info> id;
public:
    MyLib() {
        // Initialize books
        addNewBook("1984", true, 85);
        addNewBook("To Kill a Mockingbird", false, 73);
        addNewBook("The Great Gatsby", true, 60);
        addNewBook("Brave New World", true, 55);
        addNewBook("Pride and Prejudice", false, 48);
        addNewBook("A Court Of Thorns and Roses", true, 22);
        addNewBook("Jane Eyre", true, 41);
        addNewBook("Wuthering Heights", true, 9);
        addNewBook("We Have Always Lived in the Castle", true, 15);
        addNewBook("Great Expectations", true, 37);
        addNewBook("Animal Farm", true, 64);
        // Initialize users
        newId("Mark", false, {"Jane Eyre", "A Court Of Thorns and Roses"});
        newId("Alice", true, {"1984", "Brave New World"});
        newId("Tony", true, {"Wuthering Heights", "Jane Eyre"});
        newId("Sarah", false, {"To Kill a Mockingbird"});
        newId("Liam", true, {"The Great Gatsby"});
        newId("Emma", false, {});
        newId("Noah", true, {"We Have Always Lived in the Castle"});
        newId("Olivia", false, {"Pride and Prejudice"});
        newId("Sophia", true, {"Animal Farm"});
        newId("James", false, {"Great Expectations"});
    }
    
    void addNewBook(string name, bool availible, ll timesBorrowed) {
        library[name] = {availible, timesBorrowed};
    }
    
    void newId(string name, bool overdue, vector<string> curBooks) {
        id[name] = {overdue, curBooks};
    }
    
    bool isBookFree(string book) {
        if (library.find(book) != library.end() && library[book].availible) {
            return true;
        }
        return false;
    }

    void borrowBook(string book, string user) {
        if (id.find(user) == id.end()) cout << "User not found" << "\n";
        else if (id[user].overdue) cout << "You have overdue books" << "\n";
        else if (library.find(book) == library.end()) cout << "Book not found" << "\n";
        else if (!library[book].availible) cout << "Book is not available" << "\n";
        else{
          library[book].availible = false;
          library[book].timesBorrowed++;
          id[user].curBooks.push_back(book);
          cout << "Book borrowed by " + user << "\n";
        }
    }

    void returnBook(string book, string user) {
        if (id.find(user) == id.end()) cout << "User not found" << "\n";
        else if (library.find(book) == library.end()) cout << "Book not found" << "\n";
        else{
          auto& books = id[user].curBooks;
          auto it = find(books.begin(), books.end(), book);
          if (it == books.end()) cout << "User didn't borrow this book" << "\n";
  
          books.erase(it);
          library[book].availible = true;
          cout << "Book successfully returned by " + user << "\n";
        }
    }

    void topTen() {
        vector<pair<string, ll>> borrowedBooks;
        for (auto& entry : library) {
            if (entry.second.availible) // Only books currently available
                borrowedBooks.push_back({entry.first, entry.second.timesBorrowed});
        }

        sort(borrowedBooks.begin(), borrowedBooks.end(), [](auto& a, auto& b) {
            return a.second > b.second;
        });

        cout << "\nTop Borrowed Books (Available only):\n";
        for (int i = 0; i < min(10, (int)borrowedBooks.size()); ++i) {
            cout << i + 1 << ". " << borrowedBooks[i].first << " - " << borrowedBooks[i].second << " times\n";
        }
    }
    
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    MyLib myLibrary;

    myLibrary.borrowBook("1984", "Emma"); // successful borrow
    myLibrary.borrowBook("1984", "Alice"); // book not available (already borrowed)
    myLibrary.borrowBook("Jane Eyre", "Alice"); // user overdue, cannot borrow

    myLibrary.returnBook("Jane Eyre", "Mark"); // return book
    myLibrary.addNewBook("Jane Eyre", true, 58); // no duplicate, just changes current book
    myLibrary.topTen();
    
    if(myLibrary.isBookFree("Jane Eyre")) cout << "Free" << "\n";
    else cout << "Taken" << "\n";
    return 0;
}
