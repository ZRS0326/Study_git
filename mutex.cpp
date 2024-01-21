
//#define LOOP_COUNT           5000000
//
//#include <iostream>
//#include <mutex>  
//#include <shared_mutex>
//#include <thread>
//
//class shared_mutex_counter
//{
//public:
//	shared_mutex_counter() = default;
//	~shared_mutex_counter() = default;
//
//	//ʹ��std::shared_mutex��ͬһʱ�̶�����߳̿���ͬʱ����value_ֵ
//	unsigned int get() const
//	{
//		//ע�⣺����ʹ��std::shared_lock
//		std::shared_lock<std::shared_mutex> lock(mutex_);
//		return value_;
//	}
//
//	//ʹ��std::shared_mutex��ͬһ��ʱ�̽���һ��д�߳̿����޸�value_ֵ
//	void increment()
//	{
//		//ע�⣺����ʹ��std::unique_lock
//		std::unique_lock<std::shared_mutex> lock(mutex_);
//		value_++;
//	}
//
//	//ʹ��std::shared_mutex��ͬһ��ʱ�̽���һ��д�߳̿�������value_ֵ
//	void reset()
//	{
//		//ע�⣺����ʹ��std::unique_lock
//		std::unique_lock<std::shared_mutex> lock(mutex_);
//		value_ = 0;
//	}
//
//private:
//	mutable std::shared_mutex   mutex_;
//	//value_�Ƕ���̵߳Ĺ�����Դ
//	unsigned int                value_ = 0;
//};
//
//class mutex_counter
//{
//public:
//	mutex_counter() = default;
//	~mutex_counter() = default;
//
//	//ʹ��std::mutex��ͬһʱ�̽���һ���߳̿��Է���value_��ֵ
//	unsigned int get() const
//	{
//		std::unique_lock<std::mutex> lk(mutex_);
//		return value_;
//	}
//
//	//ʹ��std::mutex��ͬһʱ�̽���һ���߳̿����޸�value_��ֵ
//	void increment()
//	{
//		std::unique_lock<std::mutex> lk(mutex_);
//		value_++;
//	}
//
//private:
//	mutable std::mutex      mutex_;
//	//value_�Ƕ���̵߳Ĺ�����Դ
//	unsigned int            value_ = 0;
//};
//
////����std::shared_mutex
//void test_shared_mutex()
//{
//	shared_mutex_counter counter;
//	int temp;
//
//	//д�̺߳���
//	auto writer = [&counter](){
//		for (int i = 0; i < LOOP_COUNT; i++)
//		{
//			counter.increment();
//		}
//		};
//
//	//���̺߳���
//	auto reader = [&counter, &temp]() {
//		for (int i = 0; i < LOOP_COUNT; i++)
//		{
//			temp = counter.get();
//		}
//		};
//
//	//��Ŷ��̶߳���ָ�������
//	std::thread** tarray = new std::thread * [READER_THREAD_COUNT];
//
//	//��¼��ʼʱ��
//	clock_t start = clock();
//
//	//����READER_THREAD_COUNT�����߳�
//	for (int i = 0; i < READER_THREAD_COUNT; i++)
//	{
//		tarray[i] = new std::thread(reader);
//	}
//
//	//����һ��д�߳�
//	std::thread tw(writer);
//
//	for (int i = 0; i < READER_THREAD_COUNT; i++)
//	{
//		tarray[i]->join();
//	}
//	tw.join();
//
//	//��¼��ʼʱ��
//	clock_t end = clock();
//	printf("[test_shared_mutex]\n");
//	printf("thread count: %d\n", READER_THREAD_COUNT);
//	printf("result: %d cost: %dms temp: %d \n", counter.get(), end - start, temp);
//}
//
////����std::mutex
//void test_mutex()
//{
//	mutex_counter counter;
//
//	int temp;
//
//	//д�̺߳���
//	auto writer = [&counter]() {
//		for (int i = 0; i < LOOP_COUNT; i++)
//		{
//			counter.increment();
//		}
//		};
//
//	//���̺߳���
//	auto reader = [&counter, &temp]() {
//		for (int i = 0; i < LOOP_COUNT; i++)
//		{
//			temp = counter.get();
//		}
//		};
//
//	//��Ŷ��̶߳���ָ�������
//	std::thread** tarray = new std::thread * [READER_THREAD_COUNT];
//
//	//��¼��ʼʱ��
//	clock_t start = clock();
//
//	//����READER_THREAD_COUNT�����߳�
//	for (int i = 0; i < READER_THREAD_COUNT; i++)
//	{
//		tarray[i] = new std::thread(reader);
//	}
//
//	//����һ��д�߳�
//	std::thread tw(writer);
//
//	for (int i = 0; i < READER_THREAD_COUNT; i++)
//	{
//		tarray[i]->join();
//	}
//	tw.join();
//
//	//��¼����ʱ��
//	clock_t end = clock();
//	printf("[test_mutex]\n");
//	printf("thread count:%d\n", READER_THREAD_COUNT);
//	printf("result:%d cost:%dms temp:%d \n", counter.get(), end - start, temp);
//}
//
//int main()
//{
//	//Ϊ���ų����Գ�����޹����أ�����ʱֻ����һ��  
//	//test_mutex();
//	test_shared_mutex();
//	return 0;
//}
