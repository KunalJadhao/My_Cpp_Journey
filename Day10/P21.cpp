#include <iostream>
#include <vector>
using namespace std;

class Post {
public:
    string content;
    int likes;

    Post(string c) : content(c), likes(0) {}

    void like() {
        likes++;
    }
};

class SocialMedia {
private:
    vector<Post> posts;

public:
    void addPost(const Post& post) {
        posts.push_back(post);
    }

    void displayPosts() const {
        if (posts.empty()) {
            cout << "No posts available.\n";
        } else {
            cout << "\n--- Posts ---\n";
            for (const auto& post : posts) {
                cout << post.content << " - Likes: " << post.likes << "\n";
            }
        }
    }

    void likePost(int index) {
        if (index >= 0 && index < posts.size()) {
            posts[index].like();
            cout << "Post liked successfully.\n";
        } else {
            cout << "Invalid post index.\n";
        }
    }
};

int main() {
    SocialMedia sm;
    int choice;

    while (true) {
        cout << "\n--- Social Media Post Management ---\n";
        cout << "1. Add Post\n";
        cout << "2. View Posts\n";
        cout << "3. Like a Post\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string content;
            cout << "Enter post content: ";
            cin.ignore();  // To handle getline properly after cin
            getline(cin, content);

            sm.addPost(Post(content));
            cout << "Post added successfully.\n";
        } 
        else if (choice == 2) {
            sm.displayPosts();
        } 
        else if (choice == 3) {
            int index;
            cout << "Enter the index of the post to like: ";
            cin >> index;
            sm.likePost(index - 1);  // Adjusting for 0-based index
        } 
        else if (choice == 4) {
            cout << "Thank you for using Social Media Post Management.\n";
            break;
        } 
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
