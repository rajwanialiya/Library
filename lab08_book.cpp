#include <iostream>
#include "lab08_book.hpp"

using namespace std;

Book::Book() : title("n/a"),
authors("n/a"),
date_of_publication("n/a") {
    // code here
}

Book::Book(string new_title) : title(new_title),
authors("n/a"),
date_of_publication("n/a") {
    // code here
}

Book::Book(string new_title,
           string new_authors) : title(new_title),
authors(new_authors),
date_of_publication("n/a") {
    // code here
}

Book::Book(string new_title,
           string new_authors,
           string new_dop) : title(new_title),
authors(new_authors),
date_of_publication(new_dop) {
    // code here
}

string Book::get_title() {
    return title;
}

string Book::get_authors() {
    return authors;
}

string Book::get_dop() {
    return date_of_publication;
}

void Book::print() {
    cout << "Title: " << title << endl;
    cout << "Authors: " << authors << endl;
    cout << "Date of Publication: " << date_of_publication << endl << endl;
}
