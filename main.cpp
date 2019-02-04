#include <iostream>
#include <vector>
#include "lab08_book.hpp"
#include "lab08_library.hpp"

using namespace std;

bool test_book_insertion() {
    
    bool insert = false;
    
    vector<Book> books;
    
    Book book1 ("Alice's Adventures in Wonderland", "Lewis Caroll", "1862");
    Book book2 ("Pride and Prejudice", "Jane Austen", "2000");
    Book book3 ("The Catcher in the Rye", "J.D. Salinger", "1945");
    
    books.push_back(book1);
    books.push_back(book2);
    books.push_back(book3);
    
    Library test_library(books);
    
    if (test_library.insert_book("The Catcher in the Rye", "J.D. Salinger", "1945")){
        insert = true;
    }
    
    test_library.insert_book(book3);
    
    return insert;
}

bool test_book_removal() {
    
    bool remove = true;
    
    vector<Book> books;
    
    Book book1 ("The Sound and the Fury", "William Faulkner", "1894");
    Book book2 ("To the Lighthouse", "Virginia Wolfe", "2002");
    Book book3 ("Heart of Darkness", "Joseph Conrad", "1957");
    
    books.push_back(book1);
    books.push_back(book2);
    books.push_back(book3);
    
    Library test_library(books);
    
    if (test_library.remove_book("To the Lighthouse", "Virginia Wolfe", "2002")){
        remove = true;
    }
    return remove;
}

int main(){
    cout << (test_book_insertion() ? "All insertion tests passed" : "Some test failed.");
    cout << (test_book_removal() ? "All insertion tests passed" : "Some test failed.");

    return 0;
}
