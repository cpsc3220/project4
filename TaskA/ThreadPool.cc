#include "ThreadPool.h"

ThreadPool::ThreadPool(unsigned int numThreads) {
    threads = new thread_t[numThreads];
    assert(threads != 0);
    nThreads = numThreads;
    stop = false;
    for (int i = 0; i < nThreads; i ++) {
        thread_create_p(&threads[i], &executor, (void *)this);
    }
}

int ThreadPool::submit(void (*task)(void *), void *p) {
    // PUT YOUR CODE HERE
   



     return 0;
}

void ThreadPool::shutdown(void) {
    // PUT YOUR CODE HERE
}
ThreadPool::~ThreadPool() {
    delete[] threads;
}

void ThreadPool::thread_work() {
    // PUT YOUR CODE HERE
}

void * executor(void *p) {
    ThreadPool *tp = (ThreadPool *)p;
    tp->thread_work();

    thread_exit(0);
    return 0;
}
