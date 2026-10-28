#include <iostream>
using namespace std;

class Recommender {
public:
    virtual double generateRecommendation(int rating, int popularity) {
        return 0;
    }
};

class PersonalizedRecommender : public Recommender {
public:
    double generateRecommendation(int rating, int popularity) override {
        return 0.7 * rating + 0.3 * popularity;
    }
};

class TrendingRecommender : public Recommender {
public:
    double generateRecommendation(int rating, int popularity) override {
        return 0.3 * rating + 0.7 * popularity;
    }
};

int main() {
    int rating, popularity;
    cout << "Enter user rating (0-100): ";
    cin >> rating;
    cout << "Enter popularity (0-100): ";
    cin >> popularity;

    PersonalizedRecommender p;
    TrendingRecommender t;

    Recommender *r;

    r = &p;
    cout << "Personalized score: "
         << r->generateRecommendation(rating, popularity) << endl;

    r = &t;
    cout << "Trending score: "
         << r->generateRecommendation(rating, popularity) << endl;

    return 0;
}