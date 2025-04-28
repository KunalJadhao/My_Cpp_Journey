#include <iostream>
#include <vector>
using namespace std;

class Movie {
public:
    string title;
    int availableTickets;

    Movie(string t, int tickets) : title(t), availableTickets(tickets) {}
};

class Booking {
private:
    vector<Movie> movies;

public:
    void addMovie(const Movie& movie) {
        movies.push_back(movie);
    }

    void bookTicket(const string& title) {
        for (auto& movie : movies) {
            if (movie.title == title && movie.availableTickets > 0) {
                movie.availableTickets--;
                cout << "Ticket booked for \"" << movie.title << "\".\n";
                return;
            }
        }
        cout << "No tickets available for \"" << title << "\".\n";
    }

    void viewMovies() const {
        cout << "\nAvailable Movies:\n";
        for (const auto& movie : movies) {
            cout << "- " << movie.title << " (" << movie.availableTickets << " tickets left)\n";
        }
        cout << endl;
    }
};

int main() {
    Booking system;

    // Add some sample movies
    system.addMovie(Movie("Avengers", 5));
    system.addMovie(Movie("Inception", 3));
    system.addMovie(Movie("Interstellar", 4));

    int choice;
    while (true) {
        cout << "\n--- Movie Ticket Booking System ---\n";
        cout << "1. View Movies\n";
        cout << "2. Book Ticket\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            system.viewMovies();
        } 
        else if (choice == 2) {
            string movieTitle;
            cout << "Enter movie title: ";
            cin.ignore(); // To handle getline properly after cin
            getline(cin, movieTitle);
            system.bookTicket(movieTitle);
        } 
        else if (choice == 3) {
            cout << "Thank you for using the system.\n";
            break;
        } 
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
