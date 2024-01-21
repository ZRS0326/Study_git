//#include <Windows.h>
//#include <iostream>
//#include <mutex>  
//#include <shared_mutex>
//__declspec(thread) int g_mydata = 1;
//
//std::mutex      mutex_; 
//std::shared_mutex shared_mutex;
//DWORD __stdcall WorkerThreadProc1(LPVOID lpThreadParameter)
//{
//    while (true)
//    {
//        ++g_mydata;
//        //mutex_.lock();
//        std::unique_lock<std::shared_mutex> lock(shared_mutex);
//        std::cout << "g_mydata = " << g_mydata << ", ThreadID = " << GetCurrentThreadId() << std::endl;
//        //mutex_.unlock();
//        Sleep(10);
//    }
//    return 0;
//}
//DWORD __stdcall WorkerThreadProc2(LPVOID lpThreadParameter)
//{
//    while (true)
//    {
//        //mutex_.lock();
//
//        std::unique_lock<std::shared_mutex> lock(shared_mutex);
//        std::cout << "g_mydata = " << g_mydata << ", ThreadID = " << GetCurrentThreadId() << std::endl;
//       // mutex_.unlock();
//        Sleep(10);
//    }
//    return 0;
//}
//
//int main()
//{
//    CloseHandle(CreateThread(NULL, 0, WorkerThreadProc1, NULL, 0, NULL));
//    CloseHandle(CreateThread(NULL, 0, WorkerThreadProc2, NULL, 0, NULL));
//
//    while (true)
//    {
//        Sleep(1000);
//    }
//
//    return 0;
//}
