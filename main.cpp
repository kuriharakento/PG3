#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
int current_thread = 1;

void print_thread(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [id]() { return id == current_thread; }); // 指定された順番まで待つ
    std::cout << "thread " << id << std::endl;
    ++current_thread;
    cv.notify_all(); // 次のスレッドを実行可能にする
}

int main() {
    // スレッドを作成
    std::thread t1(print_thread, 1);
    std::thread t2(print_thread, 2);
    std::thread t3(print_thread, 3);

    // すべてのスレッドが終了するのを待機
    t1.join();
    t2.join();
    t3.join();

    return 0;
}
