#include <sys/types.h>
#include <unistd.h>
#include <iostream>

using namespace std;
int main(){
    cout << "hello" << endl;
    pid_t pid = fork();
    cout << pid << endl;
    cout << "world" << endl;
    return 0;
}
