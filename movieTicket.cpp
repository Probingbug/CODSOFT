#include <iostream>
#include <vector>
#include <string>

// Define a structure to represent a movie
struct Movie {
    std::string title;
    std::string genre;
    int duration;
    int availableSeats;
};

// Define a structure to represent a booking
struct Booking {
    std::string movieTitle;
    int numberOfTickets;
};

// Function to display a list of available movies
void displayMovies(const std::vector<Movie>& movies) {
    std::cout << "Available Movies:" << std::endl;
    for (const Movie& movie : movies) {
        std::cout << "Title: " << movie.title << std::endl;
        std::cout << "Genre: " << movie.genre << std::endl;
        std::cout << "Duration: " << movie.duration << " minutes" << std::endl;
        std::cout << "Available Seats: " << movie.availableSeats << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }
}

int main() {
    // Create a vector to store available movies
    std::vector<Movie> movies = {
        {"Movie 1", "Action", 120, 100},
        {"Movie 2", "Comedy", 90, 80},
        {"Movie 3", "Drama", 150, 120}
    };

    // Create a vector to store bookings
    std::vector<Booking> bookings;

    while (true) {
        std::cout << "Movie Ticket Booking System" << std::endl;
        std::cout << "1. Display Available Movies" << std::endl;
        std::cout << "2. Book Tickets" << std::endl;
        std::cout << "3. Exit" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            displayMovies(movies);
        } else if (choice == 2) {
            displayMovies(movies);

            int selectedMovie;
            std::cout << "Select a movie (1-" << movies.size() << "): ";
            std::cin >> selectedMovie;

            if (selectedMovie < 1 || selectedMovie > movies.size()) {
                std::cout << "Invalid movie selection." << std::endl;
                continue;
            }

            int numTickets;
            std::cout << "Enter the number of tickets: ";
            std::cin >> numTickets;

            if (numTickets <= 0 || numTickets > movies[selectedMovie - 1].availableSeats) {
                std::cout << "Invalid number of tickets." << std::endl;
                continue;
            }

            // Book the tickets
            Booking booking;
            booking.movieTitle = movies[selectedMovie - 1].title;
            booking.numberOfTickets = numTickets;
            bookings.push_back(booking);

            // Update available seats
            movies[selectedMovie - 1].availableSeats -= numTickets;

            std::cout << "Tickets booked successfully!" << std::endl;
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    std::cout << "Thank you for using the Movie Ticket Booking System." << std::endl;

    return 0;
}
