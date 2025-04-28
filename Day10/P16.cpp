#include <iostream>
#include <vector>
using namespace std;

class Question {
public:
    string questionText;
    string answer;

    Question(string text, string ans) : questionText(text), answer(ans) {}
};

class Quiz {
private:
    vector<Question> questions;

public:
    void addQuestion(const Question& question) {
        questions.push_back(question);
    }

    void takeQuiz() {
        int score = 0;
        for (const auto& q : questions) {
            string userAnswer;
            cout << q.questionText << "\n";
            cout << "Your answer: ";
            cin >> userAnswer;
            if (userAnswer == q.answer) {
                score++;
            }
        }
        cout << "Your score: " << score << "/" << questions.size() << "\n";
    }
};

int main() {
    Quiz quiz;

    // Add sample questions
    quiz.addQuestion(Question("What is the capital of France?", "Paris"));
    quiz.addQuestion(Question("2 + 2 equals?", "4"));
    quiz.addQuestion(Question("What color is the sky on a clear day?", "Blue"));

    cout << "--- Welcome to the Online Quiz ---\n";
    quiz.takeQuiz();

    return 0;
}
