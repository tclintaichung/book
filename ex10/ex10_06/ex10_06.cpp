#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> post_office_queue;
  post_office_queue.push(303);
  post_office_queue.push(304);
  post_office_queue.push(305);
  post_office_queue.push(306);
  post_office_queue.push(307);

  while (!post_office_queue.empty()) {
    cout << post_office_queue.front() << " is being served" << endl;
    post_office_queue.pop();
    cout << "Number in line is now: " << post_office_queue.size() << endl;
  }
  return 0; 
}