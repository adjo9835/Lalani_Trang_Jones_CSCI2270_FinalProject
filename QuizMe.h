#ifndef QUIZME_H
#define QUIZME_H

struct FlashCard{
    string key;
    string definition;
    FlashCard *next;
    FlashCard *previous;

};

class QuizMe
{
    public:
        QuizMe();
        ~QuizMe();
        void addCard(string key);
        void findCard(string key, string definition);
        void deleteCard(string key);
        void printAll();
        void deleteAll();
        void editCard(string key);
        void uploadCards(string fileName);
        void quiz();

    protected:
    private:
        FlashCard *head;
        Flashcard *tail;
};

#endif // QUIZME_H
