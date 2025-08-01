#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
int step = 1;

/// <summary>
/// thread1を出力する関数
/// </summary>
void printThread1() {
    std::unique_lock<std::mutex> lock(mtx);
    std::cout << "thread1\n";
    step = 2;
    cv.notify_all(); 
}

/// <summary>
/// thread2を出力する関数
/// </summary>
void printThread2() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return step == 2; }); 
    std::cout << "thread2\n";
    step = 3;
    cv.notify_all();
}

/// <summary>
/// thread3を出力する関数
/// </summary>
void printThread3() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return step == 3; }); 
    std::cout << "thread3\n";
}

int main() {
    //スレッドを生成してそれぞれの関数を実行
    std::thread t1(printThread1);
    std::thread t2(printThread2);
    std::thread t3(printThread3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}