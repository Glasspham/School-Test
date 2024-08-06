#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void manage(string library, string book, string author){
    unordered_map<string, unordered_set<int>> libraryBooks;
    unordered_map<int, string> bookInfo;
    unordered_map<string, unordered_set<int>> authorBooks;

    ifstream libraryFile(library);
    int N; libraryFile >> N;
    libraryFile.ignore();
    for(int i = 0; i < N; ++i){
        string line; getline(libraryFile, line);
        istringstream iss(line);
        string libraryName; iss >> libraryName;
        unordered_set<int> books;
        int bookID;
        while(iss >> bookID) books.insert(bookID);
        libraryBooks[libraryName] = books;
    }
    libraryFile.close();

    ifstream bookFile(book);
    int M; bookFile >> M;
    bookFile.ignore();
    for(int i = 0; i < M; ++i){
        int bookID, year;
        string genre;
        bookFile >> bookID >> year >> genre;
        bookInfo[bookID] = genre;
    }
    bookFile.close();

    ifstream authorFile(author);
    int P; authorFile >> P;
    authorFile.ignore();
    for (int i = 0; i < P; ++i) {
        string line; getline(authorFile, line);
        istringstream iss(line);
        string authorName; iss >> authorName;
        unordered_set<int> books;
        int bookID;
        while (iss >> bookID) books.insert(bookID);
        authorBooks[authorName] = books;
    }
    authorFile.close();

    string L, A;
    cin >> L >> A;
    if(libraryBooks.find(L) != libraryBooks.end() && authorBooks.find(A) != authorBooks.end()){
        for(int bookID : authorBooks[A]){
            if(libraryBooks[L].find(bookID) != libraryBooks[L].end()){
                cout << "True" << endl;
                return;
            }
        }
    }
    cout << "False" << endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string library = "./library.txt";
    string book = "./book.txt";
    string author = "./author.txt";
    manage(library,book,author);
    return 0;
}