#include <iostream>
using namespace std;

class Compressor {
public:
    virtual double compress(double size) {
        return size;
    }
};

class TextCompressor : public Compressor {
public:
    double compress(double size) override {
        return size * 0.4;
    }
};

class ImageCompressor : public Compressor {
public:
    double compress(double size) override {
        return size * 0.7;
    }
};

int main() {
    double size;
    cout << "Enter file size in MB: ";
    cin >> size;

    TextCompressor t;
    ImageCompressor i;

    cout << "Original size: " << size << " MB\n";
    cout << "Compressed text file: " << t.compress(size) << " MB\n";
    cout << "Compressed image file: " << i.compress(size) << " MB\n";

    return 0;
}