#include <iostream>

int frames(int minutes, int fps) {
    // Calculate the number of frames as frames per second (fps) times minutes times 60 seconds per minute
    return minutes * 60 * fps;
}

int main() {

    int minute;
    int fps;

    std::cin>>minute>>fps;

    std::cout << frames(minute, fps) << std::endl;

    return 0;
}
