# Threading_Concepts_in_CPP
To understand threading concept in Cpp.

Every application there is one thread which is the main thread.


Thread is a light weight process.

Threading is used to achieve parallelism by dividing the process into multiple threads.

eg:multiple tabs in browser.

Contents:

1)Introduction
  
  -singleMainThread.cpp : program in which only one single main thread is used and calculated the duration taken to comlete the process by the single thread
  
  -twoThread.cpp : single process is divided into two threads, i.e thread1 - calculate even sum,thread2 calculate odd sum.And calculated the time required for completing the whole process.

  Conclusion: Time taken to complete the process by twoThread.cpp file is less compare to singleMainThread.cpp
