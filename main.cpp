#include "include/robot.hpp"

int main(int argc, char const *argv[]) {
  using namespace std;
  Robot *robot = new Robot();

  #include "competitions/comp2.hpp"

  delete robot;

  return 0;
}
