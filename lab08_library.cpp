#include <iostream>
#include <vector>
#include "lab08_library.hpp"

using namespace std;

Library::Library(){ // empty constructor
}

Library::Library (vector<Book> new_books) : books(new_books){ // vector of type Book called new_books
    // equivalent to books = new_books;
}

void Library::print(){ //output everything in vector
    for (int i = 0; i <= books.size(); i++){ //books.size() is max size of vector
        books[i].print();
    }
}

bool Library::insert_book(string new_title, string new_authors, string new_dop){
    bool is_inserted = false;
    for (int i = 0; i <= books.size(); i++){
        if (books[i].get_title() != new_title &&
            books[i].get_authors() != new_authors &&
            books[i].get_dop() != new_dop){ // checks if any books with same title, author and dop exist in the vector as new book to be inserted
            is_inserted = true;
        }
    }
    if (is_inserted){ // if same book does not exist, create an additional index in the vector to add the new title, author and dop
        books.push_back (Book(new_title, new_authors, new_dop)); //include "Book" because vector is off type Book so must create another Book slot
    }
    
    return is_inserted;
}

bool Library::insert_book (Book new_book){
    bool is_inserted = false;
    for (int i = 0; i <= books.size(); i++){
        if (books[i].get_title() != new_book.get_title() &&
            books[i].get_authors() != new_book.get_authors() &&
            books[i].get_dop() != new_book.get_dop()){ // checks if aspects of new_book are the same as aspects of any existing books in vector before inserting
            is_inserted = true;
        }
    }
    if (is_inserted){
        books.push_back (new_book); //why dont you need Book(new_book) here?
    }
    
    return is_inserted;
}

bool Library::remove_book (string cur_title, string cur_authors, string cur_dop){
    bool match_found = false;
    
    int i = 0;
    for (;i<= books.size() && !match_found; i++){
        if (books[i].get_title() == cur_title &&
            books[i].get_authors() == cur_authors &&
            books[i].get_dop() == cur_dop){
            match_found = true;
        }
        if (match_found) {
            books.erase(books.begin() + i);
        }
    }
return match_found;
}

bool Library::remove_book (Book cur_book){
    bool match_found = false;
    
    int i = 0;
    for (;i<= books.size() && !match_found; i++){
        if (books[i].get_title() == cur_book.get_title() &&
            books[i].get_authors() == cur_book.get_authors() &&
            books[i].get_dop() == cur_book.get_dop()){
            match_found = true;
        }
        if (match_found) {
            books.erase(books.begin() + i);
        }
    }
    return match_found;
}

