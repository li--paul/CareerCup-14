#include <iostream>
#include <vector>
#include <string>

class Book {
private:
	std::string id;
	std::string title;
	static std::vector<Book> books;
public:
        Book();
	Book(std::string id, std::string title) {this->id = id;this->title = title;}
	std::string getID() {return this->id;}
	std::string getTitle() {return this->title;}
	static void addBook(std::string id, std::string title) {
		for (std::vector<Book>::iterator it=books.begin();it!=books.end();it++) {
			if (it->getID() == id) return;
		}
		Book newBook(id,title);
		books.push_back(newBook);
	}
	static void deleteBook(std::string id) {
		for (std::vector<Book>::iterator it=books.begin();it!=books.end();it++) {
			if (it->getID() == id) {
				books.erase(it);
				return;
			}
		}
	}
        static Book* findBook(std::string id) {
                for (std::vector<Book>::iterator it=books.begin();it!=books.end();it++) {
			if (it->getID() == id) {
				return &(*it);
			}
		}
                return NULL;
        }
};

class User {
private:
        std::string id;
        std::string title;
        std::string accountType;
        static std::vector<User> users;
        
public:
        User();
        User(std::string id, std::string title, std::string accountType) {
                this->id = id;
                this->title = title;
                this->accountType = accountType;
        }
        std::string getID() {return this->id;}
        std::string getTitle() {return this->title;}
        std::string getAccountType() {return this->accountType;}
        static void addUser(std::string id, std::string title, std::string accountType) {
		for (std::vector<User>::iterator it=users.begin();it!=users.end();it++) {
			if (it->getID() == id) return;
		}
		User newUser(id,title,accountType);
		users.push_back(newUser);                
        }
        static User* findUser(std::string UserID);
};

class OnlineReaderSystem {
private:
        Book b;
        User u;
public:
        OnlineReaderSystem(Book b, User u) {this->b = b, this->u = u;}
        Book* searchBook(std::string bookID) {return b.findBook(bookID);}
        User* searchUser(std::string userID) {return u.findUser(userID);}
        void display();
        
};

int main() {
	return 0;
}
