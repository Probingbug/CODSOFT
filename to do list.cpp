#include <iostream>
#include <vector>

struct Task {
    std::string description;
    bool complete;

    Task(const std::string& desc) : description(desc), complete(false) {}
};

// Function to add a task to the to-do list
void addTask(std::vector<Task>& todoList, const std::string& description) {
    Task task(description);
    todoList.push_back(task);
    std::cout << "Task added: " << description << std::endl;
}

// Function to view the to-do list
void viewTasks(const std::vector<Task>& todoList) {
    if (todoList.empty()) {
        std::cout << "The to-do list is empty." << std::endl;
        return;
    }

    std::cout << "To-Do List:" << std::endl;
    for (size_t i = 0; i < todoList.size(); i++) {
        const Task& task = todoList[i];
        std::cout << (i + 1) << ". " << task.description;
        if (task.complete) {
            std::cout << " (Complete)";
        }
        std::cout << std::endl;
    }
}

// Function to mark a task as complete
void markComplete(std::vector<Task>& todoList, size_t taskIndex) {
    if (taskIndex >= 0 && taskIndex < todoList.size()) {
        todoList[taskIndex].complete = true;
        std::cout << "Task marked as complete: " << todoList[taskIndex].description << std::endl;
    } else {
        std::cout << "Invalid task index." << std::endl;
    }
}

int main() {
    std::vector<Task> todoList;

    while (true) {
        std::cout << "Options:" << std::endl;
        std::cout << "1. Add a task" << std::endl;
        std::cout << "2. View tasks" << std::endl;
        std::cout << "3. Mark a task as complete" << std::endl;
        std::cout << "4. Quit" << std::endl;

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter the task description: ";
            std::string description;
            std::cin.ignore(); // Ignore the newline character
            std::getline(std::cin, description);
            addTask(todoList, description);
        } else if (choice == 2) {
            viewTasks(todoList);
        } else if (choice == 3) {
            std::cout << "Enter the task index to mark as complete: ";
            size_t taskIndex;
            std::cin >> taskIndex;
            markComplete(todoList, taskIndex - 1);
        } else if (choice == 4) {
            std::cout << "Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}