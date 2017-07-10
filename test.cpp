#include <iostream>
#include <thread>

using namespace std;

void threadFunction(){
    	for(int i = 0; i < 10; ++i){
		cout << "in threadFunction: " << i << endl;
		sleep(100);
	}
}


int main(){
    	thread t(&threadFunction);
	for(int i = 0; i < 10; ++i){
    		cout << "in main thread: " << i  << endl;
		sleep(100);
	}
    	t.join();

    	return 0;
}
